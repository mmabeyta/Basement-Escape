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

This is the flow chart. The chart shows dependencies, not a mandatory player route. The bucket can be solved immediately. The player can discover the drain before understanding DUCK + ROBOT. They can inspect the toys before they’re able to solve them. They can read diary entries in any order. That’s what gives us the Zork-like exploration rather than making the game one long sequence of prompts.

Original Flow Chart

```text
START GAME
    |
    +--> Display title / introduction
    +--> (OPTIONAL) Player name input
    +--> Player wakes in darkness
    +--> Establish sound of dripping water
    +--> Basement light comes on
    +--> Start hidden timer
    |
    v
ROOM EXPLORATION
    |
    |   Player can examine/interact with the room freely.
    |
    +-------------------+-------------------+-------------------+-------------------+
    |                   |                   |                   |
    v                   v                   v                   v
THREE-DRAWER          BUCKET            BINARY PANEL        TOY SHELF
TABLE                   |                   |                   |
    |                    |                   |                Five toys
    |                    |                Five lights         with numbered
    |                    |                Values:             square labels
    |                    |                16 8 4 2 1             |
    |                    |                   |                Can be examined
    |                    |                   |                before puzzle
    |                    |                   |                is solvable
    |                    |                   |
    |                    v                   |
    |                 BUCKET                 |
    |                    |                   |
    |             Contains water from        |
    |             leaking pipe above         |
    |                    |                   |
    |             Triangular notch           |
    |             at bottom = △              |
    |                    |                   |
    |             Message asks:              |
    |             "HOW MANY DROPS            |
    |              DID YOU HEAR?"            |
    |                    |                   |
    |                    v                   |
    |              EXAMINE PIPE              |
    |                    |                   |
    |                 8 drips                |
    |                    |                   |
    |              NUMBER = 8                |
    |              SYMBOL = △                |
    |                                        |
    |                                        v
    |                                BINARY LIGHT PUZZLE
    |                                        |
    |                               Player experiments
    |                               with light pattern
    |                                        |
    |                              +---------+---------+
    |                              |                   |
    |                           INCORRECT             19
    |                              |                   |
    |                        Lights flash          Lights turn
    |                        violent red           green
    |                              |                   |
    |                        Return black             CLICK
    |                                                  |
    |                                                  v
    |                                             DRAWER 1
    |                                             UNLOCKS
    |                                                  |
    |                                                  v
    |                                         Photograph of
    |                                         Tommy + toys
    |                                                  |
    |                                                  v
    |                                         TOY PUZZLE NOW
    |                                           SOLVABLE
    |
    |
    +--> DRAWER 1
    |       Locked until binary puzzle is solved
    |
    +--> DRAWER 2
    |       Locked until star puzzle is solved
    |
    +--> DRAWER 3
            |
            v
          OPEN
            |
            v
       TOMMY'S DIARY
            |
       Damaged diary:
       many pages faded
       or ripped out
            |
       Surviving entries:
       Day 4
       Day 8
       Day 12
       Day 16
       Day 19
            |
       Player chooses which
       entry to read
            |
       Contains cryptic clues
       for the basement puzzles
            |
       Day 12 contains:
            |
            v
   THE TWILIGHT TOY DERBY
            |
            |         (The diary can be read before
            |          the toy puzzle is solvable.)
            |
            +-----------------------------------------+
                                                      |
                                                      v
                                                TOY PUZZLE
                                                      |
                                          Player arranges toys
                                          using numbered
                                          square labels
                                                      |
                                          Correct finishing order:
                                                      |
                                               1. Rocket
                                               2. Robot
                                               3. Horse
                                               4. Teddy
                                               5. Duck
                                                      |
                                         +------------+------------+
                                         |                         |
                                      INCORRECT                  CORRECT
                                         |                         |
                                  Lights flicker               Light switch
                                  giving brief                 becomes active
                                  glimpses of                       |
                                  star field                        |
                                                                    |
                       +--------------------------------------------+----------------+
                       |                                                             |
                       v                                                             v
                  DRAIN CLUE                                                  LIGHT SWITCH
                       |                                                             |
                Can be examined                                              Odd circular
                before toy puzzle,                                           base plate = ○
                but clue cannot                                                     |
                yet be solved                                                       |
                       |                                                      Player turns
                Photograph shows:                                            room light OFF
                DUCK + ROBOT                                                       |
                       |                                                             v
                Solved toy order:                                              STAR FIELD
                Duck = 5                                                            |
                Robot = 2                                                   Hidden among
                       |                                                     other stars
                       v                                                            |
                   5 + 2                                                     Diary clue:
                       |                                                            |
                       v                                            "Five points of light guide
                  NUMBER = 7                                        the way at night.
                  SYMBOL = □                                        Trace your finger along the sky,
                                                                    and draw what the darkness hides."
                                                                                   |
                                                                                   v
                                                                         Player identifies
                                                                              STAR
                                                                                   |
                                                                                   v
                                                                         Star pattern changes
                                                                         and NUMBER = 9
                                                                                   |
                                                                            SYMBOL = ○
                                                                                   |
                                                                                 CLICK
                                                                                   |
                                                                                   v
                                                                              DRAWER 2
                                                                              UNLOCKS
                                                                                   |
                                                                                   v
                                                                              ORDER CLUE

                                                                    "HE ALWAYS STARTED
                                                                     AT THE BOTTOM."
                                                                                   |
                                                                                   v
                                                                         THREE-DRAWER TABLE

                                                                         Top drawer    □
                                                                         Middle drawer ○
                                                                         Bottom drawer △

                                                                         Start at bottom:

                                                                         △  ->  ○  ->  □
                                                                         8      9      7
                                                                                   |
                                                                                   v
                                                                             PADLOCK = 897
                                                                                   |
                                                                         +---------+---------+
                                                                         |                   |
                                                                      INCORRECT           CORRECT
                                                                         |                   |
                                                                       Retry             Stop timer
                                                                                             |
                                                                                             v
                                                                                       ENDING CHECK
                                                                                             |
                                                                                  Compare player's time
                                                                                  with Tommy's time
                                                                                             |
                                                                                  +----------+----------+
                                                                                  |                     |
                                                                               BEAT TIME          DID NOT BEAT
                                                                                  |                     |
                                                                               WIN ENDING          DARK ENDING
                                                                                  |
                                                                          Optional sound/bell

```


