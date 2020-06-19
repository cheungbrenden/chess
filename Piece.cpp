//
// Created by cheun on 6/15/2020.
//

#include "Piece.h"

Piece::Piece(bool isWhite) : m_isWhite(isWhite) {

}

Piece::~Piece() {

}

bool Piece::isWhite() const{
    return m_isWhite;
}

char Piece::pieceType() const {
    return m_pieceType;
}

