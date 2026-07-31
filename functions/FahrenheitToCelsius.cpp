#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main(){
    double fahrenheit;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = fahrenheitToCelsius(fahrenheit);

    cout << fahrenheit << "°F is equal to " << celsius << "°C\n";
    return 0;
}