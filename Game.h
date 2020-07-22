//
// Created by cheun on 6/15/2020.
//

#ifndef CHESS_GAME_H
#define CHESS_GAME_H


#include "Board.h"
#include "string"

class Game {
public:
    Game();
    ~Game();
    void play();
    bool isMoveValid(string userInput);
private:
    Board* m_board;

};


#endif //CHESS_GAME_H
