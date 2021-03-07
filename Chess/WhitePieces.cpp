#include "WhitePieces.hpp"
#include <iostream>
#include <memory>

WhitePieces::WhitePieces() :
    pieces{
        std::move(std::make_shared<Rook>(1, 8)),
        std::move(std::make_shared<Rook>(1, 1)),
        std::move(std::make_shared<Bishop>(1, 3)),
        std::move(std::make_shared<Bishop>(1, 6)),
        std::move(std::make_shared<Knight>(1, 2)),
        std::move(std::make_shared<Knight>(1, 7)),
        std::move(std::make_shared<Queen>(1, 4)),
        std::move(std::make_shared<King>(1, 5)),
        std::move(std::make_shared<Pawn>(2, 1)),
        std::move(std::make_shared<Pawn>(2, 2)),
        std::move(std::make_shared<Pawn>(2, 3)),
        std::move(std::make_shared<Pawn>(2, 4)),
        std::move(std::make_shared<Pawn>(2, 5)),
        std::move(std::make_shared<Pawn>(2, 6)),
        std::move(std::make_shared<Pawn>(2, 7)),
        std::move(std::make_shared<Pawn>(2, 8))}
    // rook(Rook(1, 1)),
    // rook2(Rook(1, 8)),
    // bishop(Bishop(1, 3)),
    // bishop2(Bishop(1, 6)),
    // knight(Knight(1, 2)),
    // knight2(Knight(1, 7)),
    // queen(Queen(1, 4)),
    // king(King(1, 5)),
    // pawn1(Pawn(2, 1)),
    // pawn2(Pawn(2, 2)),
    // pawn3(Pawn(2, 3)),
    // pawn4(Pawn(2, 4)),
    // pawn5(Pawn(2, 5)),
    // pawn6(Pawn(2, 6)),
    // pawn7(Pawn(2, 7)),
    // pawn8(Pawn(2, 8))
{
}

std::vector<char> WhitePieces::setPieces(const std::vector<char>& board)
{
    std::vector<char> newBoard = board;

    std::cout << "1" << rook.getName();

    for (const auto& piece : pieces)
    {
        newBoard[(8-piece->getX())*8+piece->getY()] = piece->getName();
    }

    std::cout << "3";

    return newBoard;
}

std::shared_ptr<Piece> WhitePieces::getPiece(const std::vector<char>& board, short x, short y)
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