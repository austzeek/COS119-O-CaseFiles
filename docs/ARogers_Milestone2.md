Project Overview

Five Faces of Evil is a text-based murder mystery game where the player takes on the role of an investigator trying to solve the murder of an agent. There are five suspects, each with their own background, alibi, and personality. The player’s job is to investigate each suspect, ask questions, examine evidence, and eventually piece together what happened.

Features Added

For this milestone, I focused on expanding the investigation system and making the game feel more interactive. I wanted to give players more opportunities to explore the case instead of simply reading through information.

Some of the features I’ve added include:

* Suspect Investigation: Players can review five different suspects and learn more about their backgrounds, occupations, and alibis.
* Interrogation System: Each suspect has their own dialogue. Players can ask about their alibi, question them about the murdered agent, or challenge their statements.
* Evidence Room: Players can investigate six different pieces of evidence, each with its own description and details.
* Evidence Tracking: The game keeps track of which pieces of evidence the player has examined.
* Case Notes: Players can review the evidence they’ve discovered and see how many clues they’ve collected.
* Duplicate Evidence Prevention: If a player examines the same piece of evidence more than once, the game recognizes it instead of counting it as a new discovery.

Code Structure and Improvements

I’ve continued working on keeping the code organized by separating different parts of the game into their own classes and files. This makes it easier to manage the project and add new features without putting everything into one place.

The current project structure includes:

* Game.h and Game.cpp – Manage the main game, menus, investigation, suspect interactions, and evidence tracking.
* Suspect.h and Suspect.cpp – Store and manage information about each suspect.
* Evidence.h and Evidence.cpp – Store and manage the evidence names and descriptions.
* main.cpp – Initializes and starts the game.

One of the bigger changes during this milestone was adding an evidence-tracking system to the Game class. This allows the game to remember which clues have been examined while the player is playing.

Usability Improvements

I also spent time improving how players interact with the game. I wanted the menus to be straightforward and make it easier to move between different parts of the investigation.

Some of these improvements include:

* Adding input validation to handle incorrect menu selections.
* Improving navigation between the main menu, investigation menu, suspect selection, and evidence room.
* Adding a Case Notes option where players can review discovered evidence.
* Displaying an indicator next to evidence that has already been examined.
* Providing feedback when players discover new evidence or revisit something they’ve already examined.

These changes make it easier for players to keep track of their progress and understand what they’ve already investigated.

Testing and Results

After implementing the evidence-tracking system, I tested it to make sure everything worked as expected.

I went through several scenarios, including starting with empty Case Notes, examining individual pieces of evidence, revisiting previously examined clues, and collecting multiple pieces of evidence.

I also verified that the game correctly tracks all six pieces of evidence and doesn’t count the same clue more than once.

All of the evidence-tracking tests were successful.

Next Steps

There is still plenty I’d like to add to Five Faces of Evil as development continues. My next focus is on expanding the investigation experience, improving how suspects and evidence connect to one another, and adding more gameplay elements.

I want the player’s discoveries to feel meaningful and give them a reason to pay attention to the details as they work toward solving the mystery.
