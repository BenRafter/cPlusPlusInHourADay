#include <iostream>
using namespace std;

int main(){
    unsigned int unsignedInteger = 10;
    signed int signedInteger = 10;
    long int longExample = 10;

    cout << "Size of unsignedInteger: " << sizeof(unsignedInteger) << endl;
    cout << "Size of signedInteger: " << sizeof(signedInteger) << endl;
    cout << "Size of longExample: " << sizeof(longExample) << endl;


    return 0;
}