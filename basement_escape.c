#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include "directions.h"
#include "objects.h"
#include "game_logic.h"


//function prototypes

void titleScreen(void);
void gameInstructions(void);
void waitForEnter(void);
void quitGame(char input[]);
void convertToLowercase(char input[]);
void getPlayerInput(char input[], int size);
void help(char input[]);
void gameOpen();


//main program

int main(void){
    titleScreen();
    gameInstructions();
    gameOpen();

    while(1){
        char input[100];
        getPlayerInput(input, 100);
        lookNorth(input);
        lookSouth(input);
        lookEast(input);
        lookWest(input);
        lookUp(input);
        lookDown(input);
        examineDoor(input);
        examineHatch(input);
        examineLock(input);
        examineBucket(input);
        examinePipe(input);
        examineTable(input);
        examineDrawers(input);
        examinePallets(input);
        examineShelf(input);
        examineHorse(input);
        examineRocket(input);
        examineDuck(input);
        examineBear(input);
        examineRobot(input);
        examineSwitch(input);
        examineLight(input);
        examineDrain(input);
        examinePanel(input);
        readDiary(input);
        pushButton(input);
        checkToyPuzzle(input);
        examineStars(input);
        help(input);
        quitGame(input);

    }
    
    return 0;
}

//functions

void titleScreen(void){ //prints the title screen
    printf("\n\n\n");
    printf("========================\n");
    printf("     Basement Escape    \n");
    printf("    By: Monica Abeyta   \n");
    printf("========================\n\n");
    printf("Press ENTER to begin...\n\n\n\n");
    waitForEnter();

}

void waitForEnter(void){ //waits for enter to be pressed
    getchar(); 
}

void gameInstructions(void){ //print the game instructions
    printf("       HOW TO PLAY\n\nExplore the basement by typing commands. \nDo not use punctuation and only type one space in between each word.\n\nLook around using:\n\nlook north\nlook east\nlook south\nlook west\nlook up\nlook down\n\nOther useful commands:\n\nexamine [object]\nopen [object]\nread [object]\npush [object]\n\nhelp: to show this message again\nquit: to quit the game\n\n");
    printf("Press ENTER to continue...\n\n\n\n");
    waitForEnter();
}

void gameOpen(void){
    printf("Drip...\n\n");
    pauseGame(1);
    printf("Drip...\n\n");
    pauseGame(1);
    printf("Drip...\n\n");
    pauseGame(1);
    printf("The sound cuts through the darkness...\n\n");
    pauseGame(3);
    printf("Drip...\n\n");
    pauseGame(1);
    printf("Drip...\n\n");
    pauseGame(1);
    printf("Drip...\n\n");
    pauseGame(1);
    printf("Slowly, you become aware of it.\n\n");
    pauseGame(3);
    printf("Water...\n\n");
    pauseGame(2);
    printf("You open your eyes.\n\n");
    pauseGame(3);
    printf("Nothing changes.\n\n");
    pauseGame(2);
     printf("You try to remember where you are...\n\n");
    pauseGame(4);
    printf("Nothing.\n\n");
    pauseGame(1);
    printf("Panic sets in.\n\n");
    pauseGame(1);
    printf("You call out...\n\n");
    pauseGame(1);
    printf("Still nothing.\n\n");
    pauseGame(1);
    printf("Then—\n\n");
    pauseGame(1);
    printf("CLICK!\n\n");
    pauseGame(2);
    printf("A low light flickers to life overhead.\n\n");
    pauseGame(1);
     printf("Your eyes struggle to adjust to the light.\n\n");
    pauseGame(1);
    printf("Look around if you are brave enough.\n\n");
   
}

void getPlayerInput(char input[], int size){ //take player input and remove the \n if any, then call function convertToLowercase.
    fgets(input, size, stdin);
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    convertToLowercase(input);
}

void convertToLowercase(char input[]){ //converts the player input into lower case to prevent case sensitive issues
    int i = 0;
    int inputLength = strlen(input);
    for(i=0; i<inputLength; i++){
        input[i] = tolower(input[i]);
    }
}


void help(char input[]){ //this displays the game instructions when help is typed
      if (strcmp(input, "help") == 0){
        gameInstructions();
    }
}

void quitGame(char input[]){ //quits game when "quit" is typed
    if (strcmp(input, "quit") == 0){
        exit(0);
    }
    
   }


   



