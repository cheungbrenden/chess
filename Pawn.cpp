//
// Created by cheun on 6/15/2020.
//

#include "Pawn.h"

Pawn::Pawn(bool isWhite) : Piece(isWhite), m_hasMoved(false) {
    m_pieceType = 'P';
}

bool Pawn::move(int column, int row) {
    return false;
}
