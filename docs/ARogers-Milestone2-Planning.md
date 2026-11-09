> Use this worksheet to plan the next phase of your project **before you begin coding**
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**Project Name:** 
→   Five Faces of Evil
  
**What does your program currently do? (1–3 sentences)**   
→   Five Faces of Evil is a text-based murder mystery game where the player takes on the role of an investigator attempting to uncover the truth behind the murder of an agent. The player can investigate five unique suspects, question them about their alibis and the murder, and examine six pieces of evidence to piece together what happened.

---
## 🔍 Current Progress Check  
  
**What is working right now?**   
→   The main menu and investigation menu are fully functional, allowing players to navigate between suspects, evidence, and the main menu. All five suspects have individual backgrounds, occupations, alibis, and unique dialogue for three different interrogation options. The evidence system currently contains six individual pieces of evidence, each with its own detailed description. Input validation is also implemented to prevent invalid menu selections and handle non-numeric input. Console formatting and the title screen have also been added.
  
**What is NOT working or incomplete?**   
→   The evidence system currently displays a message indicating that evidence has been added to the case notes, but there is not yet a system that tracks collected evidence. Investigation progress is not currently saved or tracked between menus. There is also no final accusation system or ending that allows the player to determine who committed the murder.
  
**What feels confusing or messy in your code?**   
→   Some of the interrogation dialogue is handled through multiple switch statements, which could become difficult to maintain as more dialogue and interactions are added. The suspect and evidence information is also currently initialized inside their respective investigation functions. As the project grows, I want to improve how information is stored and accessed so that the game can keep track of the player’s progress without unnecessarily repeating code.

---
## 🚀 Feature Planning  
  
List the features you plan to add or improve this week.  
  
### Feature 1  
**Name:**   
→   Evidence Collection and Tracking System
  
**What does this feature do?**   
→   I want to expand the existing evidence system so that examining a piece of evidence registers it as collected. The program should keep track of which pieces of evidence the player has already examined and provide a way to review previously discovered evidence without having to rediscover it.
  
**Why is this feature important?**   
→   Evidence is one of the most important parts of a murder mystery. Currently, the game provides descriptions of each discovery, but there is no actual tracking behind the scenes. Implementing this system will make investigations feel more meaningful and establish the foundation for connecting evidence to suspects and future interrogation options.
  
---
### Feature 2  
**Name:**   
→   Investigation Progress Tracking
  
**What does this feature do?**   
→   I plan to introduce a way to track how many suspects have been investigated and how many pieces of evidence have been examined. This information could eventually be displayed through an investigation status or case summary menu so players can see how much of the investigation they have completed.
  
**Why is this feature important?**   
→   As the game expands, I want players to have a clear understanding of their progress. Tracking completed investigations will also provide the foundation for future features, including unlocking additional dialogue and determining when the player has gathered enough information to make an accusation.
  
---
  
### Feature 3 (optional)  
**Name:**   
→   Final Accusation System
  
**What does this feature do?**   
→   I want to begin developing a system that allows the player to select one of the five suspects as the person responsible for the murder. The player’s selection will be evaluated by the game, creating the foundation for different outcomes depending on whether the correct suspect is identified.
  
**Why is this feature important?**   
→   The entire purpose of the investigation is to uncover the identity of the murderer. Without some form of conclusion, the player has no opportunity to act on the information they have gathered. This feature will help connect the investigation, interrogation, and evidence systems into a more complete gameplay experience.
  
---
## 🧩 System Design Updates  
  
**Will you need to create any new classes? If so, which ones?**   
→   I may introduce an InvestigationProgress or CaseProgress class to manage collected evidence and completed investigations. This would help separate progress tracking from the main Game class and make the overall program easier to expand. I will evaluate whether a separate class is necessary or whether the functionality can be incorporated cleanly into the existing structure.
  
