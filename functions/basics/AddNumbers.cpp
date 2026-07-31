#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    return 0;
}