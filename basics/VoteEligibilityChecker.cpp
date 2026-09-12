#include <iostream>
using namespace std;

int main()
{
    // Input age
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Determine eligibility
    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }
    
    return 0;
}