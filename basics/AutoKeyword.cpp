#include <iostream>
using namespace std;

int main (){
    auto myNum = 5; // int
    auto myFloatNum = 5.99f; // float
    auto myDoubleNum = 9.98; // double
    auto myLetter = 'D'; // char
    auto myBoolean = true; // bool
    auto myString = string("Hello"); // std::string

    /* if you try to re assign myNum a 
    float value you will get an error*/

    cout << "myNum: " << myNum << endl;
    cout << "myFloatNum: " << myFloatNum << endl;
    cout << "myDoubleNum: " << myDoubleNum << endl;
    cout << "myLetter: " << myLetter << endl;
    cout << "myBoolean: " << myBoolean << endl;
    cout << "myString: " << myString << endl;

    return 0;
}