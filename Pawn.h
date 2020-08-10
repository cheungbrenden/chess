//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H


#include "Piece.h"
#include <list>


class Pawn : public Piece {

public:
    Pawn(bool isWhite, int row, int col);
    virtual bool isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces);
};


#endif //CHESS_PAWN_H
