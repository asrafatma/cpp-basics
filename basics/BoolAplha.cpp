#include <iostream>
using namespace std;

int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;

    cout << boolalpha; // enable printing "true"/"false"

    cout << isCodingFun << "\n";   // Outputs true
    cout << isFishTasty << "\n";   //outputs false

    //implementation of noboolalpha disable printing "true"/"false"

    bool isCodingFun = true;

    cout << boolalpha;   // print as true/false
    cout << isCodingFun << "\n";  // Outputs true

    cout << noboolalpha; // reset to 1/0
    cout << isCodingFun << "\n";  // Outputs 1

    return 0;
}