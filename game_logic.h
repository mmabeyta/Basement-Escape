#include <stdbool.h>

extern bool panelDiscovered;
extern bool topDrawerLocked;
extern bool middleDrawerLocked;

extern bool light16On;
extern bool light8On;
extern bool light4On;
extern bool light2On;
extern bool light1On;
extern bool diaryFound;
extern bool toyPuzzleSolved;
extern bool toyPuzzleDiscovered; 
extern bool starsDiscovered;
void pushButton(char input[]);
void checkBinaryPuzzle(void);
void checkToyPuzzle(char input[]);
void pauseGame(int seconds);
