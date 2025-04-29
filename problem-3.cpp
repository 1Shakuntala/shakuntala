#include <iostream>
#include <string>

using namespace std;

int main() {
    double a, b;
    string operation_type;

    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;
    cout << "Enter the operation (addition, subtraction, multiplication, division): ";
    cin >> operation_type;

    double result = 0;

    if (operation_type == "addition") {
        result = a + b;
    }
    else if (operation_type == "subtraction") {
        result = a - b;
    }
    else if (operation_type == "multiplication") {
        result = a * b;
    }
    else if (operation_type == "division") {
        if (b != 0) {
            result = a / b;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
    }
    else {
        cout << "Invalid operation type." << endl;
        return 0;
    }

    cout << "The result of " << operation_type << " is: " << result << endl;

    return 0;
}