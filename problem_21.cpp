//Write a program that allows you to guess a random number between 255 and 500. 
//The program should give you clues if the number is greater or smaller on each attempt.

#include <iostream>
using namespace std;
int main() {
    int num, winningnum;

    winningnum = 300;
    do{
    cout << "Guess the winning number between 255 and 500: " << endl;
    cin >> num;

    if(num > winningnum){
        cout << "Too high. Choose another number." << endl;
    }
    else if(num < winningnum){
        cout << "Too low. Choose another number." << endl;
    }
    else{
        cout << "THAT'S THE NUMBER!" << endl;
        break;
    }
    } while(true);
}

