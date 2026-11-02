#include "Evidence.h"

Evidence::Evidence()
{
    name = "Unknown Evidence";
    description = "No description available.";
}

Evidence::Evidence(std::string name, std::string description)
{
    this->name = name;
    this->description = description;
}

std::string Evidence::GetName() const
{
    return name;
}

std::string Evidence::GetDescription() const
{
    return description;
}
