#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "objects.h"
#include "game_logic.h"



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
        printf("You see a large metal padlock. Three dials set to 0, 0, 0 stare back at you.\n");
        printf("The dials move with ease, but what numbers belong there?\n\n");
        printf("Scratched into the metal beneath the dials are three crude symbols:\n\n");
        printf("△   ○   □\n\n");
    }
}

void examineBucket(char input[]){
    if (strcmp(input, "examine bucket") == 0){
        printf("You see an old wooden bucket. Inside, it's empty except for a few drops of water from the leaking pipe.\n");
        printf("A small triangular notch has been cut into the bottom.\n");
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
        printf("You see an old wooden table with three drawers.\n");
        printf("A \033[1mtop drawer\033[0m, \033[1mmiddle drawer\033[0m and \033[1mbottom drawer\033[0m.\n\n");
    }
}

void examineDrawers(char input[]){

    if (strcmp(input, "open top drawer") == 0){

        if (topDrawerLocked == true){
            printf("Locked\n");
        }
        else{
            printf("The top drawer slides open with a rusty scrape.\n");
            printf("Inside is a small, faded photograph.\n\n");
            printf("The photograph shows two familiar toys: the duck and the robot.\n");
            printf("Someone has drawn a crude + sign between them in black ink.\n\n");
        }
    }

    else if (strcmp(input, "open middle drawer") == 0){

        if (middleDrawerLocked == true){
            printf("Locked\n");
        }
        else{
            printf("The middle drawer slides open.\n");
            printf("Inside, scratched into the wood, you see:\n\n");
            printf("\033[1m○ = 7\033[0m\n\n");
        }
    }

    else if (strcmp(input, "open bottom drawer") == 0){
        printf("You open the drawer and find an old, battered diary inside.\n");
        printf("You take the diary with you. You can now \033[1mread diary\033[0m at any time.\n\n");
        diaryFound = true;
    }
}

void readDiary(char input[]){
    if (diaryFound == true){

        if (strcmp(input, "read diary") == 0){
            printf("You open Tommy's battered diary. Most of the pages are torn out or too faded to read.\n");
            printf("Only five entries remain legible:\n\n");

            printf("\033[1mread day 4\033[0m\n");
            printf("\033[1mread day 8\033[0m\n");
            printf("\033[1mread day 12\033[0m\n");
            printf("\033[1mread day 16\033[0m\n");
            printf("\033[1mread day 19\033[0m\n\n");
        }

        else if (strcmp(input, "read day 4") == 0){
            printf("\nDAY 4\n\n");
            printf("They showed me the lights again today.\n");
            printf("I still don't understand what they mean.\n");
            printf("Every time I think I've figured them out, I'm wrong.\n");
            printf("They say I'll understand eventually.\n\n");
        }

        else if (strcmp(input, "read day 8") == 0){
            printf("\nDAY 8\n\n");
            printf("I couldn't sleep last night because of that stupid pipe.\n");
            printf("Drip. Drip. Drip. Drip. Drip. Drip.\n");
            printf("Then quiet for a little while.\n");
            printf("Then it started all over again.\n");
            printf("They say I should stop letting little things bother me.\n\n");
        }

        else if (strcmp(input, "read day 12") == 0){
            printf("\nDAY 12\n\n");
            printf("They moved my toys around again.\n");
            printf("I don't know why they keep doing that.\n");
            printf("But I know where they belong.\n\n");

            printf("THE TWILIGHT TOY DERBY\n\n");

            printf("When darkness falls and lights burn low,\n");
            printf("five little racers start to go.\n");
            printf("From shelf to floor they race away,\n");
            printf("but only one will win today.\n\n");

            printf("Those born to fly stood far apart,\n");
            printf("one at the finish, one at the start.\n");
            printf("Those forged of metal raced side by side,\n");
            printf("with barely a space between each stride.\n\n");

            printf("The hooves crossed sooner than the wings,\n");
            printf("but neither knew what victory brings.\n");
            printf("The pair who ran on legs of two,\n");
            printf("left one between them when the race was through.\n\n");
            toyPuzzleDiscovered = true;
        }

        else if (strcmp(input, "read day 16") == 0){
            printf("\nDAY 16\n\n");
            printf("The light went out again tonight.\n");
            printf("I could see all the little stars in the dark.\n");
            printf("I like the ones that look like real stars best.\n");
            printf("I joined those ones together with my finger.\n");
            printf("The shape made me laugh.\n\n");
        }

        else if (strcmp(input, "read day 19") == 0){
        printf("\nDAY 19\n\n");
        printf("Today was the day.\n");
        printf("I finally figured out the lights.\n");
        printf("When I heard the click, I almost cried.\n");
        printf("They said I can go home now.\n\n");
}
        }
    }

