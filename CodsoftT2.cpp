#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero\n";
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator\n";
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}