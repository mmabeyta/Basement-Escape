#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "directions.h"
#include "game_logic.h"

void lookNorth(char input[]){ //this prints the description of the north direction
      if (strcmp(input, "look north") == 0){
        printf("You see a large metal \033[1mdoor\033[0m in the center of the wall.\n");
        printf("A small metal viewing \033[1mhatch\033[0m sits at eye level. Its cover is closed.\n");
        printf("A large pad \033[1mlock\033[0m with 3 dials, tightly secures the \033[1mdoor\033[0m.\n");
        printf("On the floor to the right near a dark corner sits a \033[1mbucket\033[0m. \n");
        printf("Just above is a long \033[1mpipe\033[0m leading up into the ceiling. \n\n");
    }
}

void lookEast(char input[]){ //this prints the description of the East direction
    if (strcmp(input, "look east") == 0){
        printf("You see a withered wooden side \033[1mtable\033[0m with 4 legs and 3 drawers.\n");
        printf("Next to it is a heap of rotting old \033[1mpallets\033[0m, some intact and some torn apart.\n\n");
    }
}

void lookSouth(char input[]){ //this prints the description of the south direction
    if (strcmp(input, "look south") == 0){
        printf("You see a single toy \033[1mshelf\033[0m.\n");
        printf("Above it, a once colorful sign that says \"Twilight Toy Derby\".\n\n");
     
    }
}

void lookWest(char input[]){ //this prints the description of the West direction
    if (strcmp(input, "look west") == 0){
        printf("You are staring at an empty wall, at the far left, sits an odd light \033[1mswitch\033[0m ");
        printf("with a black circle backplate.\n");
        printf("It looks like it's been rarely used.\n\n");
    }
}

void lookUp(char input[]){ //this prints the description of the Up direction
    if (strcmp(input, "look up") == 0){
        printf("You see the low-hanging \033[1mlight\033[0m bulb dangling from a thin cord.\n");
        printf("Near the north wall you see the \033[1mpipe\033[0m leading out of the ceiling.\n\n");
    }
}

void lookDown(char input[]){ //this prints the description of the Down direction
    if (strcmp(input, "look down") == 0){
        printf("You see dirt, grime and damp on a worn dark brick floor.\n");
        printf("In the center of the floor sits an old rusty \033[1mdrain\033[0m directly under the ceiling \033[1mlight\033[0m bulb.\n");
        printf("The \033[1mbucket\033[0m sits under the \033[1mpipe\033[0m on the north wall.\n\n");
    }
}