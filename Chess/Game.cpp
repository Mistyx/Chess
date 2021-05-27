#include "Game.hpp"
#include "Board.hpp"
#include "WhitePieces.hpp"
#include "BlackPieces.hpp"
#include "GameCoordinator.hpp"

Game::Game()
{
    GameCoordinator gameCoordinator;

    WhitePieces whitePieces;
    BlackPieces blackPieces;
    Board board;

    const auto newBoard = board.prepareBoard(whitePieces, blackPieces);

    // Player player1(whitePieces);
    // Player player2(blackPieces);
    // Player player1;
    // Player player2;

    // while(not gameCoordinator.isCheckMate())
    // {
    //     player1.move(newBoard);
    //     gameCoordinator.checkCheckMate();
    //     player2.move(newBoard);
    //     gameCoordinator.checkCheckMate();
    // }
}