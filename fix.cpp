#include <iostream>
#include <string>
// fixed general styling issues i.e. curly brace placement and spacing

using namespace std; //fix

int main(){

    string lastName;
    int stuScore;
    int totPoints = 0; //start at 0
    int i = 3; //added separate variable at 3
    float grade; // moved to top
    string message;

    cout << "Please enter last name: ";
    cin >> lastName; //removed from for loop

    for (int i = 1; i <= 3; i++){ // i starts at 1
        cout << "Enter grade number " << i << " : ";
        cin >> stuScore;
        totPoints = (totPoints + stuScore);} //changed math

    cout << lastName << " ";
    grade = totPoints / i;
    cout << grade << "%, ";

    if (grade >= 90)
        message = "Excellent";

    else if (grade >= 80)
        message = "Well Done";

    else if (grade >= 70) //removed semicolon
        message = "Good";

    else if(grade >= 60)
        message = "Need Improvement";

    else if (grade <= 50) //changed to 50
        message = "Fail";

    cout << message << endl;
    return 0;}
