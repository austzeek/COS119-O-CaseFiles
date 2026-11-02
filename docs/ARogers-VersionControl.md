# COS119-O 01 – Computer Science

- **Austin Rogers**
- **November 1, 2026**

This paper addresses some of the topics covered in this week's research and activities. It focuses on understanding Terminal commands, version control, Git, and connecting a local project to GitHub. These skills will be useful as I continue developing and maintaining my C++ projects.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

### 1. Using Terminal, there are essential commands to know.

The following commands are commonly used in Windows PowerShell:

- `Clear-Host`: Clears the Terminal screen.
- `Get-Location` (pwd): Prints the current working directory.
- `Get-ChildItem` (ls): Lists files and folders.
- `Get-ChildItem -Force`: Lists all files and folders, including hidden files.
- `Get-ChildItem -Force | Format-Table Mode, Name, @{Label="Size";Expression={if ($_.PSIsContainer) {"<DIR>"} else {"{0:N2} KB" -f ($_.Length / 1KB)}}} -AutoSize`: Lists files and folders with sizes displayed in a readable format.
- `Set-Location foldername` (cd): Changes the current directory to the specified folder.
- `Set-Location \`: Changes the current directory to the root of the current drive.
- `Set-Location ~`: Changes the current directory to the user's home directory.
- `Set-Location ..`: Moves up one folder level.
- `Set-Location ..\..`: Moves up two folder levels.
- `Set-Location "$HOME\Desktop"`: Changes the current directory to the user's Desktop.

### 2. Using Terminal...

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into Terminal and press return. Test this out and describe your results below.

When I type `cd` followed by a space and drag a folder into PowerShell, Windows automatically inserts the folder's file path into the command. After pressing Enter, PowerShell changes the current working directory to that location.

I found this helpful because it saves time when navigating through folders, especially when working with larger projects that contain multiple directories. It also helps avoid mistakes when manually entering longer file paths.

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git.

### 1. There are three types of version control.

**Local Version Control**

Local version control stores different versions of files directly on an individual's computer. This allows someone to track changes and recover earlier versions, but it does not provide an efficient way for multiple developers to collaborate.

**Centralized Version Control**

Centralized version control uses a central server to store project files and revision history. Developers connect to that server to access files and submit their changes. This makes collaboration easier, but the central server becomes a single point of failure.

**Distributed Version Control**

Distributed version control provides each developer with a complete local copy of the repository, including its revision history. Developers can work independently, make changes, and create commits before sharing their work with the remote repository. Git uses this type of version control.

### 2. Using Terminal, there are also essential Git commands to know.

The following Git commands are useful when managing a project through Terminal:

- `git clone <repository-URL>`: Creates a local copy of an existing repository.
- `git config --global user.name "Your Name"`: Sets the global username used for Git commits.
- `git config --global user.email "your-email@example.com"`: Sets the global email address associated with Git commits. This should match the email associated with my GitHub account.
- `git status`: Shows the current state of the working directory and staging area.
- `git add .`: Adds modified and new files in the current directory to the staging area for the next commit.
- `git commit -m "Commit message"`: Saves staged changes with a descriptive commit message.
- `git log`: Displays the commit history for the repository.
- `git help`: Displays Git's help information and available commands.

### 3. Connecting to GitHub using Terminal.

To connect Terminal to GitHub using HTTPS, I first navigate to the repository I want to work with on GitHub.

The steps I follow are:

1. Open the repository on GitHub.
2. Select the green **Code** button.
3. Make sure HTTPS is selected.
4. Copy the repository URL.
5. Open Terminal and navigate to the directory where I want to store the project.
6. Enter `git clone` followed by the copied HTTPS URL.
7. Press Enter to download the repository to my computer.
8. Navigate into the newly created repository folder using `cd repository-name`.

Once the repository is cloned, I can make changes to the project locally, stage those changes, and commit them using Git.

When I am ready to upload my changes, I use `git push` to send my commits to GitHub. If authentication is required, I use an approved GitHub authentication method, such as a credential manager or personal access token.

### 4. Using .gitignore and Why it's Important

**What is the purpose of this file?**

A `.gitignore` file tells Git which files and folders should not be tracked or included in commits. This helps keep unnecessary files out of a repository and maintains a clean project structure.

It is also useful for preventing temporary files, generated files, and sensitive information from accidentally being uploaded to GitHub.

**What is the .DS_Store file and why would you want to ignore it?**

The `.DS_Store` file is automatically created by macOS Finder to store folder display preferences, such as icon positions and viewing settings.

This file is not necessary for a software project to function. Adding it to `.gitignore` prevents unnecessary macOS system files from being included in the repository, especially when working with developers who use different operating systems.

**What other file or folder would you want to add to a .gitignore file and why?**

For my C++ projects, I would want to ignore build folders, compiled executable files, and temporary Visual Studio files.

For example, a `build/` directory may contain generated files created when compiling the program. These files can be recreated when needed and do not necessarily need to be shared with other developers.

I would also exclude temporary IDE files and personal configuration files. This helps keep the repository organized and prevents unnecessary files or private information from being uploaded.

## Reference Links

### Research Summary

The most helpful resources this week were the official Git and GitHub documentation. They provided explanations of how version control works and how to use Git commands when managing a repository.

I found the practical examples especially useful because they demonstrate how Terminal and Git work together. As I continue developing my C++ project, understanding these commands will help me manage changes, maintain a cleaner repository, and keep track of my progress throughout development.

### Terminal Commands

[Microsoft - PowerShell Documentation](https://learn.microsoft.com/en-us/powershell/)

[Microsoft - Get-ChildItem](https://learn.microsoft.com/en-us/powershell/module/microsoft.powershell.management/get-childitem)

### Three Types of Version Control

[Git - About Version Control](https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control)

### Git Commands

[Git - Reference Manual](https://git-scm.com/docs)

[GitHub - About Git](https://docs.github.com/en/get-started/using-git/about-git)

### Connecting to GitHub Using Terminal

[GitHub - Cloning a Repository](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository)

[GitHub - Managing Remote Repositories](https://docs.github.com/en/get-started/git-basics/managing-remote-repositories)

### Using .gitignore and Why it's Important

[GitHub - Ignoring Files](https://docs.github.com/en/get-started/git-basics/ignoring-files)

[Git - gitignore Documentation](https://git-scm.com/docs/gitignore)