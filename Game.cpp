#include "Game.h"
#include "Maze.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

void Game::run() {
    Maze maze(10, 10);
    Player player(1, 1);
    Enemy enemy(8, 8);

    while (!maze.isExit(player.getX(), player.getY())) {
        maze.render(player, enemy);
        player.update(maze);
        enemy.update(maze, player);
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    std::cout << "\nCongratulations! You escaped the maze.\n";
}
