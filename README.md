# Echoes of Silence

> A minimalist audio-stealth maze game written in C++

**Echoes of Silence** is a unique puzzle-stealth game where the player navigates a maze using only limited sound-based vision. You must rely on sound to “see” your surroundings and avoid the enemy who hunts based on noise.

---

## 🎮 Features

- 🧠 **Audio-based visibility**: Echoes help you reveal parts of the maze temporarily.
- ❌ **Enemy AI**: The enemy chases the player by listening to movement.
- 💻 **ASCII Art Engine**: Runs entirely in the terminal using only standard C++.
- 🔁 **Modular & Expandable**: Designed with separate files and easy to understand logic.

---

## 🛠️ Build Instructions

### Linux / macOS:
```bash
g++ src/*.cpp -o echoes -std=c++17
./echoes
Windows:
Use any C++ compiler (e.g., MinGW or MSVC) and compile all .cpp files together.
🧱 Project Structure
EchoesOfSilence/
├── src/
│   ├── main.cpp
│   ├── Game.h / Game.cpp
│   ├── Maze.h / Maze.cpp
│   ├── Player.h / Player.cpp
│   ├── Enemy.h / Enemy.cpp
├── README.md
└── LICENSE
🎯 How to Play
Use W A S D to move.

Reach the Exit (E) without being caught by the Enemy (X).

You are represented by P.

The environment is static, but you can expand the code to include dynamic sound-based rendering.
💡 Ideas for Expansion
Add echolocation mode with timed fade of surroundings.
Integrate sound engine (SDL or SFML) to generate pings.
Randomized maze generation.
Score system and difficulty levels.

🧑‍💻 Author
Made with ❤️ by [https://github.com/majdavovacana]

