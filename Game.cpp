//
// Created by cheun on 6/15/2020.
//

#include "Game.h"
#include "Board.h"
#include "Piece.h"
#include "Knight.h"
#include "Rook.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"
#include "Pawn.h"

#include <iostream>

using namespace std;

Game::Game() {
    m_board = new Board;
}

Game::~Game() {

}

void Game::play() {
    m_board->display();
}