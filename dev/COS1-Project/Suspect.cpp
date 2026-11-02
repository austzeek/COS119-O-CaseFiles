#include "Suspect.h"

Suspect::Suspect()
{
    name = "Unknown";
    occupation = "Unknown";
    alibi = "No alibi provided";
}

Suspect::Suspect(std::string name, std::string occupation, std::string alibi)
{
    this->name = name;
    this->occupation = occupation;
    this->alibi = alibi;
}

std::string Suspect::GetName() const
{
    return name;
}

std::string Suspect::GetOccupation() const
{
    return occupation;
}

std::string Suspect::GetAlibi() const
{
    return alibi;
}
