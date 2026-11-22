#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
    std::cout << "Cat default constructor called" << std::endl;
    // PSEUDOCODE: brain <- new Brain()   (this Cat OWNS its brain)
    type = "Cat"; // derived class names itself
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    // PSEUDOCODE: brain <- new Brain(*other.brain)
    //   DEEP copy: a brand-new Brain filled from other's. Writing
    //   `brain <- other.brain` would share one Brain between two Cats
    //   -> double delete + changes visible in both copies.
    //   (AAnimal(other) already copied `type`)
    (void)other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);
        // PSEUDOCODE:
        //   delete brain                      (free the OLD brain, else leak)
        //   brain <- new Brain(*other.brain)  (deep copy the new one)
        // the `this != &other` guard above protects against `a = a`
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    // PSEUDOCODE: delete brain   (whoever `new`s it must `delete` it)
}

void Cat::makeSound() const
{
    // PSEUDOCODE: print "Meow" (a Cat makes its own sound)
}
