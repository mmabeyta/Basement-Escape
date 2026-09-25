# Basement Escape

Basement Escape is a terminal-based text adventure and escape-room game written in C.

The player wakes in a locked basement and must explore the room, solve a series of interconnected puzzles, and discover the combination needed to escape.

## The Problem

For the EAS Technical Challenge, I needed to create a small piece of software that takes input, does something useful or interesting with it, and produces output for the user.

I chose to turn an escape-room concept I had already been designing into a terminal-based text adventure. This gave me a problem I was genuinely interested in while also giving me the opportunity to develop my C programming skills.

## My Approach

I started by designing the story, puzzles and game flow before writing the program.

Rather than making the game a fixed sequence of questions, I wanted the player to be able to explore the basement and discover information in different orders. The program therefore uses game-state variables to keep track of what the player has discovered, which puzzles have been solved and which interactions are currently available.

Player commands are entered as text. The program processes that input and responds by describing the environment, changing the game state or providing feedback about a puzzle attempt.

The project was split across multiple C source files to separate different parts of the game.

For a more detailed explanation of the design and development process, see `DEVELOPMENT.md`.

For research and things I learned while building the project, see `RESEARCH.md`.

## Features

- Free-form room exploration using text commands
- Multiple interconnected puzzles
- Binary light puzzle
- Logic-based toy arrangement puzzle
- ASCII star puzzle
- Environmental clues
- Game-state dependent interactions
- Case-insensitive player input
- Final combination puzzle and escape sequence
- ASCII art and terminal text formatting

## How to Play

Explore the basement by typing commands. 
Do not use punctuation and only type one space in between each word.

Look around using:

look north
look east
look south
look west
look up
look down

Other useful commands:

examine [object]
open [object]
read [object]
push [object]
enter [number]

help: to show this message again
quit: to quit the game

The objective is to explore the basement, understand the clues and escape.

## How to Compile

The game was developed and tested on macOS using Clang.

From the project directory, compile the game with:

    clang basement_escape.c directions.c game_logic.c objects.c -o basement_escape

## How to Run

After compiling:

    ./basement_escape

## Design Trade-offs

The original escape-room concept was being developed as a graphical Scratch project. For this challenge, I chose to adapt it into a terminal-based game.

This meant replacing graphical interactions with text input and ASCII art. For example, the original star puzzle involved tracing a shape with the mouse, while the terminal version presents the puzzle using ASCII characters and asks the player to identify the shape.

This allowed me to focus on the program logic, player input, puzzle state and game progression within the time available rather than spending much of the challenge building a graphical interface.

## What I Would Improve

With more time I would like to:

- Make the command parser more flexible so that it can understand more variations of the same command.
- Add a player name and personalised ending.
- Add a timer and high-score system.
- Add sound feedback.
- Explore a letter-by-letter text effect for narrative output.
- Continue improving the game's portability across operating systems.

## Testing

I tested the game throughout development and completed full playthroughs to check puzzle progression and game states.

I also asked another person to play the game without knowing the solutions. This identified an inconsistency in the final puzzle clues that wasn't a programming error but made the puzzle produce the wrong logical answer. I corrected the clue mappings and padlock symbols following that test.

## Project Documentation

`DEVELOPMENT.md` contains the planning, puzzle design, game-state design, flowchart and development log.

`RESEARCH.md` contains the research I carried out and new concepts I learned while building the project.

`AI.md` documents how AI tools were used during the project.

## Project Status

Completed for the EAS Technical Challenge 2026.

## Author

Monica Abeyta

## Copyright

© 2026 Monica Abeyta. All rights reserved.