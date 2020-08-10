//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H


#include "Piece.h"
#include <list>

class Knight : public Piece {
public:
    Knight(bool isWhite, int row, int col);
    virtual bool isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces);

};


#endif //CHESS_KNIGHT_H
