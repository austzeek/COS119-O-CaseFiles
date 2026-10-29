#include "Game.h"
#include <iostream>

void Game::Run()
{
    ShowTitle();
    ShowMenu();
}

void Game::ShowTitle() const
{
    std::cout << "====================================\n";
    std::cout << "   DEATH NOTE: THE MURDERED AGENT    \n";
    std::cout << "====================================\n\n";

    std::cout << "A high ranking Agent was found murdered...\n\n";
    std::cout << "It's up to you find the killer...\n\n";
}

void Game::ShowMenu() const
{
    int choice = 0;

    std::cout << "1. Begin Investigation!\n";
    std::cout << "2. Exit Game?\n";
    std::cout << "\nEnter your choice: ";

    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "\nInvestigation started!\n";
        std::cout << "The Agent was found brutally murdered.\n";
        std::cout << "Figure out who killed them and how!.\n\n";

        ShowSuspects();
    }
    else if (choice == 2)
    {
        std::cout << "\nLeaving the case for another day.\n";
    }
    else
    {
        std::cout << "\nInvalid choice. Please run the game again.\n";
    }
}

void Game::ShowSuspects() const
{
    Suspect suspect1(
        "Dr. Evil",
        "Evil Mastermind",
        "Claims he was in space with Mini Me.");

    Suspect suspect2(
        "Pennywise the Dancing Clown",
        "Pipe Cleaner",
        "Claims he was helping Georgie find his boat.");

    Suspect suspect3(
        "Jig Saw",
        "Game Maker",
        "Claims he was playing a game with consenting participants.");

    Suspect suspect4(
        "Place Holder",
        "Place Holder",
        "Place Holder");
    
    Suspect suspect5(
        "Place Holder",
        "Place Holder",
        "Place Holder");

    std::cout << "========== SUSPECTS ==========\n\n";

    std::cout << "1. " << suspect1.GetName() << "\n";
    std::cout << "   Occupation: " << suspect1.GetOccupation() << "\n";
    std::cout << "   Alibi: " << suspect1.GetAlibi() << "\n\n";

    std::cout << "2. " << suspect2.GetName() << "\n";
    std::cout << "   Occupation: " << suspect2.GetOccupation() << "\n";
    std::cout << "   Alibi: " << suspect2.GetAlibi() << "\n\n";

    std::cout << "3. " << suspect3.GetName() << "\n";
    std::cout << "   Occupation: " << suspect3.GetOccupation() << "\n";
    std::cout << "   Alibi: " << suspect3.GetAlibi() << "\n\n";

    std::cout << "4. " << suspect4.GetName() << "\n";
    std::cout << "   Occupation: " << suspect4.GetOccupation() << "\n";
    std::cout << "   Alibi: " << suspect4.GetAlibi() << "\n\n";

    std::cout << "5. " << suspect5.GetName() << "\n";
    std::cout << "   Occupation: " << suspect5.GetOccupation() << "\n";
    std::cout << "   Alibi: " << suspect5.GetAlibi() << "\n\n";
}
