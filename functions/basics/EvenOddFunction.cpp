#include <iostream>
using namespace std;

// Function to check if a number is even
bool isEven(int number) {
    return (number % 2 == 0);
}

// Main function to demonstrate the even-odd check
int main(){

    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isEven(num)) {
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }
    return 0;
}