//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H


#include "Piece.h"
#include <list>

class Queen : public Piece {
public:
    Queen(bool isWhite, int row, int col);
    ~Queen();

    bool isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces);

};


#endif //CHESS_QUEEN_H
