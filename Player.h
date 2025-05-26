#ifndef PLAYER_H
#define PLAYER_H

#include "Maze.h"

class Player {
private:
    int x, y;

public:
    Player(int startX, int startY);
    void update(const Maze& maze);
    int getX() const;
    int getY() const;
};

#endif
