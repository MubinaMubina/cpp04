#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

        void makeSound() const; // same signature as the base one -> overrides it

    private:
        // PSEUDOCODE: Brain* brain;   // owned pointer -> Dog news/deletes it
};

#endif
