//
// Created by cheun on 6/15/2020.
//

#include "Bishop.h"

Bishop::Bishop(bool isWhite, int row, int col) : Piece(isWhite, row, col, false) {
    m_pieceType = 'B';
}

Bishop::~Bishop() {

}

bool Bishop::isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces) {

    bool check = false;

    // UP RIGHT
    int tempRow = startRow;
    int tempCol = startCol;
    while (tempRow >= 0 && tempCol <= 7) {
        spaces.push_back(make_pair(tempRow, tempCol));
        if (tempRow == endRow && tempCol == endCol) {
            check = true;
        }
        tempCol++;
        tempRow--;
    }

    // UP LEFT
    tempRow = startRow;
    tempCol = startCol;
    while (tempRow >= 0 && tempCol >= 0) {
        spaces.push_back(make_pair(tempRow, tempCol));
        if (tempRow == endRow && tempCol == endCol) {
            check = true;
        }
        tempCol--;
        tempRow--;
    }
    // DOWN RIGHT
    tempRow = startRow;
    tempCol = startCol;
    while (tempRow <= 7 && tempCol <= 7) {
        spaces.push_back(make_pair(tempRow, tempCol));
        if (tempRow == endRow && tempCol == endCol) {
            check = true;
        }
        tempCol++;
        tempRow++;
    }
    // DOWN LEFT
    tempRow = startRow;
    tempCol = startCol;
    while (tempRow <= 7 && tempCol >= 0) {
        spaces.push_back(make_pair(tempRow, tempCol));
        if (tempRow == endRow && tempCol == endCol) {
            check = true;
        }
        tempCol--;
        tempRow++;
    }

    return check;
}
