//
// Created by cheun on 6/15/2020.
//

#include "Queen.h"

Queen::Queen(bool isWhite) : Piece(isWhite) {
    m_pieceType = 'Q';
}

Queen::~Queen() {

}

bool Queen::move(int c, int r) {
    return false;
}
