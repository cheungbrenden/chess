//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H


#include "Piece.h"
#include <list>

class Rook : public Piece {
public:
    Rook(bool isWhite, int row, int col);
    bool isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces);
private:
    bool m_hasMoved;
};


#endif //CHESS_ROOK_H
