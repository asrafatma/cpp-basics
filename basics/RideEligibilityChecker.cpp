#include <iostream>
using namespace std;

int main()
{
    cout << "--- Ride Eligibility Checker (AND) ---" << endl;

    int min_height = 44; // Minimum height in inches
    int min_age = 7;     // Minimum age in years

    // Input height and age
    cout << "Enter your height in inches: ";
    int height;
    cin >> height;

    // Input age
    cout << "Enter your age in years: ";
    int age;
    cin >> age;

    // Determine eligibility using logical AND operator
    bool canRide = (height >= min_height) && (age >= min_age);
    
    // Output result
    cout << "Allowed to board the ride? (1 = Yes, 0 = No): " << canRide << endl;
    return 0;
}