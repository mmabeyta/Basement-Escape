
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include "game_logic.h"

bool panelDiscovered = false;
bool topDrawerLocked = true;
bool middleDrawerLocked = true;

bool light16On = false;
bool light8On = false;
bool light4On = false;
bool light2On = false;
bool light1On = false;

bool diaryFound = false;
bool toyPuzzleDiscovered = false;
bool toyPuzzleSolved = false;
bool starsDiscovered = false;


void pauseGame(int seconds){
    sleep(seconds);

}

void pushButton(char input[]){
    if (strcmp(input, "push button 16") == 0){
        if (panelDiscovered == true){
            if (light16On == false){
                light16On = true;
                printf("Light 16 flickers on.\n");
            }
            else{
                light16On = false;
                printf("Light 16 flickers off.\n");
            }
            checkBinaryPuzzle();
        }
    }
    else if (strcmp(input, "push button 8") == 0){
        if (panelDiscovered == true){
            if (light8On == false){
                light8On = true;
                printf("Light 8 flickers on.\n");
            }
            else{
                light8On = false;
                printf("Light 8 flickers off.\n");
            }
            checkBinaryPuzzle();
        }
    }
    else if (strcmp(input, "push button 4") == 0){
        if (panelDiscovered == true){
            if (light4On == false){
                light4On = true;
                printf("Light 4 flickers on.\n");
            }
            else{
                light4On = false;
                printf("Light 4 flickers off.\n");
            }
            checkBinaryPuzzle();
        }
    }
    else if (strcmp(input, "push button 2") == 0){
        if (panelDiscovered == true){
            if (light2On == false){
                light2On = true;
                printf("Light 2 flickers on.\n");
            }
            else{
                light2On = false;
                printf("Light 2 flickers off.\n");
            }
            checkBinaryPuzzle();
        }
    }
    else if (strcmp(input, "push button 1") == 0){
        if (panelDiscovered == true){
            if (light1On == false){
                light1On = true;
                printf("Light 1 flickers on.\n");
            }
            else{
                light1On = false;
                printf("Light 1 flickers off.\n");
            }
            checkBinaryPuzzle();
        }
    }

}

void checkBinaryPuzzle(void){
    if(light16On == true && light8On == false && light4On == false && light2On == true && light1On == true){
        printf("The lights flash in quick succession.\n");
        printf("Then they all settle to a bright forest green.\n");
        printf("Somewhere to your left you hear a soft \"Click\".\n");
        topDrawerLocked = false;
    }
}

void checkToyPuzzle(char input[]){
    if (strcmp(input, "arrange rocket robot horse bear duck") == 0 && toyPuzzleDiscovered == true){
        toyPuzzleSolved = true;
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
    }
    else if (strncmp(input, "arrange ", 8) == 0 && toyPuzzleDiscovered == true){
        printf("You place the last toy into position.\n");
        printf("The light above you flickers violently for a moment...\n");
        printf("Then everything becomes still.\n\n");
}
}