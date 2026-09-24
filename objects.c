#include <stdio.h>
#include <string.h>
#include "objects.h"

void examineDoor(char input[]){
    if (strcmp(input, "examine door") == 0){
        printf("You bang on the door and it is solid. It will not yield to you at this time.\n\n");
}
}

void examineHatch(char input[]){
    if (strcmp(input, "examine hatch") == 0){
        printf("You try to slide the hatch open, but it is sealed tight.\n\n");
    }
}

void examineLock(char input[]){
    if (strcmp(input, "examine lock") == 0){
        printf("You see a large metal padlock. Three dials set to the numbers 0, 0, 0 stare back at you.\n");
        printf("The dials move with ease, but what numbers belong there?\n\n");
    }
}

void examineBucket(char input[]){
    if (strcmp(input, "examine bucket") == 0){
        printf("You see an old wooden bucket. Inside, it's empty except for a few drops of water from the leaking pipe.\n");
        printf("A small triangular notch has been cut into the bottom.\n");
        printf("Scratched into the wood are the words, \"HOW MANY DROPS DID YOU HEAR?\"\n\n");
    }
}

void examinePipe(char input[]){
    if (strcmp(input, "examine pipe") == 0){
        printf("You see a long rusty pipe, and from it come rhythmic drops of water.\n");
        printf("Drip... Drip... Drip... Drip... Drip... Drip...\n\n");
    }
}

void examineTable(char input[]){
    if (strcmp(input, "examine table") == 0){
        printf("You see that each drawer has a symbol on it where the knob should be.\n");
        printf("The \033[1mtop drawer\033[0m knob is a square.\n");
        printf("The \033[1mmiddle drawer\033[0m knob is a circle.\n");
        printf("The \033[1mbottom drawer\033[0m knob is a triangle.\n\n");
    }
}

void examineDrawers(char input[]){
    if (strcmp(input, "examine top drawer") == 0){
        printf("Locked\n");
    }
    else if (strcmp(input, "examine middle drawer") == 0){
        printf("Locked\n");
    }
    else if (strcmp(input, "examine bottom drawer") == 0){
        printf("You open the drawer and find an old \033[1mdiary\033[0m.\n");
    }
}

void examinePallets(char input[]){
    if (strcmp(input, "examine pallets") == 0){
        printf("You pull at the rotting wooden pallets. Several pieces crumble away in your hands.\n");
        printf("As you shift what remains, you notice something hidden against the wall behind them.\n");
        printf("A strange \033[1mpanel\033[0m with five circular lights has been concealed behind the pallets.\n\n");
    }
}

void examineShelf(char input[]){
    if (strcmp(input, "examine shelf") == 0){
        printf("You see 5 toys sitting in a row on the shelf.\n");
        printf("Each has its own square numbered label from 1-5.\n");
        printf("They sit in this order:\n");
        printf("A small rocking \033[1mhorse\033[0m, a rusty old \033[1mrocket\033[0m, a dirty rubber \033[1mduck\033[0m, ");
        printf("a patched up teddy \033[1mbear\033[0m and a \033[1mrobot\033[0m that looks well taken care of.\n\n");
    }
}

void examineHorse(char input[]){
    if (strcmp(input, "examine horse") == 0){
        printf("You see an old wooden rocking horse. Its paint is chipped and faded from age.\n\n");
    }
}

void examineRocket(char input[]){
    if (strcmp(input, "examine rocket") == 0){
        printf("You see a small toy rocket. Rust has spread across its once shiny surface.\n\n");
    }
}

void examineDuck(char input[]){
    if (strcmp(input, "examine duck") == 0){
        printf("You see a dirty yellow rubber duck. Its colour has faded and the rubber has begun to crack.\n\n");
    }
}

void examineBear(char input[]){
    if (strcmp(input, "examine bear") == 0){
        printf("You see a battered teddy bear covered in mismatched patches. One of its button eyes is missing.\n\n");
    }
}

void examineRobot(char input[]){
    if (strcmp(input, "examine robot") == 0){
        printf("You see a small toy robot. Unlike the other toys, it looks remarkably well cared for.\n\n");
    }
}
void examineSwitch(char input[]){
    if (strcmp(input, "examine switch") == 0){
        printf("You flick the switch, but nothing happens.\n\n");
    }
}
void examineLight(char input[]){
    if (strcmp(input, "examine light") == 0){
        printf("The light hangs too high above you to reach.\n\n");
    }
}

void examinePanel(char input[]){
    if (strcmp(input, "examine panel") == 0){
        printf("You see a metal panel with five lights arranged in a row.\n");
        printf("Beneath each light is a \033[1mbutton\033[0m marked with a number.\n\n");
        printf("\033[1m16    8    4    2    1\033[0m\n\n");
        printf("All five lights are currently off.\n\n");
    }
}

void examineDrain(char input[]){
    if (strcmp(input, "examine drain") == 0){
        printf("You peer into the large rusty drain.\n");
        printf("Beneath the grate, something catches your eye.\n");
        printf("A damp, faded photograph is wedged just out of reach.\n");
        printf("Through the grime, you can make out a duck and a robot racing side by side.\n\n");
    }
}

