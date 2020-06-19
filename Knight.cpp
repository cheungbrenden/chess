//
// Created by cheun on 6/15/2020.
//

#include "Knight.h"

Knight::Knight(bool isWhite) : Piece(isWhite) {
    m_pieceType = 'N';
}

Knight::~Knight() {

}

bool Knight::move(int c, int r) {
    return false;
}
