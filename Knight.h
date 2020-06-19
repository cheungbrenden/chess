//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H


#include "Piece.h"

class Knight : public Piece {
public:
    Knight(bool isWhite);
    ~Knight();
    virtual bool move(int c, int r);
};


#endif //CHESS_KNIGHT_H
