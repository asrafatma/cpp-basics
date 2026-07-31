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
    return 0;
}