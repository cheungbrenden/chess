//
// Created by cheun on 6/15/2020.
//

#include "Pawn.h"

Pawn::Pawn(bool isWhite, int row, int col) : Piece(isWhite, row, col, false) {
    m_pieceType = 'P';
}
