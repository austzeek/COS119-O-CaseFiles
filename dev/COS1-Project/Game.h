#pragma once

#include "Suspect.h"
#include "Evidence.h"

class Game
{
public:
    void Run();

private:
    // Reusable input validation
    int GetMenuChoice() const;

    // Main menu functions
    void ShowTitle() const;
    void ShowMenu() const;

    // Investigation functions
    void ShowInvestigationMenu() const;
    void ShowSuspects() const;
    void InvestigateSuspect() const;
    void InterrogateSuspect(const Suspect& suspect, int suspectNumber) const;

    // Evidence functions
    void ShowEvidence() const;
    void InvestigateEvidence() const;
};
