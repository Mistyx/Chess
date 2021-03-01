#include <vector>

class GameCoordinator 
{
public:
    bool isCheckMate();
    void handle(const std::vector<char>& board);
};