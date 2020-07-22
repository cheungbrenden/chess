//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_KING_H
#define CHESS_KING_H


#include "Piece.h"

class King : public Piece {

public:
    King(bool isWhite, int row, int col);
private:
    bool m_hasMoved;
};


#endif //CHESS_KING_H
