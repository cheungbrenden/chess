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
#include <list>
using namespace std;

Board::Board() {
    for (int i = 0; i < 8; ++i) { // converting the starting position board to
        bool checkWhite;          // a board of pointers of each piece
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

void Board::addPiece(char piece, bool isWhite, int r, int c) {
    switch (piece) { // adds the piece to list m_pieces
        case 'R':
            m_pieces.push_front(new Rook(isWhite, r, c));
            break;
        case 'N':
            m_pieces.push_front(new Knight(isWhite, r, c));
            break;
        case 'B':
            m_pieces.push_front(new Bishop(isWhite, r, c));
            break;
        case 'Q':
            m_pieces.push_front(new Queen(isWhite, r, c));
            break;
        case 'K':
            m_pieces.push_front(new King(isWhite, r, c));
            break;
        case 'P':
            m_pieces.push_front(new Pawn(isWhite, r, c));
            break;
        case ' ': // if empty square, set the square on m_grid to nullptr
            m_grid[r][c] = nullptr;
            return;

    }
    list<Piece *>::iterator p = m_pieces.begin();
    m_grid[r][c] = *p; // if not an empty square, add a pointer to the piece on that square on the board

}

char Board::startingPos[8][8] = { // grid of characters showing the starting position of the board
        {'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'}
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

void Board::playerMove(char piece, int startRow, int startCol, int endRow, int endCol, bool capture, bool isWhiteTurn) {

}

bool Board::isValidMove() {
    return false;
}



