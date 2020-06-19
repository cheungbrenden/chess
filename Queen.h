//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H


#include "Piece.h"

class Queen : public Piece {
public:
    Queen(bool isWhite);
    ~Queen();

    virtual bool move(int c, int r);
};


#endif //CHESS_QUEEN_H
