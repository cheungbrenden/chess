//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H


#include "Piece.h"

class Rook : public Piece {
public:
    Rook(bool isWhite);
    virtual bool move(int c, int r);
private:
    bool m_hasMoved;
};


#endif //CHESS_ROOK_H
