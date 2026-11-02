#include "Game.h"
#include <iostream>
#include <limits>
#include <windows.h>

using namespace std;

void Game::Run()
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(
        console,
        FOREGROUND_GREEN | FOREGROUND_INTENSITY
    );

    ShowTitle();
    ShowMenu();

    SetConsoleTextAttribute(
        console,
        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
    );
}

void Game::ShowTitle() const
{
    cout << "========================================\n";
    cout << "          FIVE FACES OF EVIL\n";
    cout << "========================================\n\n";
    cout << "Five suspects. One dead agent.\n";
    cout << "Secrets buried beneath a trail of horror.\n";
    cout << "Everyone has something to hide.\n\n";
}

void Game::ShowMenu() const
{
    int choice = 0;

    while (choice != 2)
    {
        cout << "\n========== MAIN MENU ==========\n";
        cout << "1. Begin Investigation\n";
        cout << "2. Exit Game\n";
        cout << "Select an option: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nInvalid input. Enter a number.\n";
            continue;
        }

        cin.ignore(10000, '\n');

        switch (choice)
        {
        case 1:
            ShowInvestigationMenu();
            break;

        case 2:
            cout << "\nThe truth will remain buried... for now.\n";
            break;

        default:
            cout << "\nInvalid selection. Try again.\n";
            break;
        }
    }
}

void Game::ShowInvestigationMenu() const
{
    int choice = 0;

    while (choice != 3)
    {
        cout << "\n========== INVESTIGATION ==========\n";
        cout << "1. Review Suspects\n";
        cout << "2. Examine Evidence\n";
        cout << "3. Return to Main Menu\n";
        cout << "Select an option: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nInvalid input. Enter a number.\n";
            continue;
        }

        cin.ignore(10000, '\n');

        switch (choice)
        {
        case 1:
            ShowSuspects();
            break;

        case 2:
            ShowEvidence();
            break;

        case 3:
            cout << "\nYou step away from the case files.\n";
            break;

        default:
            cout << "\nInvalid selection. Try again.\n";
            break;
        }
    }
}

void Game::ShowSuspects() const
{
    InvestigateSuspect();
}

void Game::InvestigateSuspect() const
{
    Suspect suspects[5] =
    {
        Suspect(
            "Dr. Evil",
            "Evil Mastermind",
            "Claims he was in space with Mini Me."
        ),

        Suspect(
            "Pennywise the Dancing Clown",
            "Predatory Entity",
            "Claims he was helping Georgie find his boat."
        ),

        Suspect(
            "Jennifer Check",
            "Student and Supernatural Predator",
            "Claims she was at a friend's house and stayed the entire night."
        ),

        Suspect(
            "Albert Wesker",
            "Former Umbrella executive and covert operative",
            "Claims he was investigating a classified biological incident elsewhere."
        ),

        Suspect(
            "Annie Wilkes",
            "Former Nurse",
            "Claims she was caring for a patient in a remote house."
        )
    };

    int choice = 0;

    while (choice != 6)
    {
        cout << "\n========== SUSPECTS ==========\n";

        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << ". " << suspects[i].GetName() << "\n";
        }

        cout << "6. Return to Investigation Menu\n";
        cout << "Choose a suspect: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nInvalid input. Enter a number.\n";
            continue;
        }

        cin.ignore(10000, '\n');

        if (choice >= 1 && choice <= 5)
        {
            InterrogateSuspect(suspects[choice - 1], choice);
        }
        else if (choice != 6)
        {
            cout << "\nInvalid selection. Try again.\n";
        }
    }
}

