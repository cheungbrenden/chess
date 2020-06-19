//
// Created by cheun on 6/15/2020.
//

#ifndef CHESSGAME_BOARD_H
#define CHESSGAME_BOARD_H


#include "Piece.h"

#include <list>
using namespace std;

class Board {
public:
    Board();
    ~Board();
    void display();

    void setPieceCoord(Piece* p, int c, int r);
    int getPieceCoordCol();
    int getPieceCoordRow();

private:
    int m_grid[8][8];
    list<Piece*> whitePieces;
    list<Piece*> blackPieces;
};


#endif //CHESSGAME_BOARD_H
