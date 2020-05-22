// Do a program to evaluate any pair of values x and y given by the user in equation 3x – 2y

#include <iostream>
using namespace std;
int main() {
    int x, y, equation;
    cout << "Enter a value for x to solve 3x - 2y: " << endl;
    cin >> x;
    cout << "Enter a value for y to solve 3x - 2y: " << endl;
    cin >> y;

    equation = (3 * x) - (2 * y);

    if (equation == 1){
        cout << "The solution is correct! The answer is 1." << endl;
    }
    else {
        cout << "This is incorrect. Try again." << endl;
    }

}