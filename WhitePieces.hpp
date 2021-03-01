#include "Pieces/Rook.hpp"
#include "Pieces/Queen.hpp"
#include "Pieces/King.hpp"
#include "Pieces/Pawn.hpp"
#include "Pieces/Bishop.hpp"
#include "Pieces/Knight.hpp"
#include "Pieces/Piece.hpp"
#include <memory>

class WhitePieces
{
private:
    Rook rook;
    Rook rook2;
    Bishop bishop;
    Bishop bishop2;
    Knight knight;
    Knight knight2;
    Queen queen;
    King king;
    Pawn pawn1;
    Pawn pawn2;
    Pawn pawn3;
    Pawn pawn4;
    Pawn pawn5;
    Pawn pawn6;
    Pawn pawn7;
    Pawn pawn8;
public:
    WhitePieces();
    std::vector<std::shared_ptr<Piece>> pieces;
    std::vector<char> setPieces(const std::vector<char>& board);
    std::shared_ptr<Piece> getPiece(const std::vector<char>& board, short x, short y);
};