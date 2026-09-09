# Clue — C++ OOP Project

A terminal-based implementation of the board game Clue, built as a C++ object-oriented software engineering project.

## Goals

- Practice object-oriented design
- Use inheritance and polymorphism
- Model game entities with classes
- Build a turn-based game engine
- Implement a deduction/AI system
- Add unit tests and CI
- Keep the architecture modular and extensible

## Build

```bash
cmake -S . -B build
cmake --build build
```

Run:

```bash
./build/clue
```

Run tests:

```bash
ctest --test-dir build
```

## Suggested Development Order

1. Implement `Card`
2. Implement `Player`
3. Add characters, rooms, and weapons
4. Create the solution/envelope
5. Deal remaining cards to players
6. Implement turns and suggestions
7. Implement accusation logic
8. Add deduction tracking
9. Add computer players
10. Add save/load functionality
11. Add stronger tests and GitHub Actions

## Architecture

The starter project intentionally leaves most game logic unimplemented. The goal is for you to design the system rather than simply fill in a tutorial.

Suggested future classes:

- `Game`
- `Player`
- `HumanPlayer`
- `AIPlayer`
- `Card`
- `Room`
- `Weapon`
- `Character`
- `Deck`
- `Solution`
- `GameState`
- `Board`
- `CommandParser`
- `DeductionEngine`

## Design Challenge

Try to avoid putting all of the game logic inside `Game.cpp`.

A strong implementation should have clear responsibilities between classes and make it easy to add another player type or game rule without rewriting the entire engine.
