//
// Created by cheun on 6/15/2020.
//

#include "Pawn.h"

#include <iostream>
#include <list>
using namespace std;


Pawn::Pawn(bool isWhite, int row, int col) : Piece(isWhite, row, col, false) {
    m_pieceType = 'P';
}

/**
 *
 * @param input
 * @param spaces
 * @return
 */
bool Pawn::isMoveShapeValid(int startRow, int startCol, int endRow, int endCol, bool capture, list<pair<int, int>> &spaces) {

    // Todo: put in parent class / put in board class to prevent repetition
    //if (input[0] != m_pieceType) {
    //    cout << "That's not cool." << endl;
    //    return false;
    //}
    /*
    int startRow = 56 - (int)input[1]; // convert from notation to arr index
    int startCol = (int)input[0] - 97;
    int endRow = 56 - (int)input[4];
    int endCol = (int)input[3] - 97;
     */
    //
    if (isWhite()) {
        if (!capture) {
            spaces.push_back(make_pair(startRow - 1, startCol));
            if (startRow == 6) {
                spaces.push_back(make_pair(startRow - 2, startCol));
            }
        }
        else {
            spaces.push_back(make_pair(startRow - 1, startCol + 1));
            spaces.push_back(make_pair(startRow - 1, startCol - 1));
            if (startCol == 7) {
                spaces.pop_front();
            }
            if (startCol == 0) {
                spaces.pop_back();
            }
        }
    }
    else {
        if (!capture) {
            spaces.push_back(make_pair(startRow + 1, startCol));
            if (startRow == 1) {
                spaces.push_back(make_pair(startRow + 2, startCol));
            }
        }
        else {
            spaces.push_back(make_pair(startRow + 1, startCol + 1));
            spaces.push_back(make_pair(startRow + 1, startCol - 1));
            if (startCol == 7) {
                spaces.pop_front();
            }
            if (startCol == 0) {
                spaces.pop_back();
            }
        }
    }
    for (auto it = spaces.begin(); it != spaces.end(); it++) {
        if (it->first == endRow && it->second == endCol) {
            return true;
        }
    }
    return false;

}
