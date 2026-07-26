#include <iostream>
using namespace std;

double CelciusToFahrenheit(double c){
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main(){
    double celsius = 0.0;

    cout << "Enter the temperature in Celcius: " << endl;
    cin >> celsius;
    return 0;
}