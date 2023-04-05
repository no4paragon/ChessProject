#include "Piece.h"
#include "board.h"
#include <iostream>
#include <string>

using namespace std;

Pos Knight::getLegalMoves(int rr, int cc, string board[8][8], Piece* bd[8][8]) {

    Pos moves[21];
    int nextRow, nextColumn, move;
    int colLetter = 0;
    int a = 0;


    while (a != 999) {

        move = 1;
        cout << "\nFor the position legal moves are:\n";

        // to move up
        nextRow = rr - 2; nextColumn = cc + 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";

                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        nextRow = rr - 1; nextColumn = cc + 2;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";

                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        // to move right
        nextRow = rr + 1; nextColumn = cc + 2;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }
        nextRow = rr + 2; nextColumn = cc + 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        // to move down
        nextRow = rr + 2; nextColumn = cc - 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }
        nextRow = rr + 1; nextColumn = cc - 2;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        // to move left
        nextRow = rr - 1; nextColumn = cc - 2;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }
        nextRow = rr - 2; nextColumn = cc - 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }
        cout << endl;

        //Horizontal label
        for (char i = 'A'; i <= 'H'; i++) {
            if (i == 'A') {
                cout << "   " << i;
            }
            else {
                cout << "     " << i;
            }
        }
        cout << endl;

        //This prints out result.
        for (int i = 0; i < 8; i++) {
            if (i < 8) {
                cout << i + 1 << " ";
            }
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "To move, select the number" << endl;
        cout << "To move other pieces,  type '000'" << endl;
        cout << "To Start new game, type '123'" << endl;
        cout << "To End, type '999'" << endl;
        cin >> a;

        if (a < move && a > 0) {

            return moves[a - 1];

        }
        else {

            Pos temp;
            temp.row = a;
            temp.col = -1;
            return temp;

        }
    }
}

Pos Pawn::getLegalMoves(int rr, int cc, string board[8][8], Piece* bd[8][8]) {

    Pos moves[21];
    int nextRow, nextColumn, move;
    int colLetter = 0;
    int a = 0;


    while (a != 999) {

        move = 1;
        cout << "\nFor the position legal moves are:\n";

        nextRow = rr + 1; nextColumn = cc;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        if (firstMove) {

            nextRow = rr + 2; nextColumn = cc;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
            }
        }
        cout << endl;
        firstMove = false;

        //Horizontal label
        for (char i = 'A'; i <= 'H'; i++) {
            if (i == 'A') {
                cout << "   " << i;
            }
            else {
                cout << "     " << i;
            }
        }
        cout << endl;

        //This prints out result.
        for (int i = 0; i < 8; i++) {
            if (i < 8) {
                cout << i + 1 << " ";
            }
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "To move, select the number" << endl;
        cout << "To move other pieces,  type '000'" << endl;
        cout << "To Start new game, type '123'" << endl;
        cout << "To End, type '999'" << endl;
        cin >> a;

        if (a < move && a > 0) {

            return moves[a - 1];

        }
        else {

            Pos temp;
            temp.row = a;
            temp.col = -1;
            return temp;

        }
    }
}

