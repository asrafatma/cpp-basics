#include <iostream>
using namespace std;

int main()
{
    cout << "---SUM OF TWO NUMBERS---" << endl;

    //User input
    double num1;
    cout << "Enter first number: "; 
    cin >> num1;

    double num2;
    cout << "Enter second number: "; 
    cin >> num2;

    //Calculating sum
    double sum = num1 + num2;
    
    //Displaying result
    cout << "Sum: " << sum << endl;

    return 0;
}