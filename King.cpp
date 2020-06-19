//
// Created by cheun on 6/15/2020.
//

#include "King.h"

King::King(bool isWhite) : Piece(isWhite), m_hasMoved(false) {
    m_pieceType = 'K';
}

bool King::move(int c, int r) {
    return false;
}
