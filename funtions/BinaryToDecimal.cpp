#include <iostream>
using namespace std;

int binaryToDecimal(int bin){
    if (dec == 0) return 0;

    long long ans = 0;
    long long power = 1;

    while (dec > 0) {
        int rem = dec % 2;
        dec = dec / 2;

        ans += (rem * power);
        power *= 10;
    }

    return ans;
}

int main(){
    int dec;
    cout << "Enter the decimal number: ";
    cin >> dec;

    long long bin = decimalToBinary(dec);

    cout << "The binary equivalent of " << dec << " is " << bin << "." << endl;
    return 0;
}