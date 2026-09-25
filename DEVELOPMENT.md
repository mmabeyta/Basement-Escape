# Basement Escape - Development Notes

## Project Goal

Built for the EAS Technical Challenge 2026. This challenge has the following requirements:

1) Take some form of input. Do something useful or interesting with that input.
2) Produce a useful, actionable or informative output for the user.
3) Most importantly, choose something that interests you and show us how you approached the task.

## Initial Idea
I chose to make my current (work in progress) Scratch escape room project into a text adventure game (reminiscent of Zork). Since I had already designed most of the game concepts and mechanics, translating it into a text adventure game would be a nice challenge and wouldn't take as long as building a full GUI with 2D art since there are time constraints.

## Planning and Design
For the planning I wrote the story, game concepts and flow chart before translating them into code. I used ChatGPT to brainstorm and refine parts of the story and puzzle design.

### Game Flow

This is the flow chart. The chart shows dependencies, not a mandatory player route. The bucket can be solved immediately. The player can discover the pipe and count the drips to get 6. They can inspect the toys before they’re able to solve them. They can read diary entries in any order. That’s what gives us the Zork-like exploration rather than making the game one long sequence of prompts.

Flow Chart

```text
START GAME
    |
    +--> Display title / introduction
    +--> Player wakes in darkness
    +--> Sound of dripping water
    +--> Basement light comes on
    |
    v
ROOM EXPLORATION
    |
    |   Player can freely examine and interact with the room.
    |   Puzzle dependencies do not represent a mandatory route.
    |
    +------------------+------------------+------------------+------------------+
    |                  |                  |                  |                  |
    v                  v                  v                  v                  v
THREE-DRAWER       BUCKET / PIPE     PALLETS / PANEL      TOY SHELF           DRAIN
TABLE                  |                  |                  |                  |
    |                  |                  |             Five toys:        Photograph
    |                  |                  |             Horse             beneath grate
    |                  |                  |             Rocket                 |
    |                  |                  |             Duck                   v
    |                  |                  |             Bear              Tommy sitting
    |                  |                  |             Robot             in this room
    |                  |                  |                  |             with the toys
    |                  |                  |             Can be examined         |
    |                  |                  |             immediately             v
    |                  |                  |                            ENVIRONMENTAL
    |                  |                  v                            STORYTELLING
    |                  |             BINARY PANEL
    |                  |              16 8 4 2 1
    |                  |                  |
    |                  |             Player toggles
    |                  |                lights
    |                  |                  |
    |                  |          +-------+-------+
    |                  |          |               |
    |                  |       INCORRECT        CORRECT
    |                  |          |               |
    |                  |     Panel remains       CLICK
    |                  |       unsolved           |
    |                  |                          v
    |                  |                   TOP DRAWER
    |                  |                     UNLOCKS
    |                  |                          |
    |                  |                          v
    |                  |                 DUCK + BEAR PHOTO
    |                  |                          |
    |                  |                    Crude + sign
    |                  |                  between the toys
    |                  |                          |
    |                  |                          v
    |                  |                    REVEALS CLUE
    |                  |                          |
    |                  v                          |
    |          BUCKET / PIPE PUZZLE               |
    |                  |                          |
    |                  v                          |
    |            REVEALS CLUE                     |
    |           TRIANGLE = 6                      |
    |                  |                          |
    |                  |                          |
    +--> BOTTOM DRAWER |                          |
    |       |          |                          |
    |       v          |                          |
    |     OPEN         |                          |
    |       |          |                          |
    |       v          |                          |
    |   TOMMY'S DIARY  |                          |
    |       |          |                          |
    |       +--> Day 4 |                          |
    |       +--> Day 8 |                          |
    |       +--> Day 12|                          |
    |       +--> Day 16|                          |
    |       +--> Day 19|                          |
    |       |                                     |
    |       |   Entries may be read               |
    |       |   in any order                      |
    |       |                                     |
    |       v                                     |
    |     DAY 12                                  |
    |       |                                     |
    |       v                                     |
    |   TWILIGHT TOY DERBY                        |
    |       |                                     |
    |       v                                     |
    |   TOY PUZZLE DISCOVERED                     |
    |       |                                     |
    |       |   "arrange" command                 |
    |       |   becomes available                 |
    |       |                                     |
    |       v                                     |
    |   PLAYER ARRANGES TOYS <--------------------+
    |       |
    |       |   Correct order:
    |       |
    |       |   1. Rocket
    |       |   2. Robot
    |       |   3. Horse
    |       |   4. Bear
    |       |   5. Duck
    |       |
    |   +---+-------------------+
    |   |                       |
    | INCORRECT               CORRECT
    |   |                       |
    | Light flickers         Heavy click
    | violently             Light flickers
    | then stops            then goes out
    |                           |
    |                           v
    |                     ROOM BECOMES DARK
    |                           |
    |                  +--------+--------+
    |                  |                 |
    |                  v                 v
    |              STAR FIELD       SWITCH PLATE
    |              NOW VISIBLE      BEGINS TO GLOW
    |                  |                 |
    |                  |            Player can toggle
    |                  |            room light on/off
    |                  |
    |                  v
    |              STAR PUZZLE
    |                  |
    |          Player examines stars
    |                  |
    |          ASCII star field shown
    |                  |
    |          Player enters a shape
    |                  |
    |           +------+------+
    |           |             |
    |        INCORRECT       STAR
    |           |             |
    |      Pattern fades    SUCCESS
    |      Nothing happens     |
    |                         v
    |                  ROOM LIGHT RETURNS
    |                         |
    |                         v
    |                   MIDDLE DRAWER
    |                      UNLOCKS
    |                         |
    |                         v
    |                    REVEALS CLUE
    |                    CIRCLE = 7
    |                         |
    +-------------------------+-----------------------------+
                              |
                              |
                 TOY SHELF CLUE: SQUARE = 9
                              |
                              v
                          CLUE PATHS
                              |
                 Player discovers three mappings:
                              |
                         TRIANGLE = 6
                          SQUARE = 9
                          CIRCLE = 7
                              |
                              |   Clues may be discovered
                              |   in different orders
                              |
                              v
                       FINAL PADLOCK
                              |
                  Symbols beneath dials:
                         △   □   ○
                              |
                  Establish combination:
                         6   9   7
                              |
                              v
                PLAYER ENTERS COMBINATION
                              |
                     +--------+--------+
                     |                 |
                   WRONG             CORRECT
                     |                 |
               Lock remains        Padlock opens
                  closed               |
                                       v
                               DOOR CAN BE OPENED
                                       |
                                       v
                               PLAYER OPENS DOOR
                                       |
                                       v
                                    ESCAPE
                                       |
                                       v
                               CONGRATULATIONS
                                       |
                                       v
                                   GAME OVER
```

