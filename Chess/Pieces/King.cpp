#include "King.hpp"

King::King()
{
}

King::King(short x, short y)
{
    setX(x);
    setY(y);
    setName('K');
}

std::vector<short> King::possibleMoves(const std::vector<char>& board, short x, short y)
{
    std::vector<short> possibleMoves;
    const short line1 = (8-x)*8+y-9;
    const short line2 = (8-x)*8+y-1;
    const short line3 = (8-x)*8+y+7;
    std::vector<short> data = {line1, line2, line3};

    for (int i = 0; i < 3; i++)
    {
        if (i == 1 and data[i]%8 == 0 or
            i == 3 and data[i]%8 == 1)
        {
            continue;
        }

        for (int j = 0 ; j < 3; j++)
        {
            if (data[i]+j > 64 or 
                data[i]+j < 0)
            {
                break;
            }

            if (board[data[i]+j] == '0')
            {
                possibleMoves.push_back(data[i]+j);
            }
        }
    }
    return possibleMoves;
}