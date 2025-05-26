#include "Enemy.h"
#include <cstdlib>
#include <cmath>

Enemy::Enemy(int startX, int startY) : x(startX), y(startY) {}

void Enemy::update(const Maze& maze, const Player& player) {
    int dx = player.getX() - x;
    int dy = player.getY() - y;
    if (std::abs(dx) > std::abs(dy)) {
        if (dx > 0 && !maze.isWall(x + 1, y)) x++;
        else if (dx < 0 && !maze.isWall(x - 1, y)) x--;
    } else {
        if (dy > 0 && !maze.isWall(x, y + 1)) y++;
        else if (dy < 0 && !maze.isWall(x, y - 1)) y--;
    }
}

int Enemy::getX() const { return x; }
int Enemy::getY() const { return y; }
