#include <iostream>
using namespace std;

int main()
{
    cout << "--- Palindrome Checker ---" << endl;

    // Input a number
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a palindrome
    int originalNumber = number;
    int reversedNumber = 0;

    // Reverse the number
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    // Output the result
    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }

    return 0;
}