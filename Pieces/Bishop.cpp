#include "Bishop.hpp"
#include <iostream>

Bishop::Bishop()
{
}

Bishop::Bishop(short x, short y)
{
    setX(x);
    setY(y);
    setName('B');
}

std::vector<short> Bishop::possibleMoves(const std::vector<char>& board, short x, short y)
{
    std::vector<short> possibleMoves;

    const std::vector<short> data = {-7, -9, 7, 9};

    const auto punktA = (8-x)*8+y;

    int counter = 0;

    for (const auto& dat : data)
    {
        for (int i = 1; i < 8; i++)
        {
            if ((punktA+i*dat)%8 == 1 or
                (punktA+i*dat)%8 == 0)
            {
                if (board[punktA+i*dat] == '0')
                {
                    possibleMoves.push_back(punktA+i*dat);
                }
                break;
            }

            if (punktA+i*dat < 0 or
                punktA+i*dat > 64)
            {
                break;
            }

            if (board[punktA+i*dat] == '0')
            {
                possibleMoves.push_back(punktA+i*dat);
            }
        }
    }
    return possibleMoves;
}