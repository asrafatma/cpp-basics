#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius){
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main(){
    double celsius = 0.0;

    cout << "Enter the temperature in Celcius: " << endl;

    if (cin >> celsius) {
        double fahrenheit = celsiusToFahrenheit(celsius);
        cout << celsius << "°C is equal to " << fahrenheit << "°F\n";
    } else {
        cout << "Invalid input. Please enter a valid number.\n";
    }
    return 0;
}