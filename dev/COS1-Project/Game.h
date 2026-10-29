#pragma once

#include "Suspect.h"

class Game
{
public:
    void Run();

private:
    void ShowTitle() const;
    void ShowMenu() const;
    void ShowSuspects() const;
};
