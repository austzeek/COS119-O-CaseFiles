#pragma once

#include <string>

class Evidence
{
public:
    Evidence();
    Evidence(std::string name, std::string description);

    std::string GetName() const;
    std::string GetDescription() const;

private:
    std::string name;
    std::string description;
};
