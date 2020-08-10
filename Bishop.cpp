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
    return false;
}
