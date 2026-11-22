#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    // PSEUDOCODE: type <- ""   (the base type may stay empty, subject allows it)
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    // PSEUDOCODE: type <- other.type   (std::string copies itself, nothing to deep-copy)
    (void)other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other)
    {
        // PSEUDOCODE: type <- other.type
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    // PSEUDOCODE: print a generic sound, e.g. "* some animal noise *"
}
