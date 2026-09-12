#include <iostream>
using namespace std;

int main()
{
    //input temperature in Celsius
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    //conversion formula from Celsius to Fahrenheit
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}