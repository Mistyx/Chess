#include "Board.hpp"
#include "WhitePieces.hpp"
#include "BlackPieces.hpp"
#include <iostream>
#include <string>

// std::ostream& operator<< (std::ostream &out, const std::vector<char> &board)
// {
//     for (int i = 0; i < 63; i++)
//     {
//         std::cout << board[i];
//         if (i%8==0)
//         {
//             std::cout << std::endl;
//         }
//     }
// }

std::vector<char> Board::prepareBoard(WhitePieces& whitePieces, BlackPieces& blackPieces)
{
    const std::vector<char> board(65, '0');
    const auto newBoard = whitePieces.setPieces(board);
    const auto newBoard1 = blackPieces.setPieces(newBoard);

    for(int i=0; i<newBoard.size(); ++i)
    {
        std::cout << newBoard[i] << ' ';
        if (i%8 == 0)
        {
            std::cout << std::endl;
        }
    }

    return newBoard;

    // std::cout << "##############################################################";

    // int x, y;

    // std::cin >> x >> y;

    // const auto piece = whitePieces.getPiece(newBoard, x, y);

    // const auto moves = piece->possibleMoves(newBoard, x, y);

    // for (const auto& move : moves)
    // {
    //     std::cout << "possible move: " << move << std::endl;
    // }
}