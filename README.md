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

