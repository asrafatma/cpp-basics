#include <iostream>
using namespace std;

bool isEven(int number) {
    return (number % 2 == 0);
}

int main(){

    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isEven(num)) {
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }
    return 0;
}