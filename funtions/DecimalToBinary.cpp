#include <iostream>
using namespace std;

int decimalToBinary(int dec){
    int ans = 0
    int pow = 1;

    while(dec > 0){

        int rem = dec % 2;
        dec = dec / 2;

        ans += rem * pow;
        pow = pow * 10;
    }
    return ans;
}
int main(){
    cout << "---Decimal To Binary---" << endl;

    int dec;
    cout << "Enter the decimal number: ";
    cin >> dec;

    int bin = decimalToBinary(dec);
    return 0;
}