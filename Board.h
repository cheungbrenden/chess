//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

#include "Piece.h"

#include <list>
#include <string>

using namespace std;

class Board {
public:
    Board();
    ~Board();
    void display();

    void addPiece(char piece, bool isWhite, int r, int c);

    // takes in the starting square and the ending square,
    bool playerMove(string input, bool isWhiteTurn);

    bool isValidMove(string input, bool isWhiteTurn, int& startRow, int& startCol, int& endRow, int& endCol, bool& capture);

    bool isPieceOnSquare(int row, int col);

    bool isOpponentPieceOnSquare(bool isWhite, int row, int col);
private:
    static char startingPos[8][8]; //
    Piece* m_grid[8][8];
    list<Piece*> m_pieces;


};


#endif //CHESS_BOARD_H
