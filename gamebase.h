#ifndef GAMEBASE_H
#define GAMEBASE_H
#include <vector>
using std::vector;

// 棋盘尺寸
const int boardSize = 15;

// 游戏模式
enum GameType
{
    PERSON,
    AI,
    PERSON_ONLINE
};

class GameBase
{
public:
    GameBase();
private:
    vector<int> whichChess;    //存储是黑棋还是白棋，空白为0，黑棋为1，白棋为2
    GameType gameType; // 游戏模式

};

#endif // GAMEBASE_H
