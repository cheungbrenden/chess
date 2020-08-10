//
// Created by cheun on 6/15/2020.
//

#include "Queen.h"

Queen::Queen(bool isWhite, int row, int col) : Piece(isWhite, row, col, false) {
    m_pieceType = 'Q';
}

Queen::~Queen() {

}

bool Queen::isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces) {
    return false;
}
