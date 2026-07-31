#include <iostream>
using namespace std;

int getMaxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int getMaxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main(){
    int choice;
    
    cout << "Select an option:\n";
    cout << "2. Find maximum of 2 numbers\n";
    cout << "3. Find maximum of 3 numbers\n";
    return 0;
}