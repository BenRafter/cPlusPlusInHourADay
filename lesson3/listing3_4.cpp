#include <iostream>
using namespace std;

int main(){
    int Integer = 0;

    unsigned short uShortValue = 65'535;
    cout << "Incrementing unsigned short " << uShortValue << " gives: ";
    cout << ++uShortValue << endl;

    short signedShort = 32'767;
    cout << "Incrementing signed short " << signedShort << " gives: ";
    cout << ++signedShort << endl;

    return 0;
}