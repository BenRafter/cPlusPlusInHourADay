#include <iostream>
using namespace std;

int main(){
    int threesRowsThreeColumns [3][3] = \
    {{-501,205,2016},{989,101,206},{303,456,596}};

    cout << "Row 0: " << threesRowsThreeColumns[0][0] << " " \
    <<threesRowsThreeColumns [0][1] << " "\
    <<threesRowsThreeColumns [0][2]<<endl;

    cout << "Row 1: " << threesRowsThreeColumns[1][0] << " " \
    <<threesRowsThreeColumns [1][1] << " "\
    <<threesRowsThreeColumns [1][2]<<endl;

    cout << "Row 0: " << threesRowsThreeColumns[2][0] << " " \
    <<threesRowsThreeColumns [2][1] << " "\
    <<threesRowsThreeColumns [2][2]<<endl;

    return 0;
}