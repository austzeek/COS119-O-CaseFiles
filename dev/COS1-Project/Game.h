#pragma once

#include "Suspect.h"
#include "Evidence.h"

class Game
{
public:
    void Run();

private:
    void ShowTitle() const;
    void ShowMenu() const;
    void ShowInvestigationMenu() const;
    void ShowSuspects() const;
    void InvestigateSuspect() const;
    void InterrogateSuspect(const Suspect& suspect, int suspectNumber) const;
    void ShowEvidence() const;
    void InvestigateEvidence() const;
};
