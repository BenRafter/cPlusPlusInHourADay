#include <iostream>
using namespace std;

int main(){
    int numberToProcess = 0;
    cout << "Type number to process: " << endl;
    cin >> numberToProcess;
    
    int result = ((numberToProcess << 1)+5)<<1;
    cout << "Processed number result: " << result << endl;

    return 0; 
}