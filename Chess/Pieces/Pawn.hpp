#include "Piece.hpp"

#pragma once

class Pawn : public Piece
{
public:
    explicit Pawn();
    Pawn(short x, short y);
    virtual std::vector<short> possibleMoves(const std::vector<char>& board, short x, short y);
};