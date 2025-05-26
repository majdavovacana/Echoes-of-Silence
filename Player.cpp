#include "Player.h"
#include <iostream>

Player::Player(int startX, int startY) : x(startX), y(startY) {}

void Player::update(const Maze& maze) {
    std::cout << "Use WASD to move: ";
    char input;
    std::cin >> input;

    int newX = x, newY = y;
    if (input == 'w') newY--;
    else if (input == 's') newY++;
    else if (input == 'a') newX--;
    else if (input == 'd') newX++;

    if (!maze.isWall(newX, newY)) {
        x = newX;
        y = newY;
    }
}

int Player::getX() const { return x; }
int Player::getY() const { return y; }
