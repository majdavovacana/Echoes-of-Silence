#ifndef ENEMY_H
#define ENEMY_H

#include "Maze.h"
#include "Player.h"

class Enemy {
private:
    int x, y;

public:
    Enemy(int startX, int startY);
    void update(const Maze& maze, const Player& player);
    int getX() const;
    int getY() const;
};

#endif
