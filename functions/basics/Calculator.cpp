#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b; 
}

double subtract(double a, double b) { 
    return a - b; 
}

double multiply(double a, double b) { 
    return a * b; 
}

double divide(double a, double b) { 
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b; 
}
int main(){
    return 0;
}