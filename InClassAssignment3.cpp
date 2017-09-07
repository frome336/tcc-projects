// Reads an unspecified number of sorted values from a file specified by the user,
// and displays the median value (The median is the middle number when the numbers
// are sorted by size.), average value, and how many numbers were read.
// (Note: Do not use an array.)
#include <fstream>
#include <iostream>

using namespace std;

// Prompt user for file name and return ifstream
// Pre: inData declared
// Post: inData contains valid ifstream for data file
void GetFileInfo(ifstream &inData);

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
void GetFileInfo(ifstream &inData){

cout << "OPENING FILE!" << endl;
    // inData.open()
    // Prompt user for file name and open file
    // Loop until valid file name provided
}

// Reads and counts values in a file and calculates the average
// Pre: inData contains valid ifstream to a file of sorted float values
// Post: numCt contains number of values in file
//       avg contains average of the values
void GetInitialValues(ifstream &inData, int &numCt, float &avg){


cout << "GETTING INITIAL VALUES!" << endl;
    // Priming read of file

    // Loop until end of file

        // Update sum
        // Update numCt
        // Read next number

    // Calculate average
}

// Finds and returns the median of float values in a file. The median is the
// middle number when the numbers are sorted by size. If there are an even number
// of values, the median is the average of the middle two.
// Pre: inData links to a file of sorted float values and
//      numCt contains the number of values
// Post: Return median of values read from file
float GetMedian(ifstream &inData, int numCt){



cout << "CALCULATING MEDIAN!" << endl;
    // If numCt is odd
        // Get middle number of list
    // else
        // Get middle two numbers and divide by 2

    //return median;

}

// Prints calculated results
// Pre: median contains calculated median
//      avg contains calculated average
//      numCt contains number of values read
// Post: Formatted values printed to screen
void DisplayResults(float median, float avg, int numCt){

   cout << "DISPLAYING RESULTS!" << endl;
    // Output median, avg , and numCt
}

// Returns the specified number in a list from a file
// Pre: inData contains link to a valid file containing float values
//      numsToRead contains the index of the value to return from the file
// Post: Returns the numsToRead(th) number in the file
float GetNumber(ifstream &inData, int numsToRead){

    // Read numsToRead values from the file

    // Return last number read from file
}
