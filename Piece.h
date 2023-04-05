#ifndef PIECE_H
#define PIECE_H

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
using namespace std;

struct Pos {
	int row;
	int col;
};

class Piece {
public:
	virtual Pos getLegalMoves(int rr, int cc, string board[8][8]) = 0;
	string symbol;

	Piece() {
	};
};

class Knight : public Piece {
public:
	Pos getLegalMoves(int rr, int cc, string board[8][8]);

	Knight() {
		symbol = "N";
	};

};

class Pawn : public Piece{
public:
	Pos getLegalMoves(int rr, int cc, string board[8][8]);

	Pawn() {
		symbol = "P";
	};

private:
	bool firstMove = true;

};

class Rook : public Piece{
public:
	Pos getLegalMoves(int rr, int cc, string board[8][8]);

	Rook() {
		symbol = "R";
	};
};

class Bishop : public Piece{
public:
	Pos getLegalMoves(int rr, int cc, string board[8][8]);

	Bishop() {
		symbol = "B";
	};
};

class Queen : public Piece{
public:
	Pos getLegalMoves(int rr, int cc, string board[8][8]);

	Queen() {
		symbol = "Q";
	};
};

class King : public Piece{
public:
	Pos getLegalMoves(int rr, int cc, string board[8][8]);

	King() {
		symbol = "K";
	};
};

#endif
