#include <iostream>
using namespace std;

int getMaxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int getMaxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main(){
    int choice;
    
    cout << "Select an option:\n";
    cout << "2. Find maximum of 2 numbers\n";
    cout << "3. Find maximum of 3 numbers\n";
    cout << "Enter choice (2 or 3): ";
    cin >> choice;

    if (choice == 2) {
        int x, y;
        cout << "Enter the first number: ";
        cin >> x;
        cout << "Enter the second number: ";
        cin >> y;
        cout << "The maximum value is: " << getMaxOfTwo(x, y) << endl;
    }
    else if (choice == 3) {
        int a, b, c;
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << "Enter the third number: ";
        cin >> c;
        cout << "The maximum value is: " << getMaxOfThree(a, b, c) << endl;
    }
    else {
        cout << "Invalid choice! Please enter either 2 or 3." << endl;
    }
    return 0;
}