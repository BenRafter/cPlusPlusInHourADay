#include <iostream>
using namespace std;

int DemoConsoleOutput();

int main(){
    DemoConsoleOutput();
    return 0;
}

int DemoConsoleOutput(){
    cout << "This is a simple string literal" << endl;
    cout << "writing number five: " << 5 << endl;
    cout << "Performing devision 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;
    cout << "10 - 5 = : " << 10 - 5 << endl;
    cout << "10 * 5 = : " << 10 * 5 << endl;
    return 0;
}