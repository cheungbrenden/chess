//
// Created by cheun on 6/15/2020.
//

#include "Board.h"
#include <list>

#include <iostream>
using namespace std;

Board::Board() {

}

Board::~Board() {

}

void Board::display() {
    cout << " -- -- -- -- -- -- -- -- \n";
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {

        }
        cout << "\n -- -- -- -- -- -- -- -- \n";
    }
}

void Board::setPieceCoord(Piece* p, int c, int r) {

}

int Board::getPieceCoordCol() {
    return 1;
}

int Board::getPieceCoordRow() {
    return 1;
}