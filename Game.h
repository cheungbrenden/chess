//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_GAME_H
#define CHESS_GAME_H


#include "Board.h"

class Game {
public:
    Game();
    ~Game();
    void play();
private:
    Board* m_board;
};


#endif //CHESS_GAME_H
