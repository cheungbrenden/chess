//
// Created by cheun on 6/15/2020.
//

#include "Knight.h"


#include <list>
using namespace std;

Knight::Knight(bool isWhite, int row, int col) : Piece(isWhite, row, col, false) {
    m_pieceType = 'N';
}

bool Knight::isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces) {
    return false;
}

