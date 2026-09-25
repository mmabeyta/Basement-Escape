RESEARCH.md

# Research

## Git and GitHub

### Why I needed to learn this

I had not previously used Git or GitHub and needed to understand and learn how to version-control the project and publish the repository. 

### Resources

- YouTube
- ChatGPT
- Git/GitHub documentation

### What I learned

I learned the difference between Git and Github. Git is stored on my computer which tracks version changes and GitHub is the online repository that I push my git to in order to share my project with others.

I learned several terminal commands:

git --version in terminal gives you the version installed on your system.
git init initializes an empty Git repository in my project folder.
git status tells me the current state of my project compared with what I've recorded.
git add stages files or changes for the next snapshot.
git add . stages the changes in the current project.
git commit creates a new snapshot/version of my project from the changes I staged. 
git commit -m to add a message to the commit.
git rm --cached <file>... will unstage a file.
git commit --amend --reset-author updates the author information on my most recent commit using my configured Git identity.
git config --global --edit allows me to edit my global Git configuration.
git log shows me the history of commits in this repository.
git remote add origin <repository URL> connects my local Git repository to a remote repository and gives that remote the name origin.
git remote -v This asks Git to show the remotes it knows about and their addresses.
git branch -M main renames the current branch to main. I didn’t need to use it because my branch was already named main.
git push -u origin main pushed my local main branch and its commits to the GitHub repository. The -u set origin/main as the upstream branch, so future pushes can use git push.
git push can be used regularly after the git push -u origin main command.
.gitignore tells Git which untracked files and directories it should ignore. "name/" can be used for a directory and "name" for a file.
git rm -r --cached name/ removes a whole directory recursively
echo ".DS_Store" >> .gitignore echo ".DS_Store" → produce the text .DS_Store >> → append it to a file without overwriting what’s already there .gitignore → the file we’re appending it to

I also learned that Git records an author name and email with each commit, and if these aren’t configured Git may infer them from the computer.



### How I applied it

After doing a little research I was able to initilize Git for my project.

---

## ASCII Art

### Why I needed to learn this

I needed to convert visual designs into ASCII art that would work within the terminal.

### Resources

- ASCII Art Archive image-to-ASCII converter
- ChatGPT image generation for initial visual concepts

### What I learned

I learned that visual designs need to be simplified when represented as ASCII art because the terminal is limited to text characters and spacing. I also learned that alignment can depend on the terminal’s monospaced character layout.

### How I applied it

I used ASCII art for the star puzzle.

## Syntax I learned in C

I learned about #include <ctype.h>, which provides character-handling functions such as tolower().

I learned about tolower to convert my strings to lower case for insensitive player input.

I learned about fgets() to get strings from the player input. fgets() normally stores the newline from pressing ENTER, so I check for '\n' at the end of the input and replace it with the null terminator '\0'.

I learned about #include <stdlib.h>, which provides the exit() function. exit(0) terminates the program and indicates successful execution.

I learned about strcmp() which compares two strings. It returns 0 if the strings are equal, a negative value if str1 is less than str2, and a positive value if str1 is greater than str2.

I learned that strncmp() can compare only the first specified number of characters in a string. This allowed me to recognise a general command while still using strcmp() to check for a specific correct input. For example, any input beginning with arrange can be recognised as an attempt, while only the exact correct arrangement is accepted as the solution. Another use I did with it was: I used strncmp() to recognise commands beginning with examine , push , look , read , open  and arrange  while the room is dark.

I learned that scanf("%s") stops reading at whitespace, while fgets() can read a full line containing spaces. This makes fgets() more suitable for commands such as “look north”.

I learned about #include <unistd.h>, which provides the sleep() function on my system. I used this to add short pauses between narrative events.

Once a C program is split across multiple source files, all required .c files must be compiled and linked together using: clang [SOURCE FILE] [SOURCE FILE] -o [EXECUTABLE NAME]

I learned that boolean variables can be used to store the state of different parts of the game. I used variables such as binaryPuzzleSolved, toyPuzzleSolved, starPuzzleSolved and roomDark to control which interactions are available depending on what the player has already done.

I also learned how an if, else if, else chain can represent mutually exclusive game states. This prevents multiple descriptions or behaviours from running for the same input. For example, an object can behave differently depending on whether its puzzle is undiscovered, discovered but unsolved, or solved.


### How I applied it

I created a reusable player input function that reads full commands, removes the newline and converts the input to lowercase. I then used strcmp() to implement help and quit commands inside the main game loop.

“How do I detect all possible wrong arrangements without writing every combination?” My research led me to use strncmp(), which provided the necessary tool to recognise any input beginning with "arrange " while still using strcmp() to check for the exact correct solution.

I used game-state variables to prevent completed puzzles from being solved repeatedly. Once a puzzle is solved, its solved state changes the way the player can interact with it. For example, the toy shelf displays the final arrangement instead of asking for another arrangement, the binary panel no longer allows its buttons to change, and the completed star pattern can be examined without allowing the star puzzle to be solved again.

## Resources

https://www.geeksforgeeks.org/c/fgets-function-in-c/
https://www.geeksforgeeks.org/c/tolower-function-in-c/
https://www.geeksforgeeks.org/cpp/ctype-hcctype-library-in-c-c-with-examples/
https://www.geeksforgeeks.org/c/strcmp-in-c/
https://www.geeksforgeeks.org/cpp/difference-strncmp-strcmp-c-cpp/


