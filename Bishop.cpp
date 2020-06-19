//
// Created by cheun on 6/15/2020.
//

#include "Bishop.h"

Bishop::Bishop(bool isWhite) : Piece(isWhite) {
    m_pieceType = 'B';
}

Bishop::~Bishop() {

}

bool Bishop::move(int c, int r) {
    return false;
}
