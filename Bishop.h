//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H


#include "Piece.h"
#include <list>

class Bishop : public Piece {
public:
    Bishop(bool isWhite, int row, int col);
    ~Bishop();

    bool isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces);

};


#endif //CHESS_BISHOP_H
