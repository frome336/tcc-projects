#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    //Prompt user for file name and open file
    //Pre:inData defined as ifstream variable
    //Post: File was opened and inData contains link to file
    GetFileInfo(inData);

    CountNumbers(inData);

    CalcMedian(inData);

    CalcAverage(inData);

    DisplayResults(inData);

    return 0;

}
