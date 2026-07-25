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
    cout << "---Binary To Decimal---" << endl;

    int bin;
    cout << "Enter the binary number: " << endl;
    cin >> bin;

    int dec = binaryToDecimal(bin);
    cout << "The decimal equivalent of "  << bin << " is " << dec << "." << endl;
    return 0;
}