#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();

        void makeSound() const; // same signature as the base one -> overrides it

    private:
        // PSEUDOCODE: Brain* brain;   // owned pointer -> Cat news/deletes it
};

#endif
