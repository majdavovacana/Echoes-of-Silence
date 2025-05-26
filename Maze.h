#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include <string>

class Player;
class Enemy;

class Maze {
private:
    int width, height;
    std::vector<std::string> grid;

public:
    Maze(int w, int h);
    void render(const Player& player, const Enemy& enemy);
    bool isWall(int x, int y) const;
    bool isExit(int x, int y) const;
};

#endif