**Will you modify any existing classes? How?**   
→   I plan to continue expanding the Game class to manage investigation progress, evidence collection, and the eventual accusation system. The Evidence class may need additional functionality to support tracking whether evidence has been examined. The Suspect class may also be expanded in the future to support additional dialogue or investigation-related information. I will also review existing functions to identify opportunities to simplify repeated logic.
  
**What data structures will you use (vectors, 2D vectors, etc.)?**   
→   I will continue using arrays for the existing suspect and evidence collections while exploring the use of vectors or other appropriate data structures for tracking investigation progress. I want to choose structures that make it easier to add information and maintain the game as the project becomes more complex, while staying within the programming concepts permitted for the assignment.
  
---
## 🔄 Program Flow  
  
**Describe how a user interacts with your program:**  
  
1. Program starts →   The game displays the Five Faces of Evil title screen and introduces the murder mystery before presenting the main menu.
2. User chooses →   The player selects Begin Investigation and chooses whether to review suspects or examine evidence.
3. Program responds →   The game displays suspect information, interrogation options, or detailed evidence descriptions based on the player’s selection.
4. Loop/next step →   The player can continue investigating, revisit previously discovered information, examine additional evidence, and eventually progress toward making a final accusation. The player can also return to previous menus or exit the game.
  
---
## 🎯 Usability Improvements  
  
How will you make your program easier to use this week?  
  
- Clearer prompts:   
→   I want to make menu instructions and investigation prompts more descriptive so players understand what each option does. I also want to provide clearer feedback when evidence is discovered and when previously examined information is revisited.
  
- Better error handling:   
→   I will continue improving input validation to make sure unexpected input does not interrupt the game or cause navigation problems. I also want to review the existing input handling to make sure invalid selections consistently return players to the appropriate menu.
  
- Improved menu/navigation:   
→   I want to make navigation between the main menu, investigation menu, suspect selection, interrogation, and evidence room feel more consistent. As additional features are introduced, I want to avoid making players navigate through unnecessary menus to find information they have already discovered.
  
---
## ⚠️ Potential Challenges  
  
**What do you think will be the hardest part this week?**   
→   I think the most challenging part will be implementing investigation tracking while maintaining the existing functionality of the game. As more systems begin interacting with one another, I anticipate having to make changes to how information is stored and accessed. I also expect the interrogation and evidence systems to become more complicated once player discoveries begin influencing other interactions.
  
**What is your plan if you get stuck?**   
→   My plan is to break problems down into smaller pieces rather than attempting to fix everything at once. I will use the Visual Studio debugger, review error messages, and test individual functions before integrating them into the larger program. I also plan to review course materials, ask questions when necessary, and use Git commits to maintain working versions of the project as I make changes.
  
---
  
## 📈 Level Up Goal  
  
**What skill are you focusing on improving this week?**   
→   I want to improve my understanding of object-oriented programming, particularly how classes interact with one another and how to manage information across different functions. I also want to become more comfortable identifying opportunities to simplify code without sacrificing functionality.
  
**What will you do to improve it?**   
(e.g., tutorial, practice, debugging, office hours)   
→   I plan to spend additional time reviewing my existing classes and understanding how information moves throughout the program. I will practice implementing smaller features independently, test frequently, and intentionally examine situations where my code might fail. I also want to improve my debugging habits by identifying the source of problems instead of immediately trying to work around errors.
  
---
## 🗓️ Task Breakdown (GitHub Issues Planning)  
  
List the tasks you plan to create as GitHub Issues:  
  
- [ ]   Implement an evidence collection system that tracks previously examined evidence.
- [ ]   Develop investigation progress tracking for suspects and collected evidence.
- [ ]   Begin implementing a final accusation system with appropriate player feedback.
- [ ]   Review existing classes, improve menu navigation, and test input validation across the program.
  
---
  
## 🔥 Final Check  
  
Before you start coding, ask yourself:  
  
- [x] Do I know what I’m building this week?   
- [x] Do I know where to start?   
- [x] Did I break my work into small tasks?   
  
If yes → start coding 🚀   
If no → refine your plan first   
  
---
## 😈 Final Thought  
  
> Plan it now… or debug it later.