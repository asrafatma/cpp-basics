#include <iostream>
using namespace std;

int binaryToDecimal(int bin){
    if(bin == 0) return 0;

    int ans = 0;
    int power = 1;

    while(bin > 0){
        int rem = bin % 2;
        bin = bin /10;

        ans = (rem * power);
        power *= 2;
    }
    return ans;
}

int main(){
    cout << "---Binary To Decimal---" << endl;
    return 0;
}