#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat"; // derived class names itself
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    // PSEUDOCODE: nothing to add, Animal(other) already copied `type`
    (void)other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        // PSEUDOCODE: nothing to add, Animal::operator=(other) already did it
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    // PSEUDOCODE: print "Meow" (a Cat makes its own sound)
}
