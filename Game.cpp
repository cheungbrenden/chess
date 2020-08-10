//
// Created by cheun on 6/15/2020.
//

#include "Game.h"

#include <iostream>
#include <string>
using namespace std;

Game::Game() {
    m_board = new Board;
}

Game::~Game() {

}

void Game::play() {
    m_board->display();
    bool isWhiteTurn = true;
    bool isGameOver = false;
    string previousMove;
    while (!isGameOver) {
        string userInput;
        isWhiteTurn ? cout << "White to move\n" : cout << "Black to move\n";
        cout << "Last move: " << previousMove << endl;
        cin >> userInput;

        // Todo: Fix btw
        if (!m_board->playerMove(userInput, isWhiteTurn)) {
            continue;
        };

        m_board->display();
        // Need to convert user input to specific move
        previousMove = userInput;
        isWhiteTurn = !isWhiteTurn;
    }
}



