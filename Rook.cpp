//
// Created by cheun on 6/15/2020.
//

#include "Rook.h"

Rook::Rook(bool isWhite) : Piece(isWhite), m_hasMoved(false) {
    m_pieceType = 'R';
}

bool Rook::move(int c, int r) {
    return false;
}
