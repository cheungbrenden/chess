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
        switch (userInput[0]) {
            case 'K':
                break;
            case 'Q':
                break;
            case 'B':
                break;
            case 'N':
                break;
            case 'R':
                break;
            case 'O':
                break;
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
                break;
            default:
                cout << "Invalid move" << endl;
                cout << "test1";
                continue;
                break;
        }

        previousMove = userInput;
        isWhiteTurn = !isWhiteTurn;
    }
}
