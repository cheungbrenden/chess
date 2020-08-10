//
// Created by cheun on 6/15/2020.
//

#include "Rook.h"

Rook::Rook(bool isWhite, int row, int col) : Piece(isWhite, row, col, false) {
    m_pieceType = 'R';
}

bool Rook::isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces) {
    // UP
    bool check = false;
    for (int i = startRow + 1; i <= 7; i++) {
        spaces.push_back(make_pair(i, startCol));
        if (i == endRow) {
            check = true;
        }
    }
    // DOWN
    for (int i = startRow - 1; i >= 0; i--) {
        spaces.push_back(make_pair(i, startCol));
        if (i == endRow) {
            check = true;
        }
    }
    // RIGHT
    for (int i = startCol + 1; i <= 7; i++) {
        spaces.push_back(make_pair(startRow, i));
        if (i == endCol) {
            check = true;
        }
    }
    // LEFT
    for (int i = startCol - 1; i >= 0; i--) {
        spaces.push_back(make_pair(startRow, i));
        if (i == endCol) {
            check = true;
        }
    }
    return check;
}
