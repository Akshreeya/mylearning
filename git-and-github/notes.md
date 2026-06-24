# git notes

# GIT

## Branching

```powershell
git branch #lists all branches
git branch <branchname> #creates new branch
git switch <branchname> #switched to the branch
git switch -c <branchname> # creates branch and switched
git branch -d <branchname> # --delete 
git branch -D <branchname> # --delete --force shortcut
git branch -m <branchname> # renaming a branch
git branch -M main # renaming master to main
git branch -v #more info on branch
git switch - #takes to the last branch

```

note

- when deletion, you cant be in the same branch that you are goinig to delete
- when renaming, renaming can only be done when you are present at the branch that you have to rename

## Merging

Step to merge

```powershell
#step 1: git switch main(the branch u want to merge)
git merge <branchname> #step 2 
```

## Comparing changes

## Stashing

![image.png](image.png)

```powershell
git stash #stashes changes
git pop #undos stashed
git stash apply #applies the changes without having to pop the stash
git stash list #view all the stash list 
#when poping it follows LIFO
git stash apply stash@{2} #to apply changes that is in the middle of the stash
git stash drop stash@{2} # removes it from the list
git stash clear #clears entire stash
```

## Undoing changes and traveling commits

```powershell
git checkout <commit-hash> #to view previous commit
git checkout HEAD~1 #goes to the prv commit
git checkout HEAD <filename> # to revert back to last head
git checkout -- <filename> #same as before(instead of head)
git restore <filename> # to revert back to last commit(head) same as before
git restore --source HEAD~<no> <filename> #restore the contact it the mentioned commt
git restore --staged <filename> # undo staged file to unstaged
git reset <commit-hash> #resets the commits but the content will be there, only the commits will be gone
#we can take these changes to a new branch commit it, the main will be clear
git reset --hard <commit> # will undo both commits and changes
git revert <commit-hash> #creates a brand new commit which reverses/undos the changes from a commit.
#this will keep the commit, but also create a new commit that has the old commit

```
