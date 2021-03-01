#include "Rook.hpp"
#include <iostream>

Rook::Rook()
{
}

Rook::Rook(short x, short y)
{
    setX(x);
    setY(y);
    setName('R');
}

std::vector<short> Rook::possibleMoves(const std::vector<char>& board, short x, short y)
{
    std::vector<short> possibleMoves;
    int base = (8-x)*8+y;

    std::cout << base << std::endl;

    for (int i = 1; i < 8; i++)
    {
        if (base+(i*8) == (8-x)*8+y)
        {
            continue;
        }

        if (base+(i*8) > 64)
        {
            if (board[base+(i*8)-64] == '0')
            {
                possibleMoves.push_back(base+(i*8)-64);
            }
            continue;
        }

        if (board[base+(i*8)] == '0')
        {
            possibleMoves.push_back(base+(i*8));
        }
    }

    base = (8-x)*8+y;

    for (int i = 1; i < 8; i++)
    {
        if (base+i > 64)
        {
            base = 56;
        }

        if (board[base+i] == '0')
        {
            possibleMoves.push_back(base+i);
        }
    }

    return possibleMoves;
}


