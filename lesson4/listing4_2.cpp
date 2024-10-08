#include <iostream>
using namespace std;
constexpr int Square(int number) {return number*number;}

int main(){
    const int ARRAY_LENGTH = 5;

    int myNumbers[ARRAY_LENGTH] = {5, 10, 0, -101, 20};

    int moreNumbers [Square(ARRAY_LENGTH)];

    cout << "Enter index of element to be changed: ";
    int elementIndex = 0;
    cin >> elementIndex;

    if(elementIndex > ARRAY_LENGTH){
        cout << "Entered index is greater than possible index, stopping..." << endl;
        return 0;
    }

    cout << "Enter new value: ";
    int newValue = 0;
    cin >> newValue;

    myNumbers[elementIndex] = newValue;
    moreNumbers[elementIndex] = newValue;

    cout << "Element " << elementIndex << "in myNumbers: ";
    cout << myNumbers[elementIndex] << endl;

    cout << "Element " << elementIndex << "in moreNumbers: ";
    cout << moreNumbers[elementIndex] << endl;

    return 0;
}