void examinePallets(char input[]){
    if (strcmp(input, "examine pallets") == 0){
        if(panelDiscovered == false){
        printf("You pull at the rotting wooden pallets. Several pieces crumble away in your hands.\n");
        printf("As you shift what remains, you notice something hidden against the wall behind them.\n");
        printf("A strange \033[1mpanel\033[0m has been concealed behind the pallets.\n\n");
        panelDiscovered = true;
        }
        else {
        printf("The rotting pallets have been pushed aside. The panel behind them is exposed.\n");
         }
        
    }
 
}

void examineShelf(char input[]){
    if (strcmp(input, "examine shelf") == 0){

         if (toyPuzzleDiscovered == true){
            printf("You see 5 small toys sitting in a row on the shelf.\n");
            printf("A \033[1mhorse\033[0m, a \033[1mrocket\033[0m, a rubber \033[1mduck\033[0m, ");
            printf("a teddy \033[1mbear\033[0m and a \033[1mrobot\033[0m.\n");
            printf("Each has its own square numbered label from 1-5.\n\n");
            printf("Perhaps Tommy knew where these toys belonged.\n");
            printf("To rearrange them, type \033[1marrange\033[0m followed by all five toy names in order.\n\n");
            
        }
        else{
            printf("You see 5 small toys sitting in a row on the shelf.\n");
            printf("Each has its own square numbered label from 1-5.\n");
            printf("They sit in this order:\n");
            printf("A \033[1mhorse\033[0m, a \033[1mrocket\033[0m, a rubber \033[1mduck\033[0m, ");
            printf("a teddy \033[1mbear\033[0m and a \033[1mrobot\033[0m.\n\n");
        }
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
        if(panelDiscovered == true){
            printf("You see a metal panel with five lights arranged in a row.\n");
            printf("Beneath each light is a \033[1mbutton\033[0m marked with a number.\n\n");

            printf("LIGHTS:\t\t");

            if(light16On == true){
                printf("On\t");
            }
            else{
                printf("Off\t");
            }

            if(light8On == true){
                printf("On\t");
            }
            else{
                printf("Off\t");
            }

            if(light4On == true){
                printf("On\t");
            }
            else{
                printf("Off\t");
            }

            if(light2On == true){
                printf("On\t");
            }
            else{
                printf("Off\t");
            }

            if(light1On == true){
                printf("On\t");
            }
            else{
                printf("Off\t");
            }

            printf("\n");
            printf("BUTTONS:\t");
            printf("\033[1m16\t 8\t 4\t 2\t 1\033[0m\n\n");
        }
    }
}

void examineDrain(char input[]){
    if (strcmp(input, "examine drain") == 0){
        printf("You peer into the large rusty drain.\n");
        printf("Beneath the grate, something catches your eye.\n");
        printf("A damp, faded photograph is wedged just out of reach.\n");
        printf("Through the grime, you can make out a ghostly pale young boy, sitting on this very same floor,\n");
        printf("staring directly at the camera with hollow, expressionless eyes.\n\n");
        printf("Around him are five familiar toys: the horse, rocket, duck, bear and robot.\n\n");
    }
}

void examineStars(char input[]){
    if (strcmp(input, "examine stars") == 0 && starsDiscovered == true){
        printf("ASCII sttring.\n\n");
    }
}



