//Write a program that asks the user for a number n and prints the result of the sum of the numbers from n to 2n.

#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;

    cout << "Input a number: " << endl;
    cin >> num;

    while (num > 0)
    {
        sum += 2*num;
        num--;
    }

    cout << "The sum of all numbers till the given number is: " << sum << endl;
    return 0;
}