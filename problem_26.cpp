//Write a program that print the multiplication tables as show in the next image.

#include <iostream>
using namespace std;
int main() {
    for (int numtable = 0; numtable <= 12; numtable++)
        for (int i = 1; i <=12; i++)
        cout << numtable << " * " << i << " = " << numtable*i << endl;
}