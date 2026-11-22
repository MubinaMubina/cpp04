#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    // PSEUDOCODE: nothing required (std::string defaults to "").
    //   Optionally: for i in 0..99: ideas[i] <- "idea " + i
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    // PSEUDOCODE: for i in 0..99: ideas[i] <- other.ideas[i]
    //   An array of std::string is copied element by element; each
    //   string owns its characters, so this is already a deep copy.
    (void)other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other)
    {
        // PSEUDOCODE: for i in 0..99: ideas[i] <- other.ideas[i]
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