### Optional Features if time

- Player name input and personalised ending
- Letter-by-letter text output
- Sound/bell on successful escape
- High-score storage (only if time permits)
- player timer for high score

### Puzzle Logic

Due to the text adventure format, most puzzle interactions will compare player input against the expected solution. Correct input will change the game state and allow the player to progress, while incorrect input will produce environmental feedback showing that the attempt failed.

The 5 light panel puzzle I designed was inspired by several courses I took over the summer that covered binary. So I thought it'd be a great nod to that. The player has to read Tommy's clues the main clue is Today is the day!!! which happens on Day 19

For the toy puzzle in the text adventure version, the player enters the five toys in their chosen order. The program compares the input against the correct arrangement and provides environmental feedback depending on whether the attempt succeeds or fails.

The Twilight Toy Derby

When darkness falls and lights burn low,
five little racers start to go.
From shelf to floor they race away,
but only one will win today.

Those born to fly stood far apart,
one at the finish, one at the start.
Those forged of metal raced side by side,
with barely a space between each stride.

The hooves crossed sooner than the wings,
but neither knew what victory brings.
The pair who ran on legs of two,
left one between them when the race was through.

Riddle logic:

- Rocket and Duck can fly, placing them at opposite ends.
- Rocket and Robot are made of metal, placing them side by side.
- Horse has hooves and must finish before Duck, establishing which flying toy is first and which is last.
- Robot and Bear run on two legs and have one racer between them.

Solution:
Rocket, Robot, Horse, Bear, Duck

