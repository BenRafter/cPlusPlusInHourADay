#include <iostream>
using namespace std;

int main(){
    int startingValue = 0;

    cout << "Starting value: " << startingValue << endl;

    int incrementPostfix = startingValue++;
    cout << "Starting value before postfix increment: " << startingValue << endl;
    cout << "Starting value after postfix increment: " << incrementPostfix << endl;
    startingValue = 0;

    int incrementPrefix = ++startingValue;
    cout << "Starting value before prefix increment: " << startingValue << endl;
    cout << "Starting value after prefix increment: " << incrementPrefix << endl;
    startingValue = 0;

    int decrementPostfix = startingValue--;
    cout << "Starting value before postFix decrement: " << startingValue << endl;
    cout << "Starting value after postFix decrement: " << decrementPostfix << endl;
    startingValue = 0;

    int decrementPprefix = --startingValue;
    cout << "Starting value before preFix decrement: " << startingValue << endl;
    cout << "Starting value after preFix decrement: " << decrementPprefix << endl;
    startingValue = 0;

    return 0;
}