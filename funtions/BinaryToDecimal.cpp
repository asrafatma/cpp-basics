#include <iostream>
using namespace std;

int binaryToDecimal(long long bin) {
    if (bin == 0) return 0;

    int ans = 0;
    int power = 1;

    while (bin > 0) {
        int rem = bin % 10; 
        bin = bin / 10;

        ans += (rem * power);
        power *= 2; 
    }

    return ans;
}

int main() {
    long long bin;
    cout << "Enter the binary number: ";
    cin >> bin;

    int dec = binaryToDecimal(bin);

    cout << "The decimal equivalent of " << bin << " is " << dec << "." << endl;
    return 0;
}