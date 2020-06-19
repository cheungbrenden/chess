//
// Created by cheun on 6/15/2020.
//

#ifndef CHESSGAME_GAME_H
#define CHESSGAME_GAME_H


#include "Board.h"

class Game {

public:
    Game();
    ~Game();
    void play();
private:
    Board* m_board;
};


#endif //CHESSGAME_GAME_H
