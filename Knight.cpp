//
// Created by cheun on 6/15/2020.
//

#include "Knight.h"


#include <list>
using namespace std;

Knight::Knight(bool isWhite, int row, int col) : Piece(isWhite, row, col, false) {
    m_pieceType = 'N';
}

bool Knight::isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces) {
    bool check = false;
    pair<int, int> possibleMoves[8] = {{startRow -2,startCol + 1},
                                       {startRow - 1, startCol + 2},
                                       {startRow + 1, startCol + 2},
                                       {startRow + 2, startCol + 1},
                                       {startRow + 2, startCol - 1},
                                       {startRow + 1, startCol - 2},
                                       {startRow - 1, startCol - 2},
                                       {startRow - 2, startCol - 1}};
    for (int i = 0; i <= 7; i++) {
        if (onBoard(possibleMoves[i].first, possibleMoves[i].second)) {
            spaces.push_back(possibleMoves[i]);
        }
        if (possibleMoves[i].first == endRow && possibleMoves[i].second == endCol) {
            check = true;
        }
    }
    return check;
}

