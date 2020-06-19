//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "Piece.h"

#include <list>
using namespace std;

class Board {
public:
    Board();
    ~Board();
    void display();

    void addPiece(char piece, bool isWhite, int c, int r);

    int pieceRow(Piece* piece);
    int pieceColumn(Piece* piece);
    void setPieceRow(Piece* piece, int r);
    void setPieceColumn(Piece* piece, int c);


private:
    static char startingPos[8][8];
    Piece* m_grid[8][8];
    list<Piece*> m_pieces;


};


#endif //CHESS_BOARD_H
