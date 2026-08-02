#include <iostream>
using namespace std;

long calculateFactorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
} 

int main(){
    return 0;
}