### Optional Features if time

- Player name input and personalised ending
- Letter-by-letter text output
- Sound/bell on successful escape
- High-score storage (only if time permits)

### Puzzle Logic

Due to the text adventure format, most puzzle interactions will compare player input against the expected solution. Correct input will change the game state and allow the player to progress, while incorrect input will produce environmental feedback showing that the attempt failed.

The 5 light panel puzzle I designed was inspired by several courses I took over the summer that covered binary. So I thought it'd be a great nod to that. 

The toy puzzle in my original Scratch game is a swapping mechanic but here it'll be a true or false based off of player input. The player will have to solve the riddle below to determine the order in which they belong for the duck, horse, bear, robot and rocket.

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
- Robot and Teddy run on two legs and have one racer between them.

Solution:
Rocket, Robot, Horse, Teddy, Duck

The star puzzle in my original Scratch project uses the mouse pointer to trace a shape in the stars. Here I've put in an ASCII illustration so the player can see where they need to go. Their input must say "star" in order to proceed. 

The last main piece is the padlock. The player will have to solve all the puzzles in the room to find the digits 8, 9 and 7 and determine the order in which they belong. Each final number is associated with a shape through an environmental characteristic rather than an explicitly etched clue. The bucket has a triangular notch, the light switch has an unusual circular base plate, and the toy shelf uses square number labels. The final drawer clue tells the player to start at the bottom, establishing the order triangle, circle, square and therefore 8, 9, 7.

### Game State

## Development Log

### 24 September 2026 - Project Setup
- Set up Git repository.
- Learned the difference between Git and GitHub.
- Created initial project structure.
- Need to investigate how to measure elapsed time in C.

