#include "Piece.h"
#include "board.h"

using namespace std;

void Board::printBoard() {

    //Placing the representation of the pices on the board.
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (bd[i][j]) {
                board[i][j] = "[" + bd[i][j] -> symbol + " ]";
            }
            else {
                board[i][j] = "[  ]";
            }
        }
    }

    //Horizontal label
    for (char i = 'A'; i <= 'H'; i++) {
        if (i == 'A') {
            cout << "    " << i;
        }
        else {
            cout << "    " << i;
        }
    }
    cout << endl;

    //This prints out result.
    for (int i = 0; i < 8; i++) {
        if (i < 8) {
            cout << i + 1 << "  ";
        }
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void Board::selectPiece() {
    int selectedRow, selectedColumn;
    int choice;
    char cl;
    string input;
    bool moved = true;
    Pos position;

    while (moved) {
        printBoard();
        cout << "\nEnter the position of chess to see legal moves (Letters for column, numbers for row): " << endl;
        cin >> input;
        cl = input[0];
        selectedColumn = cl - 'A';
        selectedRow = stoi(input.substr(1), nullptr)-1;
        Piece* p = bd[selectedRow][selectedColumn];

        if (p) {
            position = p->getLegalMoves(selectedRow, selectedColumn, board);

            while (position.col != -1) {
                //made a move
                bd[position.row][position.col] = p;
                bd[selectedRow][selectedColumn] = nullptr;
                selectedRow = position.row;
                selectedColumn = position.col;
                printBoard();
                position = p -> getLegalMoves(selectedRow, selectedColumn, board);
                
            }
            if(position.row == 123) { // new game
                
            
            }
            else if (position.row == 999) { //end
                moved = false;
            }
        }
        else {
            cout << "It's an empty spot!!";
        }
    }
}

