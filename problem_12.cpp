// Write a program that create the following sequence: 5, 8, 13, 21, 34, 55, 89,144, 233, 377, … Note that
//the next value is calculated by adding the previous two numbers, i.e. 233 + 377 = 610.

#include <iostream>
using namespace std;
int main() {
    int num1 = 5, num2 = 8, i, n = 10, sum = 0;

    for(i = 0; i < n; i++)
    {
        if(i <= 1){
            sum = 1;
        }
        else{
            sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }

        cout << "The sequence is as follows: " << sum << endl;
    }
    
}