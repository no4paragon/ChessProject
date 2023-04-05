#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>

using namespace std;
class Piece;

class Board{

private: 
    static const int SIZE = 8;
    static const int pieces = 16;

    Piece* bd[SIZE][SIZE];
    Piece* p1[pieces];
    string board[SIZE][SIZE];

public:
    Board() {

        for (int i = 0; i < SIZE; i++)
            for(int j = 0; j < SIZE; j++) {
                bd[i][j] = nullptr;
        }

        for (int i = 8; i < pieces; i++) {
            p1[i] = new Pawn();
        }

        for (int i = 0; i < SIZE; i += 7) {
            p1[i] = new Rook();
        }

        for (int i = 1; i < SIZE; i += 5) {
            p1[i] = new Knight();
        }

        for (int i = 2; i < SIZE; i += 3) {
            p1[i] = new Bishop();
        }

            p1[3] = new Queen();
            p1[4] = new King();

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < SIZE; j++) {
                bd[i][j] = p1[j+i*SIZE];
            }
    };

    ~Board() {
        for (int i = 0; i < pieces; i++) {
            if (p1[i]) {
                delete p1[i];
                p1[i] = nullptr;
            }
        }
    }

    void printBoard();
    void selectPiece();
    void resetBoard();
    void tutorial();
   
};

#endif
