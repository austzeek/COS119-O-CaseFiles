#pragma once

#include <string>

class Suspect
{
public:
    Suspect();
    Suspect(std::string name, std::string occupation, std::string alibi);

    std::string GetName() const;
    std::string GetOccupation() const;
    std::string GetAlibi() const;

private:
    std::string name;
    std::string occupation;
    std::string alibi;
};
