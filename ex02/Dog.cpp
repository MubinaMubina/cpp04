#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
    std::cout << "Dog default constructor called" << std::endl;
    // PSEUDOCODE: brain <- new Brain()   (this Dog OWNS its brain)
    type = "Dog"; // derived class names itself
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    // PSEUDOCODE: brain <- new Brain(*other.brain)
    //   DEEP copy: a brand-new Brain filled from other's. Writing
    //   `brain <- other.brain` would share one Brain between two Dogs
    //   -> double delete + changes visible in both copies.
    //   (AAnimal(other) already copied `type`)
    (void)other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
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

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    // PSEUDOCODE: delete brain   (whoever `new`s it must `delete` it)
}

void Dog::makeSound() const
{
    // PSEUDOCODE: print "Woof" (a Dog makes its own sound)
}