Pos Bishop::getLegalMoves(int rr, int cc, string board[8][8], Piece* bd[8][8]) {

    Pos moves[21];
    int nextRow, nextColumn, move;
    int colLetter = 0;
    int a = 0;

    while (a != 999) {

        move = 1;
        cout << "\nFor the position legal moves are:\n";

        //Diagonal
        
        for (int i = 1; i < 8; i++) {
            nextRow = rr + i;
            nextColumn = cc + i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        for (int i = 1; i < 8; i++) {
            nextRow = rr - i;
            nextColumn = cc - i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }
        
        for (int i = 1; i < 8; i++) {
            nextRow = rr - i;
            nextColumn = cc + i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }
        
        for (int i = 1; i < 8; i++) {
            nextRow = rr + i;
            nextColumn = cc - i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Horizontal label
        for (char i = 'A'; i <= 'H'; i++) {
            if (i == 'A') {
                cout << "   " << i;
            }
            else {
                cout << "     " << i;
            }
        }
        cout << endl;

        //This prints out result.
        for (int i = 0; i < 8; i++) {
            if (i < 8) {
                cout << i + 1 << " ";
            }
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "To move, select the number" << endl;
        cout << "To move other pieces,  type '000'" << endl;
        cout << "To Start new game, type '123'" << endl;
        cout << "To End, type '999'" << endl;
        cin >> a;

        if (a < move && a > 0) {

            return moves[a - 1];

        }
        else {

            Pos temp;
            temp.row = a;
            temp.col = -1;
            return temp;

        }
    }
}

Pos Rook::getLegalMoves(int rr, int cc, string board[8][8], Piece* bd[8][8]) {

    Pos moves[21];
    int nextRow, nextColumn, move;
    int colLetter = 0;
    int a = 0;

    while (a != 999) {

        move = 1;
        cout << "\nFor the position legal moves are:\n";

        //Horizontal +moves
        nextRow = rr;
        for (int i = 1; i < 8; i++) {
            nextColumn = cc + i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Horizontal -moves
        nextRow = rr;
        for (int i = 1; i < 8; i++) {
            nextColumn = cc - i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Vertical +moves
        nextColumn = cc;
        for (int i = 1; i < 8; i++) {
            nextRow = rr + i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Vertical -moves
        nextColumn = cc;
        for (int i = 1; i < 8; i++) {
            nextRow = rr - i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Horizontal label
        for (char i = 'A'; i <= 'H'; i++) {
            if (i == 'A') {
                cout << "   " << i;
            }
            else {
                cout << "     " << i;
            }
        }
        cout << endl;

        //This prints out result.
        for (int i = 0; i < 8; i++) {
            if (i < 8) {
                cout << i + 1 << " ";
            }
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "To move, select the number" << endl;
        cout << "To move other pieces,  type '000'" << endl;
        cout << "To Start new game, type '123'" << endl;
        cout << "To End, type '999'" << endl;
        cin >> a;

        if (a < move && a > 0) {

            return moves[a - 1];

        }
        else {

            Pos temp;
            temp.row = a;
            temp.col = -1;
            return temp;

        }
    }
}

Pos Queen::getLegalMoves(int rr, int cc, string board[8][8], Piece* bd[8][8]) {

    Pos moves[27];
    int nextRow, nextColumn, move;
    int colLetter = 0;
    int a = 0;

    while (a != 999) {
        move = 1;
        cout << "\nFor the position legal moves are:\n";

        //Horizontal +moves
        nextRow = rr;
        for (int i = 1; i < 8; i++) {
            nextColumn = cc + i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Horizontal -moves
        nextRow = rr;
        for (int i = 1; i < 8; i++) {
            nextColumn = cc - i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Vertical +moves
        nextColumn = cc;
        for (int i = 1; i < 8; i++) {
            nextRow = rr + i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Vertical -moves
        nextColumn = cc;
        for (int i = 1; i < 8; i++) {
            nextRow = rr - i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        for (int i = 1; i < 8; i++) {
            nextRow = rr + i;
            nextColumn = cc + i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        for (int i = 1; i < 8; i++) {
            nextRow = rr - i;
            nextColumn = cc - i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Diagonal
        for (int i = 1; i < 8; i++) {
            nextRow = rr - i;
            nextColumn = cc + i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        for (int i = 1; i < 8; i++) {
            nextRow = rr + i;
            nextColumn = cc - i;
            if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
            {
                if (bd[nextRow][nextColumn] == nullptr) {
                    moves[move - 1].row = nextRow;
                    moves[move - 1].col = nextColumn;
                    colLetter = nextColumn + 'A';
                    cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                    if (move < 10) {
                        board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                    }
                    else {
                        board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                    }
                    move++;
                }
                else {
                    break;
                }
            }
        }

        //Horizontal label
        for (char i = 'A'; i <= 'H'; i++) {
            if (i == 'A') {
                cout << "   " << i;
            }
            else {
                cout << "     " << i;
            }
        }
        cout << endl;

        //This prints out result.
        for (int i = 0; i < 8; i++) {
            if (i < 8) {
                cout << i + 1 << " ";
            }
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "To move, select the number" << endl;
        cout << "To move other pieces,  type '000'" << endl;
        cout << "To Start new game, type '123'" << endl;
        cout << "To End, type '999'" << endl;
        cin >> a;

        if (a < move && a > 0) {

            return moves[a - 1];

        }
        else {

            Pos temp;
            temp.row = a;
            temp.col = -1;
            return temp;

        }
    }
}

Pos King::getLegalMoves(int rr, int cc, string board[8][8], Piece* bd[8][8]) {

    Pos moves[21];
    int nextRow, nextColumn, move;
    int colLetter = 0;
    int a = 0;

    while (a != 999) {
        move = 1;
        cout << "\nFor the position legal moves are:\n";

        //Horizontal moves
        nextRow = rr; nextColumn = cc + 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        nextRow = rr; nextColumn = cc - 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        //Vertical moves
        nextRow = rr + 1; nextColumn = cc;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        nextRow = rr - 1; nextColumn = cc;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        //Diagonal X
        nextRow = rr + 1; nextColumn = cc + 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        nextRow = rr - 1; nextColumn = cc - 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        nextRow = rr + 1; nextColumn = cc - 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }

        nextRow = rr - 1; nextColumn = cc + 1;
        if (nextRow >= 0 && nextRow < 8 && nextColumn >= 0 && nextColumn < 8)
        {
            if (bd[nextRow][nextColumn] == nullptr) {
                moves[move - 1].row = nextRow;
                moves[move - 1].col = nextColumn;
                colLetter = nextColumn + 'A';
                cout << move << "." << " board[" << char(colLetter) << "][" << nextRow + 1 << "] or \n";
                if (move < 10) {
                    board[nextRow][nextColumn] = "[" + to_string(move) + " ]";
                }
                else {
                    board[nextRow][nextColumn] = "[" + to_string(move) + "]";
                }
                move++;
            }
        }
        cout << endl;

        //Horizontal label
        for (char i = 'A'; i <= 'H'; i++) {
            if (i == 'A') {
                cout << "   " << i;
            }
            else {
                cout << "     " << i;
            }
        }
        cout << endl;

        //This prints out result.
        for (int i = 0; i < 8; i++) {
            if (i < 8) {
                cout << i + 1 << " ";
            }
            for (int j = 0; j < 8; j++) {
                cout << board[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "To move, select the number" << endl;
        cout << "To move other pieces,  type '000'" << endl;
        cout << "To Start new game, type '123'" << endl;
        cout << "To End, type '999'" << endl;
        cin >> a;

        if (a < move && a > 0) {

            return moves[a - 1];

        }
        else {

            Pos temp;
            temp.row = a;
            temp.col = -1;
            return temp;

        }
    }
}


