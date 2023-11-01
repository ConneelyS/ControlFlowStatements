#include <iostream>
using namespace std;

int main() {

//  Basic If Statements

    const int min {10};
    const int max {100};
    int number {};

    cout << "Please enter a number between 1 and 100: ";
    cin >> number;

    if (number > max) {
        cout << number << " is greater than " << max << endl;
    }

    if (number < min) {
        cout << number << " is less than " << min << endl;
    }

    if (number >= min && number <= max) {
        cout << number << " is within " << min << " and " << max << endl;
    }
    

//  Else If Statements
//      Input value for true == 1 - All other input is false

    bool licence;

    cout << "Do you have a drivers licence?" << endl;
    cin >> licence;

    if (licence) {
        cout << "You can drive" << endl;
    }
    else if (!licence) {
        cout << "You do not have a licence" << endl;
    }


//    Conditional Operator
//      (condition_expression) ? expression1 : expression2
    int value {};

    cout << "Please a number to test conditional operators: " << endl;
    cin >> value;
    cout << ((value >= 50) ? "Value greater than 50" : "Value less than 50");


    return 0;
}
