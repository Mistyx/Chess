#include <vector>

#pragma once

class Piece
{
public:
    virtual std::vector<short> possibleMoves(const std::vector<char>& board, short x, short y) = 0;
    short getX()
    {
        return x;
    }
    short getY()
    {
        return y;
    }
    short getName()
    {
        return name;
    }

    void setX(short x1)
    {
        x = x1;
    }

    void setY(short y1)
    {
        y = y1;
    }

    void setName(char name1)
    {
        name = name1;
    }

protected:
    short x;
    short y;
    char name;
};