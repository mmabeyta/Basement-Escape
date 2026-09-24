#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

//function prototypes

void titleScreen(void);
void gameInstructions(void);
void waitForEnter(void);
void quitGame(char input[]);
void convertToLowercase(char input[]);
void getPlayerInput(char input[], int size);
void help(char input[]);

//main program

int main(void){
    titleScreen();
    gameInstructions();

    while(1){
        char input[100];
        getPlayerInput(input, 100);
        help(input);
        quitGame(input);
        printf("%s\n", input); //temporary print line for testing

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
    printf("       HOW TO PLAY\n\nExplore the basement by typing commands.\n\nLook around using:\n\nlook north\nlook east\nlook south\nlook west\n\nOther useful commands:\n\nexamine [object]\nopen [object]\nread [object]\nuse [object]\n\nhelp: to show this message again\nquit: to quit the game\n\n");
    printf("Press ENTER to continue...\n\n\n\n");
    waitForEnter();
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


   



