//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H


#include "Piece.h"

class Knight : public Piece {
public:
    Knight(bool isWhite, int row, int col);
    ~Knight();
};


#endif //CHESS_KNIGHT_H
