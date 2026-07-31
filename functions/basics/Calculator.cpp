#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b; 
}

double subtract(double a, double b) { 
    return a - b; 
}

double multiply(double a, double b) { 
    return a * b; 
}

double divide(double a, double b) { 
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b; 
}
int main(){
    int choice;

    cout << "Select an operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        double num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;
    }
    return 0;
}