//
// Created by cheun on 6/15/2020.
//

#include "Knight.h"

Knight::Knight(bool isWhite, int row, int col) : Piece(isWhite, row, col, false) {
    m_pieceType = 'N';
}

Knight::~Knight() {

}

