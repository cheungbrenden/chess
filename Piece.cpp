//
// Created by cheun on 6/15/2020.
//

#include "Piece.h"

Piece::Piece(bool isWhite, int row, int col, bool hasMoved) : m_isWhite(isWhite), m_row(row), m_col(col), m_hasMoved(hasMoved){

}

Piece::~Piece() {

}

bool Piece::isWhite() const{
    return m_isWhite;
}

char Piece::pieceType() const {
    return m_pieceType;
}

int Piece::col() const {
    return m_col;
}

int Piece::row() const {
    return m_row;
}

bool Piece::hasMoved() const {
    return m_hasMoved;
}

