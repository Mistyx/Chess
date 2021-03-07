#include "Pawn.hpp"

Pawn::Pawn()
{
}

Pawn::Pawn(short x, short y)
{
    setX(x);
    setY(y);
    setName('P');
}

std::vector<short> Pawn::possibleMoves(const std::vector<char>& board, short x, short y)
{
    std::vector<short> possibleMoves;
    if (board[(8-x)*8+y-8] == '0')
    {
        possibleMoves.push_back((8-x)*8+y-8);
    }
    if (board[(8-x)*8+y-16] == '0')
    {
        possibleMoves.push_back((8-x)*8+y-16);
    }

    return possibleMoves;
}