The star puzzle in my original Scratch project uses the mouse pointer to trace a shape in the stars. Here I've put in an ASCII illustration so the player can see where they need to go. Their input must say "star" in order to proceed. 

The last main piece is the padlock. The padlock tells the player in what order the numbers belong using the symbols beneath the dials. The triangular notch on the bucket corresponds to 6, the square labels on the toy shelf correspond to 9, and the circular switch plate corresponds to 7. The symbols on the padlock are ordered triangle, square, circle, giving the final combination 6, 9, 7.

### Command Keywords
- help
- quit
- door
- lock
- bucket
- pipe
- hatch
- table
- top drawer
- middle drawer
- bottom drawer
- pallets
- panel
- button
- shelf
- horse
- rocket
- duck
- bear
- robot
- switch
- light
- drain
- diary
- day 4
- day 8
- day 12
- day 16
- day 19
- arrange
- stars
- star
- open
- enter

### Game State

Boolean variables are used to track the player's progress and control which interactions are currently available.

- `panelDiscovered` - tracks whether the hidden binary panel has been found.
- `topDrawerLocked` - controls access to the top drawer.
- `middleDrawerLocked` - controls access to the middle drawer.
- `light16On`, `light8On`, `light4On`, `light2On`, `light1On` - store the current state of each binary-panel light.
- `diaryFound` - tracks whether the player has collected Tommy's diary.
- `toyPuzzleDiscovered` - enables the toy puzzle after the relevant diary entry has been read.
- `toyPuzzleSolved` - tracks completion of the toy arrangement puzzle.
- `starsDiscovered` - enables interaction with the stars after the room becomes dark.
- `roomDark` - tracks whether the room is dark and restricts player commands while the star puzzle is active.
- `binaryPuzzleSolved` - tracks completion of the binary-panel puzzle and prevents further button changes after it has been solved.
- `starPuzzleSolved` - tracks completion of the star puzzle and prevents it from being solved repeatedly.
- `starsExamined` - tracks whether the player has examined the visible star field and enables star-puzzle answers.
- `padLockLocked` - tracks whether the final padlock is locked and controls whether the door can be opened.
- `playerWins` - tracks whether the player has escaped and controls when the main game loop ends.

## Development Log

### 24 September 2026 - Project Setup
- Set up Git repository.
- Learned the difference between Git and GitHub.
- Created initial project structure.
- Need to investigate how to measure elapsed time in C if time.
- Built the opening, player input, quit and help commands.
- Built the binary puzzle and table drawer interactions.
- Added game-state progression from the binary puzzle to the table.

### 25 September 2026

- Added Tommy's diary and individual readable diary entries.
- Used Day 12 to gate discovery of the toy puzzle.
- Implemented the toy arrangement puzzle with success and failure feedback.
- Added game-state progression from the toy puzzle to the star puzzle.
- Revised drawer contents and photograph clues.
- Simplified the final padlock clue system by placing the symbols directly on the lock.
- Added pauseGame() to game logic for timed narrative output.
- Completed the ASCII star puzzle and added shape-based player input.
- Restricted normal room interactions while the room is dark.
- Added solved states to the binary, toy and star puzzles to prevent completed puzzles from being solved repeatedly.
- Added post-solution descriptions so completed puzzles remain consistent when examined again.
- Added a completed ASCII star pattern for the solved star puzzle.
- Added game-state progression from the star puzzle to unlocking the middle drawer.
- Implemented the final padlock puzzle using the three environmental number clues and shape symbols to determine the combination order.
- Allowed the player to attempt the padlock combination at any time rather than requiring all clues to be discovered first.
- Added locked and unlocked states to the padlock and changed its description after it has been opened.
- Added separate door interactions for examining and attempting to open the door depending on the padlock state.
- Added the final escape sequence and game-ending state.
- Replaced the infinite main game loop with a loop controlled by the `playerWins` game-state variable.
- Completed a full gameplay test from puzzle interactions through the final escape.
- Conducted an external playtest, which identified an inconsistency between the environmental clue mappings and the padlock symbols. Corrected the toy clue to 9, the switch clue to 7, and reordered the padlock symbols to triangle, square, circle so the clues consistently produce 697.

