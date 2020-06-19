//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H


class Piece {
public:
    Piece(bool isWhite);
    virtual ~Piece();

    bool isWhite() const ;
    char pieceType() const;

    virtual bool move(int c, int r) = 0;

protected:
    bool m_isWhite;
    char m_pieceType;
};


#endif //CHESS_PIECE_H
