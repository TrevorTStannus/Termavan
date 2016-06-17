Git Work Flow
===
## 1. Adding a new Feature
1. `git checkout master`
2. `git pull`
3. `git checkout -b feature/<name of branch>`
4. code your face off
5. once your code is done and you face is completely removed do `git add .` (the `.` adds all changed files)
6. `git commit -am "<all the cool stuff you did>"`
7. `git push -u origin feature/<name of branch>`
8. Go to the project on GitHub and click __Create Pull Request__ button
9. Look over the files (I am look at them too if there's a lot). If everything checks out hit __Merge Pull Request__ and make sure to delete the branch so the repo doesn't have like 100 branches
10. Then go back to the terminal and do `git checkout master`
11. `git pull`
12. *___Optionally___ you can delete your local branch if you want by doing `git branch -d feature/<branch name>

## 2. Working on the same file as someone else
1. `git checkout master` 
2. `git pull` 
3. `git checkout -` (brings you back to your previous branch) 
4. `git merge master`. this will make sure your branch is in sync with the changes in the repo and to see any merge conflicts you may have
5. code face off 
6. next time you look at code start at step 1.

## 3. Some useful git commands
1. `git status` - this will give you the status of your branch. i.e. if you checkout the master branch and you're not sure if you're local branch is behind the remote branch git status will tell you to `git pull` if you're behind (if it says `git push` it means you've been developing in master which is big no-no)
2. `git revert <commit hash key>` - this will revert your branch to a previous commit (you can see the hash keys when you go to github and look at the commits, the "SHA1"'s (a hash function) is on the right side.
