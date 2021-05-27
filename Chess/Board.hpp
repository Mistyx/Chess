#ifndef SRC_BOARD_HPP
#define SRC_BOARD_HPP

#include <vector>

#include "WhitePieces.hpp"
#include "BlackPieces.hpp"

class Board 
{
public:
    std::vector<char> prepareBoard(WhitePieces& whitePieces, BlackPieces& blackPieces);
};

#endif /* SRC_BOARD_HPP */