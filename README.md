# C++ Tic-Tac-Toe Game

A simple command-line Tic-Tac-Toe game written in C++ for two players.

## Features

- **Custom Symbol Selection:** Players can choose their preferred symbol (`X` or `O`).
- **Input Validation:** Prevents invalid inputs (out-of-bounds row/column entries and choosing already filled spots).
- **Win & Tie Detection:** Automatically checks all standard rows, columns, and diagonals for a win or a draw after each move.
- **Visual Board Display:** Renders the grid after every turn to show the current game state.

## How to Run

### Prerequisites
- A C++ compiler (e.g., `g++`, `clang++`, or MSVC) installed on your machine.

### Compilation
Open your terminal or command prompt, navigate to the directory containing the source code, and run:

```bash
g++ -o tictactoe main.cpp
