//
// Created by cheun on 6/15/2020.
//

#include "Board.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
#include "Pawn.h"


#include <iostream>

using namespace std;

Board::Board() {
    for (int i = 0; i < 8; ++i) {
        bool checkWhite;
        checkWhite = !(i == 0 || i == 1);
        for (int j = 0; j < 8; ++j) {
            char space = startingPos[i][j];
            switch (space) {
                case 'R':
                case 'N':
                case 'B':
                case 'Q':
                case 'K':
                case 'P':
                case ' ':
                    addPiece(space, checkWhite, i, j);
                    break;
            }
        }
    }
}

Board::~Board() {

}

void Board::display() {
    cout << " -- -- -- -- -- -- -- -- \n";
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << "|";
            if (m_grid[i][j] != nullptr) {

                if (m_grid[i][j]->isWhite()) {
                    cout << "w";
                } else {
                    cout << "b";
                }
                cout << m_grid[i][j]->pieceType();
            }
            else {
                cout << "  ";
            }
        }
        cout << "|" << endl;
        cout << " -- -- -- -- -- -- -- -- \n";
    }
}

void Board::addPiece(char piece, bool isWhite, int c, int r) {
    switch (piece) {
        case 'R':
            m_pieces.push_front(new Rook(isWhite));
            break;
        case 'N':
            m_pieces.push_front(new Knight(isWhite));
            break;
        case 'B':
            m_pieces.push_front(new Bishop(isWhite));
            break;
        case 'Q':
            m_pieces.push_front(new Queen(isWhite));
            break;
        case 'K':
            m_pieces.push_front(new King(isWhite));
            break;
        case 'P':
            m_pieces.push_front(new Pawn(isWhite));
            break;
        case ' ':
            m_grid[c][r] = nullptr;
            return;

    }
    list<Piece *>::iterator p = m_pieces.begin();
    m_grid[c][r] = *p;

}

char Board::startingPos[8][8] = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};

int Board::pieceRow(Piece *piece) {
    return 0;
}

int Board::pieceColumn(Piece *piece) {
    return 0;
}

void Board::setPieceRow(Piece *piece, int r) {

}

void Board::setPieceColumn(Piece *piece, int c) {

}



