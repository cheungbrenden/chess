//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H


#include "Piece.h"

class Pawn : public Piece {

public:
    Pawn(bool isWhite);
    virtual bool move(int column, int row);

private:
    bool m_hasMoved;
};


#endif //CHESS_PAWN_H
