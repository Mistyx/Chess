#include "Piece.hpp"

#pragma once

class King : public Piece
{
public:
    explicit King();
    King(short x, short y);
    virtual std::vector<short> possibleMoves(const std::vector<char>& board, short x, short y);
};