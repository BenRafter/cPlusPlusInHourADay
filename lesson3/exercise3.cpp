#include <iostream>
using namespace std;

int main(){
    const int pi = 22/7;

    unsigned int radius = 0;
    cout << "What is the radius of your circle: ";
    cin >> radius;

    cout << "Circle circumference: " << (2 * pi * radius) << endl;

    cout << "Circle area: " << pi*(radius * radius) << endl;

    return 0;
}