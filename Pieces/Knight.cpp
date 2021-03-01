#include "Knight.hpp"
#include <cmath>
#include <iostream>

Knight::Knight()
{
}

Knight::Knight(short x, short y)
{
    setX(x);
    setY(y);
    setName('N');
}

std::vector<short> Knight::possibleMoves(const std::vector<char>& board, short x, short y)
{
    std::vector<short> possibleMoves;
    std::vector<short> data = {-17, -15, -10, -6, 6, 10, 15, 17};

    for (const auto& dat : data)
    {
        const auto punktA = (8-x)*8+y;
        const auto punktB = (8-x)*8+y+dat;

        const auto y1 = punktA%8;
        const auto y2 = (punktB%8 != 0) ? punktB%8 : 8;
        const auto x1 = (punktA-y1)/8;
        const auto x2 = (punktB%8 != 0) ? (punktB-y2)/8 : punktB/8;

        const auto odleglosc = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
        if (odleglosc > 2.236 and odleglosc < 2.237 and punktB >= 1 and punktB <= 64)
        {
            if (board[punktB] == '0')
            {
                possibleMoves.push_back(punktB);
            }
        }
    }

    return possibleMoves;
}