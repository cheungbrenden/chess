//
// Created by cheun on 6/15/2020.
//

#include "Board.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "Pawn.h"
#include "King.h"


#include <iostream>
#include <list>
#include <regex>

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
            } else {
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
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};

bool Board::playerMove(string input, bool isWhiteTurn) {
    int startRow, startCol, endRow, endCol;
    bool capture;
    if (isValidMove(input, isWhiteTurn, startRow, startCol, endRow, endCol, capture)) {
        Piece *selectedPiece = m_grid[startRow][startCol];
        m_grid[startRow][startCol] = nullptr;
        m_grid[endRow][endCol] = selectedPiece;
        return true;
    }
    return false;
}

// Todo: use regex to validate string, we assume first that all moves inputted are legal moves
bool Board::isValidMove(string input, bool isWhiteTurn, int& startRow, int& startCol, int& endRow, int& endCol, bool& capture) {
    regex e("^([KQRBN]?)([a-h][1-8])([-x])([a-h][1-8])$");
    smatch m;
    if (regex_search(input, m, e) ) {
        string startSpace = m.str(2);
        startRow = 56 - (int) startSpace[1];
        startCol = (int) startSpace[0] - 97;
        string endSpace = m.str(4);
        endRow = 56 - (int) endSpace[1];
        endCol = (int) endSpace[0] - 97;
        capture = m.str(3)[0] == 'x';
        if (m_grid[startRow][startCol] == nullptr) {
            cout << "No piece there." << endl;
            return false;
        }
        Piece *pieceOnStartSpace = m_grid[startRow][startCol];
        if (pieceOnStartSpace->isWhite() != isWhiteTurn) {
            cout << "You picked up your opponent's piece. Try again." << endl;
            return false;
        }
        list<pair<int, int>> spacesToMove;
        if (!pieceOnStartSpace->isMoveShapeValid(startRow, startCol, endRow, endCol, capture, spacesToMove)) {
            cout << "Your piece cannot move like that." << endl;
            return false;
        }
        if (capture) {
            if (!isOpponentPieceOnSquare(isWhiteTurn, endRow, endCol)) {
                cout << "No piece to capture." << endl;
                return false;
            }
        }
        else {
            if (isPieceOnSquare(endRow, endCol)) {
                cout << "A piece occupies the square you want to move to." << endl;
                return false;
            }
        }
        return true;
    }
    else {
        cout << "Not a valid move. Enter ? for a set of instructions on how to move." << endl;
        return false;

    }
}

bool Board::isPieceOnSquare(int row, int col) {
    return m_grid[row][col] != nullptr;
}

bool Board::isOpponentPieceOnSquare(bool isWhite, int row, int col) {
    if (m_grid[row][col] == nullptr) {
        cout << "ERROR, YOU SHOULDN'T HAVE TO CHECK THIS WHEN THERE'S NO PIECE HERE" << endl;
        return false;
    }
    return (isWhite && !m_grid[row][col]->isWhite()) || (!isWhite && m_grid[row][col]->isWhite());
}

