#include <iostream>
using namespace std;

//function to greet the user
void greetUser(string name) {
    cout << "Hello, " << name << "! Welcome to C++ programming." << endl;
}

// Main function to demonstrate the greeting
int main(){
    string username;
    cout << "Enter your username: ";
    cin >> username;

    greetUser(username);
    return 0;
}