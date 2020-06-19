//
// Created by cheun on 6/15/2020.
//

#ifndef CHESSGAME_PIECE_H
#define CHESSGAME_PIECE_H


class Piece {
public:
    Piece();
    virtual ~Piece();
    virtual void move() = 0;
private:

};


#endif //CHESSGAME_PIECE_H
