//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_KING_H
#define CHESS_KING_H


#include "Piece.h"
#include <list>

class King : public Piece {

public:
    King(bool isWhite, int row, int col);
    bool isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces);
private:
    bool m_hasMoved;
};


#endif //CHESS_KING_H
