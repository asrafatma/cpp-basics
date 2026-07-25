#include <iostream>
using namespace std;

int decimalToBinary(int dec){
    if (dec == 0) return 0;

    long long ans = 0;
    long long power = 1;

    while(dec > 0){
        int remainder = dec % 2;
        dec = dec / 2;

        ans += (remainder * power);
        power = power * 10;
    }
    return ans;
}
int main(){
    cout << "---Decimal To Binary---" << endl;

    int dec;
    cout << "Enter the decimal number: ";
    cin >> dec;

    long long bin = decimalToBinary(dec);

    cout << "The binary equivalent of "  << dec << " is " << bin << "." << endl;
    return 0;
}