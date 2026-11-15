Milestone 3 – Development and Code Quality

Project: Five Faces of Evil

Overview

During Milestone 3, I focused on improving the existing foundation of Five Faces of Evil. Rather than introducing changes that could disrupt the current gameplay systems, I concentrated on code organization, readability, and maintainability.

Existing Features

The project currently includes:

* A main menu and investigation menu.
* Five individual suspects with unique backgrounds, occupations, and alibis.
* An interrogation system with three dialogue options for each suspect.
* Six pieces of evidence with individual descriptions.
* Input validation to handle invalid menu selections.

Code Quality Improvements

1. Reusable Menu Input Validation

I created a reusable GetMenuChoice() function in the Game class. Previously, menu input validation was repeated throughout several functions.

Centralizing this logic reduces duplication and makes the menu system easier to maintain.

2. Constructor Refactoring

I updated the constructors in Evidence.cpp and Suspect.cpp to use member initializer lists.

This improves readability and initializes class members directly rather than assigning values inside the constructor body.

System Design and Organization

The project continues to use separate classes to organize its responsibilities:

* Game: Handles menus, suspect interactions, interrogations, and evidence examination.
* Suspect: Stores suspect information, including names, occupations, and alibis.
* Evidence: Stores evidence names and descriptions.

Maintaining these separate responsibilities helps keep the project organized and makes future development easier.

Testing and Verification

After implementing these changes, I rebuilt the solution and tested the existing gameplay systems.

Testing confirmed that:

* The project builds successfully.
* The main and investigation menus function correctly.
* All five suspects display correctly.
* Interrogation dialogue options work.
* All six evidence entries display correctly.
* Invalid menu input is handled without crashing the program.

Next Steps

My next steps are to continue improving the investigation system, review opportunities for additional refactoring, and complete the remaining documentation and project management requirements for Milestone 3.
