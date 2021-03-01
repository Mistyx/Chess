#include "Piece.hpp"

#pragma once

class Queen : public Piece
{
public:
    explicit Queen();
    Queen(short x, short y);
    virtual std::vector<short> possibleMoves(const std::vector<char>& board, short x, short y);
};