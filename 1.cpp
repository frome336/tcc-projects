// Reads an unspecified number of sorted values from a file specified by the user,
// and displays the median value (The median is the middle number when the numbers
// are sorted by size.), average value, and how many numbers were read.
// (Note: Do not use an array.)
#include <iostream>
#include <fstream>

using namespace std;

// Prompt user for file name and return ifstream
// Pre: inData declared
// Post: inData contains valid ifstream for data file
void GetFileInfo(ifstream& inData);

// Reads and counts values in a file and calculates the average
// Pre: inData contains valid ifstream to a file of sorted float values
// Post: numCt contains number of values in file
//       avg contains average of the values
void GetInitialValues(ifstream &inData, int &numCt, float &avg);

// Finds and returns the median of float values in a file
// Pre: inData links to a file of sorted float values and
//      numCt contains the number of values
// Post: Return median of values read from file
float GetMedian(ifstream &inData, int numCt);

// Returns the specified number from a file
// Pre: inData contains link to a valid file containing float values
//      numsToRead contains the index of the value to return from the file
// Post: Returns the numsToRead(th) number in the file
float GetNumber(ifstream &inData, int numsToRead);

// Prints calculated results
// Pre: median contains calculated median
//      avg contains calculated average
//      numCt contains number of values read
// Post: Formatted values printed to screen
void DisplayResults(float median, float avg, int numCt);

int main(){
    ifstream inData;    // Link to input file
    int numCt;          // Number of values in file
    float avg;          // Average of numbers read
    float median;       // Holds median value from file

    // Call function to get/open file
    GetFileInfo(inData);

    // Call function to calculate initial values (numCt, sum, avg)
    GetInitialValues(inData, numCt, avg);

    // Call function to find median value
    median = GetMedian(inData, numCt);

    // Display results
    DisplayResults(median, avg, numCt);

    // Close file
    inData.close();

    return 0;

}

// Prompt user for file name and return ifstream
// Pre: inData declared
// Post: inData contains valid ifstream for data file
void GetFileInfo(ifstream& inData){
    string filename;

    do {
        // Prompt user for file name and open file
        cout << "Enter file containing input values: ";
        cin >> filename;

        inData.open(filename.c_str());

        if (!inData)
            cout << "Invalid file!\n\n";


    } while (!inData); // Loop until valid file name provided
}

// Reads and counts values in a file and calculates the average
// Pre: inData contains valid ifstream to a file of sorted float values
// Post: numCt contains number of values in file
//       avg contains average of the values
void GetInitialValues(ifstream &inData, int &numCt, float &avg){
    float sum = 0;  // Sum of all values in file initialized to 0
    float num;

    numCt = 0;

    // Priming read of file
    inData >> num;

    // Loop until end of file
    while (inData){

        // Update sum
        sum += num;

        // Update numCt
        numCt++;

        // Read next number
        inData >> num;
    }

    // Calculate average
    avg = sum / numCt;

//    cout << "AVG: " << avg << endl; <<== Only here for testing
}

// Finds and returns the median of float values in a file. The median is the
// middle number when the numbers are sorted by size. If there are an even number
// of values, the median is the average of the middle two.
// Pre: inData links to a file of sorted float values and
//      numCt contains the number of values
// Post: Return median of values read from file
float GetMedian(ifstream &inData, int numCt){
    float num1, num2;   // Values read from file
    int numsToRead;     // Number of values to read from file
    float median;       // Median value from file

    if (numCt % 2 == 1) { // If numCt is odd
        numsToRead = (numCt / 2) + 1;           // Middle of list of numbers
        median = GetNumber(inData, numsToRead); // See below for documentation
    } else {
        // Get middle two numbers (num1 & num2)
        num1 = GetNumber(inData, numCt / 2);
        num2 = GetNumber(inData, numCt / 2 + 1);
        median = (num1 + num2) / 2;
    }

//    cout << "MEDIAN: " << median << endl; <<== Only here for testing

    return median;

}

// Returns the specified number from a file
// Pre: inData contains link to a valid file containing float values
//      numsToRead contains the index of the value to return from the file
// Post: Returns the numsToRead(th) number in the file
float GetNumber(ifstream &inData, int numsToRead){
    float num;

    // Reset file marker to beginning of file
    inData.clear();
    inData.seekg(0);

    // Read numsToRead values from the file
    for (int i = 0; i < numsToRead; i++){
        inData >> num;
//        cout << num << " "; <<== Only here for testing
    }

    // Return last number read from file
    return num;
}


// Prints calculated results
// Pre: median contains calculated median
//      avg contains calculated average
//      numCt contains number of values read
// Post: Formatted values printed to screen
void DisplayResults(float median, float avg, int numCt){
    // Output median, avg , and numCt
    cout << endl;
    cout << "Total values: " << numCt << endl;
    cout << "Median: " << median << endl;
    cout << "Average: " << avg << endl;
}
