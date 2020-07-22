//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H


#include "Piece.h"

class Bishop : public Piece {
public:
    Bishop(bool isWhite, int row, int col);
    ~Bishop();

};


#endif //CHESS_BISHOP_H
