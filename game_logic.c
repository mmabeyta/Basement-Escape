
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include "game_logic.h"

bool roomDark = false;

bool panelDiscovered = false;
bool topDrawerLocked = true;
bool middleDrawerLocked = true;
bool diaryFound = false;

bool light16On = false;
bool light8On = false;
bool light4On = false;
bool light2On = false;
bool light1On = false;

bool binaryPuzzleSolved = false;
bool toyPuzzleDiscovered = false;
bool toyPuzzleSolved = false;
bool starsDiscovered = false;
bool starPuzzleSolved = false;
bool starsExamined = false;
bool padLockLocked = true;

bool playerWins = false;


void pauseGame(int seconds){ //this function uses the sleep function to pause the game for an x amount of seconds
    sleep(seconds);

}

void pushButton(char input[]){ //this function controls the push button features on the binary panel and checks the checkbinary function for input success or failure
    if (strcmp(input, "push button 16") == 0 && binaryPuzzleSolved == false){
        if (panelDiscovered == true){
            if (light16On == false){
                light16On = true;
                printf("Light 16 flickers on.\n\n");
            }
            else{
                light16On = false;
                printf("Light 16 flickers off.\n\n");
            }
            checkBinaryPuzzle();
        }
    }
    else if (strcmp(input, "push button 8") == 0 && binaryPuzzleSolved == false){
        if (panelDiscovered == true){
            if (light8On == false){
                light8On = true;
                printf("Light 8 flickers on.\n\n");
            }
            else{
                light8On = false;
                printf("Light 8 flickers off.\n\n");
            }
            checkBinaryPuzzle();
        }
    }
    else if (strcmp(input, "push button 4") == 0 && binaryPuzzleSolved == false){
        if (panelDiscovered == true){
            if (light4On == false){
                light4On = true;
                printf("Light 4 flickers on.\n\n");
            }
            else{
                light4On = false;
                printf("Light 4 flickers off.\n\n");
            }
            checkBinaryPuzzle();
        }
    }
    else if (strcmp(input, "push button 2") == 0 && binaryPuzzleSolved == false){
        if (panelDiscovered == true){
            if (light2On == false){
                light2On = true;
                printf("Light 2 flickers on.\n\n");
            }
            else{
                light2On = false;
                printf("Light 2 flickers off.\n\n");
            }
            checkBinaryPuzzle();
        }
    }
    else if (strcmp(input, "push button 1") == 0 && binaryPuzzleSolved == false){
        if (panelDiscovered == true){
            if (light1On == false){
                light1On = true;
                printf("Light 1 flickers on.\n\n");
            }
            else{
                light1On = false;
                printf("Light 1 flickers off.\n\n");
            }
            checkBinaryPuzzle();
        }
    }

}

void checkBinaryPuzzle(void){ //this function tests whether the lights in the binary puzzle are the correct combination if so then it prints another clue and changes the game state
    if(light16On == true && light8On == false && light4On == false && light2On == true && light1On == true && binaryPuzzleSolved == false){
        printf("The lights flash in quick succession.\n");
        printf("Then they all settle to a bright forest green.\n");
        printf("Somewhere to your left you hear a soft \"Click\".\n\n");
        topDrawerLocked = false;
        binaryPuzzleSolved = true;
    }
}

void checkToyPuzzle(char input[]){// this function tests the toy puzzle arrangements for success or failure. It provides game state progression for a successful input
    if (strcmp(input, "arrange rocket robot horse bear duck") == 0 && toyPuzzleDiscovered == true && toyPuzzleSolved == false){
        printf("You place the last toy into position.\n");
        printf("For a moment, nothing happens.\n");
        printf("Then you hear a heavy Click! somewhere inside the wall.\n");
        printf("The light above you flickers once... twice... then goes out.\n\n");
        pauseGame(2);
        printf("The room falls into darkness.\n");
        printf("As your eyes adjust, dozens of tiny \033[1mstars\033[0m begin to glow on the walls around you.\n");
        printf("They were there all along, hidden in the darkness.\n");
        printf("On the wall, the circular plate surrounding the \033[1mswitch\033[0m begins to glow faintly.\n\n");
        starsDiscovered = true;
        roomDark = true;
        toyPuzzleSolved = true;
    }
    else if (strncmp(input, "arrange ", 8) == 0 && toyPuzzleDiscovered == true && toyPuzzleSolved == false){
        printf("You place the last toy into position.\n");
        printf("The light above you flickers violently for a moment...\n");
        printf("Then everything becomes still.\n\n");
}
}

void checkStarPuzzle(char input[]){ //this function checks the input for the star puzzle for a successful input with several inputs failing and one advancing the game and changing game state.
    if(starsExamined == true && starPuzzleSolved == false){
        if (strcmp(input, "pentagon") == 0){
            printf("As soon as you complete tracing the pentagon shape, the pattern before you dies out. Nothing happens.\n\n");
        }
        else if (strcmp(input, "diamond") == 0){
            printf("As soon as you complete tracing the diamond shape, the pattern before you dies out. Nothing happens.\n\n");
        }
         else if (strcmp(input, "triangle") == 0){
            printf("As soon as you complete tracing the triangle shape, the pattern before you dies out. Nothing happens.\n\n");
        }
         else if (strcmp(input, "circle") == 0){
            printf("As soon as you complete tracing the circle shape, the pattern before you dies out. Nothing happens.\n\n");
        }
         else if (strcmp(input, "square") == 0){
            printf("As soon as you complete tracing the square shape, the pattern before you dies out. Nothing happens.\n\n");
        }
         else if (strcmp(input, "star") == 0){
            printf("As soon as you complete tracing the star shape the pattern before you dies out.\n\n");
            pauseGame(1);
            printf("Then all of the stars around the room start twinkling with their brightness increasing after every moment.\n\n");
            pauseGame(1);
            printf("Just when you feel that you have to shut your eyes from the blinding light, they all at once fade out.\n\n");
            pauseGame(1);
            printf("The pursuing darkness creates a contrast in your eyes of a strange ghostly pattern.\n\n");
            pauseGame(1);
            printf("Before you can make it out you hear another Click! behind you.\n\n");
            printf("Then the ceiling light blazes back to life.\n\n");
            roomDark = false;
            starPuzzleSolved = true;
            middleDrawerLocked = false;
        } 
    }
}

void checkPadLock(char input[]){// this function checks the input of the padlock combinations. It provides feedback for successful and unsuccessful inputs. It changes game state when successful.
    if(strcmp(input, "enter 697") == 0 && padLockLocked == true){
        printf("You turn the final dial into position.\n");
        printf("For a moment, nothing happens.\n\n");
        pauseGame(1);
        printf("Click!\n\n");
        pauseGame(1);
        printf("The shackle springs loose in your hand.\n");
        printf("You pull the padlock free and let it fall to the floor.\n\n");
        pauseGame(3);
        printf("For the first time since you woke up, the \033[1mdoor\033[0m is no longer locked.\n\n");
        padLockLocked = false;
    }
    else if(strncmp(input, "enter ", 6) == 0 && padLockLocked == true){
        printf("You turn the dials to your chosen combination and pull on the lock.\n");
        printf("It doesn't move.\n\n");
    }
    else if(strncmp(input, "enter ", 6) == 0 && padLockLocked == false){
        printf("The padlock is already open and lying on the floor where you left it.\n\n");
    }
}

