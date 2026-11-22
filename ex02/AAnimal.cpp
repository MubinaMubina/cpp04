#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called" << std::endl;
    // PSEUDOCODE: type <- ""   (the base type may stay empty, subject allows it)
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    // PSEUDOCODE: type <- other.type   (std::string copies itself, nothing to deep-copy)
    (void)other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    if (this != &other)
    {
        // PSEUDOCODE: type <- other.type
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}
