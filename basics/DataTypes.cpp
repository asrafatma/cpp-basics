#include <iostream>
using namespace std;

int main() {
    int myNum = 5;  //4 bytes
    double myFloatNum = 5.99;  //8 bytes
    char myLetter = 'D';  //1 byte
    string myText = "Hello";   // 2 bytes per character
    bool myBoolean = true;  //1 byte

    cout << myNum << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    return 0;
}