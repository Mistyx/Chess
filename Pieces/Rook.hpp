#include "Piece.hpp"

#pragma once

class Rook : public Piece
{
public:
    explicit Rook();
    Rook(short x, short y);
    virtual std::vector<short> possibleMoves(const std::vector<char>& board, short x, short y);
};