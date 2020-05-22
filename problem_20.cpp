//Modify the elementary math tutor program so that the student chooses the operation (+, -, *, /) 
//they want to practice. In this version the user can select the 
//figures of the two numbers separately. Make the respective validations that can be found.

#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    string operation;

    cout << "Choose an operation you'd like to do: \n" << endl;
    cout << "If sum, write '+'." << endl;
    cout << "If multiplication, write '*'." << endl;
    cout << "If division, write '/'." << endl;
    cout << "If subtraction, write '-'." << endl;
    cin >> operation;

    cout << "Input the first number: " << endl;
    cin >> num1;
    cout << "Input the second number: " << endl;
    cin >> num2;

    if(operation == "+") {
        cout << "The answer is: " << num1 + num2 << endl;
    }
    else if(operation == "*") {
        cout << "The answer is: " << num1 * num2 << endl;
    }
    else if(operation == "/") {
        cout << "The answer is: " << num1 / num2 << endl;
    }
    else if(operation == "-") {
        cout << "The answer is: " << num1 - num2 << endl;
    }
}