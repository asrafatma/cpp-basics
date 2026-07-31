#include <iostream>
using namespace std;

void greetUser(std::string name) {
    cout << "Hello, " << name << "! Welcome to C++ programming." << endl;
}

int main(){
    string username;
    cout << "Enter your username: ";
    cin >> username;
    return 0;
}