#include <iostream>
using namespace std;

int main(){
    enum square{
        Pawn,
        Rook,
        Bishop,
        Knight,
        Queen,
        King,
        EmptySpace = 0
    };
    
    square piecePositions [8][8];

    //Rook starting positions
    piecePositions[0][0] = piecePositions[0][7] = Rook;
    piecePositions[7][0] = piecePositions[7][7] = Rook;

    return 0;
}