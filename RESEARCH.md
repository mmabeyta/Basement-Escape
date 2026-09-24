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
.gitignore will ignore files so they won't be staged. "name/" → directory. "name" → file.
git rm -r --cached name/ removes a whole directory recursively


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

[Add as we work.]

### How I applied it

[Add as we work.]

## Syntax I learned in C

learned about the #include <ctype.h> for case insenstive typing

learned about tolower to convert my strings to lower case for insensitive player input.

leanred about fgets() to get strings from the player input. fgets() normally stores the newline from pressing ENTER, so I check for '\n' at the end of the input and replace it with the null terminator '\0'.

learned about #include <stdlib.h> that has the function exit(0);

learned about strcmp() which compares two strings. It returns 0 if the strings are equal, a negative value if str1 is less than str2, and a positive value if str1 is greater than str2.

I learned that scanf("%s") stops reading at whitespace, while fgets() can read a full line containing spaces. This makes fgets() more suitable for commands such as “look north”.


### How I applied it

I created a reusable player input function that reads full commands, removes the newline and converts the input to lowercase. I then used strcmp() to implement help and quit commands inside the main game loop.

## Resources

https://www.geeksforgeeks.org/c/fgets-function-in-c/
https://www.geeksforgeeks.org/c/tolower-function-in-c/
https://www.geeksforgeeks.org/cpp/ctype-hcctype-library-in-c-c-with-examples/
https://www.geeksforgeeks.org/c/strcmp-in-c/


