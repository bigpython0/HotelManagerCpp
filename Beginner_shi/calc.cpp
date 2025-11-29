#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to calc - Calc is short for Calculator btw!\n";
    cout << "Choose two numbers please\n";

    int num1, num2;

    cin >> num1;
    cin >> num2;

    int operation;
    cout << "Choose operation: \n(1) Addition \n(2) Subtraction\n(3) Multiplication\n";
    cin >> operation;

    cout << "Your result is: ";

    switch(operation) {
        case 1:
            cout << num1 + num2;
            break;
        case 2: 
            cout << num1 - num2;
            break;
        case 3:
            cout << num1 * num2;
            break;
        default:
            cout << "Weird num bruh";
    }
    
}