void Game::InterrogateSuspect(
    const Suspect& suspect,
    int suspectNumber
) const
{
    int choice = 0;

    while (choice != 4)
    {
        cout << "\n========== INTERROGATION ==========\n";
        cout << "Suspect: " << suspect.GetName() << "\n";
        cout << "Occupation: " << suspect.GetOccupation() << "\n\n";

        cout << "1. Ask About Alibi\n";
        cout << "2. Ask About the Murdered Agent\n";
        cout << "3. Challenge Their Statement\n";
        cout << "4. Return to Suspect Selection\n";
        cout << "Choose a question: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nInvalid input. Enter a number.\n";
            continue;
        }

        cin.ignore(10000, '\n');

        switch (choice)
        {
        case 1:
            cout << "\nALIBI:\n";
            cout << suspect.GetAlibi() << "\n";

            switch (suspectNumber)
            {
            case 1:
                cout << "\"Do you have any idea how difficult it is "
                    "to schedule a space vacation?\"\n";
                cout << "Dr. Evil adjusts his collar and smiles "
                    "as though the question is beneath him.\n";
                break;

            case 2:
                cout << "\"We all float somewhere, Detective. "
                    "Some of us simply prefer the dark.\"\n";
                cout << "His smile remains long after his laughter stops.\n";
                break;

            case 3:
                cout << "\"I've already told you where I was. "
                    "Why are you so interested in me?\"\n";
                cout << "Jennifer looks away, then watches you "
                    "from the corner of her eye.\n";
                break;

            case 4:
                cout << "\"My whereabouts are classified. "
                    "You would be wise to respect that boundary.\"\n";
                cout << "Wesker does not appear remotely concerned.\n";
                break;

            case 5:
                cout << "\"I was taking care of someone who needed me. "
                    "People can be so ungrateful.\"\n";
                cout << "Annie's smile tightens at the edges.\n";
                break;
            }
            break;

        case 2:
            cout << "\nTHE MURDERED AGENT:\n";

            switch (suspectNumber)
            {
            case 1:
                cout << "\"A tragic loss. I would have preferred "
                    "a more competent adversary.\"\n";
                cout << "Dr. Evil pauses, as if imagining "
                    "how he would have handled the murder himself.\n";
                break;

            case 2:
                cout << "\"The agent heard something in the dark. "
                    "Something that heard him back.\"\n";
                cout << "Pennywise tilts his head. \"Did he scream?\"\n";
                break;

            case 3:
                cout << "\"I didn't kill anyone. You can't just "
                    "look at someone and decide they're a monster.\"\n";
                cout << "Her voice softens, but her expression "
                    "suggests she is choosing every word carefully.\n";
                break;

            case 4:
                cout << "\"The agent was involved in matters "
                    "beyond his clearance level.\"\n";
                cout << "Wesker folds his arms. "
                    "\"That is all you need to know.\"\n";
                break;

            case 5:
                cout << "\"He was probably frightened. "
                    "People make terrible decisions when frightened.\"\n";
                cout << "Annie looks at the floor. "
                    "\"Someone should have helped him.\"\n";
                break;
            }
            break;

        case 3:
            cout << "\nCHALLENGE STATEMENT:\n";

            switch (suspectNumber)
            {
            case 1:
                cout << "\"Are you accusing me? Me? "
                    "Do you have any idea who I am?\"\n";
                cout << "Dr. Evil gestures dramatically toward himself.\n";
                cout << "\"This interrogation requires a larger budget.\"\n";
                break;

            case 2:
                cout << "\"You want the truth? "
                    "Then look under your bed tonight.\"\n";
                cout << "Pennywise laughs quietly. \"I'll be waiting.\"\n";
                break;

            case 3:
                cout << "\"You think you know me. You don't. "
                    "You only see what you want to see.\"\n";
                cout << "Jennifer's expression hardens.\n";
                break;

            case 4:
                cout << "\"Your suspicions are irrelevant "
                    "without evidence.\"\n";
                cout << "Wesker leans forward. "
                    "\"Make certain you understand the difference.\"\n";
                break;

            case 5:
                cout << "\"After everything I've done for people, "
                    "this is how I'm treated?\"\n";
                cout << "Annie's voice trembles with indignation. "
                    "\"You should be ashamed.\"\n";
                break;
            }
            break;

        case 4:
            cout << "\nYou leave the interrogation room.\n";
            break;

        default:
            cout << "\nInvalid selection. Try again.\n";
            break;
        }
    }
}

void Game::ShowEvidence() const
{
    InvestigateEvidence();
}

void Game::InvestigateEvidence() const
{
    Evidence evidence[6] =
    {
        Evidence(
            "The Letter Written in Blood",
            "A message has been scrawled across the wall in the "
            "victim's blood. Five names appear in different "
            "handwriting styles. One name has been violently "
            "scratched out. Investigators cannot determine whether "
            "the victim wrote the message or someone left it as a warning."
        ),

        Evidence(
            "The Empty Restraint Room",
            "Behind a concealed door lies a room containing restraints "
            "and deep scratches along the walls. Dust suggests the "
            "room has been sealed for years, yet several marks on "
            "the floor appear disturbingly recent. The room does not "
            "appear on the building's official plans."
        ),

        Evidence(
            "The Recording That Shouldn't Exist",
            "A damaged audio recording captures someone pleading "
            "for an unidentified person to stop. After a long silence, "
            "a second voice says, \"You were never supposed to remember.\" "
            "The recording date predates the official investigation."
        ),

        Evidence(
            "The Photograph of Five",
            "An old photograph shows all five suspects standing "
            "outside an isolated building. None admits visiting the "
            "location. A sixth figure stands behind them, but its face "
            "has been scratched away. The photograph's date is missing."
        ),

        Evidence(
            "The Evidence From Tomorrow",
            "A sealed envelope contains a key and a report describing "
            "a crime that has not yet occurred. The report bears the "
            "victim's signature and tomorrow's date. Someone has written "
            "a single sentence across the bottom: \"Do not let it happen again.\""
        ),

        Evidence(
            "The Unfinished Case File",
            "The victim secretly investigated a series of unexplained "
            "deaths. Each file contains a possible connection to one "
            "of the five suspects. The final report describes the "
            "victim's own death in unsettling detail, including facts "
            "that were never released to the public."
        )
    };

    int choice = 0;

    while (choice != 7)
    {
        cout << "\n========== EVIDENCE ROOM ==========\n";

        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << ". " << evidence[i].GetName() << "\n";
        }

        cout << "7. Return to Investigation Menu\n";
        cout << "Select evidence to examine: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nInvalid input. Enter a number.\n";
            continue;
        }

        cin.ignore(10000, '\n');

        if (choice >= 1 && choice <= 6)
        {
            cout << "\n========== EVIDENCE REPORT ==========\n";
            cout << evidence[choice - 1].GetName() << "\n\n";
            cout << evidence[choice - 1].GetDescription() << "\n";
            cout << "\nThe evidence has been added to your case notes.\n";
        }
        else if (choice != 7)
        {
            cout << "\nInvalid selection. Try again.\n";
        }
    }
}
