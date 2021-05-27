#include "BlackPieces.hpp"
#include <iostream>
#include <memory>

BlackPieces::BlackPieces() :
    pieces{
        std::make_shared<Rook>(8, 1),
        std::make_shared<Rook>(8, 8),
        std::make_shared<Bishop>(8, 3),
        std::make_shared<Bishop>(8, 6),
        std::make_shared<Knight>(8, 2),
        std::make_shared<Knight>(8, 7),
        std::make_shared<Queen>(8, 4),
        std::make_shared<King>(8, 5),
        std::make_shared<Pawn>(7, 1),
        std::make_shared<Pawn>(7, 2),
        std::make_shared<Pawn>(7, 3),
        std::make_shared<Pawn>(7, 4),
        std::make_shared<Pawn>(7, 5),
        std::make_shared<Pawn>(7, 6),
        std::make_shared<Pawn>(7, 7),
        std::make_shared<Pawn>(7, 8)}
{
}

std::vector<char> BlackPieces::setPieces(const std::vector<char>& board)
{
    std::vector<char> newBoard = board;

    for (const auto& piece : pieces)
    {
        newBoard[(8-piece->getX())*8+piece->getY()] = piece->getName();
    }

    return newBoard;
}

std::shared_ptr<Piece> BlackPieces::getPiece(const std::vector<char>& board, short x, short y)
{
    for (const auto& piece : pieces)
    {
        if (piece->getX() == x and piece->getY() == y)
        {
            return piece;
        }
    }

    return nullptr;
}