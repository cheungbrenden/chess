//
// Created by cheun on 6/15/2020.
//

#include "Rook.h"

Rook::Rook(bool isWhite, int row, int col) : Piece(isWhite, row, col, false) {
    m_pieceType = 'R';
}
