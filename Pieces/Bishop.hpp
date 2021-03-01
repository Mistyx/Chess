#include "Piece.hpp"

#pragma once

class Bishop : public Piece
{
public:
    explicit Bishop();
    Bishop(short x, short y);
    virtual std::vector<short> possibleMoves(const std::vector<char>& board, short x, short y);
};