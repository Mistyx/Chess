#include "Piece.hpp"

#pragma once

class Knight : public Piece
{
public:
    explicit Knight();
    Knight(short x, short y);
    virtual std::vector<short> possibleMoves(const std::vector<char>& board, short x, short y);
};