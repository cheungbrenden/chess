//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include <string>
#include <list>
using namespace std;

class Piece {
public:
    Piece(bool isWhite, int row, int col, bool hasMoved);
    virtual ~Piece();

    bool isWhite() const ;
    char pieceType() const;
    virtual bool isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces) = 0;

    int row() const;
    int col() const;
    bool hasMoved() const;
    bool onBoard(int row, int col) const;

protected:
    bool m_isWhite;
    char m_pieceType;
    int m_row;
    int m_col;
    bool m_hasMoved;
};


#endif //CHESS_PIECE_H
