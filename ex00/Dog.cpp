#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog"; // derived class names itself
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    // PSEUDOCODE: nothing to add, Animal(other) already copied `type`
    (void)other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        // PSEUDOCODE: nothing to add, Animal::operator=(other) already did it
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    // PSEUDOCODE: print "Woof" (a Dog makes its own sound)
}
