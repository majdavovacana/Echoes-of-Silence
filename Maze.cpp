#include "Maze.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>

Maze::Maze(int w, int h) : width(w), height(h) {
    grid = {
        "##########",
        "#        #",
        "# ###### #",
        "# #    # #",
        "# # ## # #",
        "# # ## # #",
        "# #    # #",
        "# ###### #",
        "#        #",
        "########E#"
    };
}

void Maze::render(const Player& player, const Enemy& enemy) {
    system("clear");
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if (x == player.getX() && y == player.getY()) std::cout << 'P';
            else if (x == enemy.getX() && y == enemy.getY()) std::cout << 'X';
            else std::cout << grid[y][x];
        }
        std::cout << '\n';
    }
}

bool Maze::isWall(int x, int y) const {
    return grid[y][x] == '#';
}

bool Maze::isExit(int x, int y) const {
    return grid[y][x] == 'E';
}
