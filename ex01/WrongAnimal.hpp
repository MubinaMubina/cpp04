#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

// ---------------------------------------------------------------------------
// WrongAnimal: same as Animal, but makeSound() is NOT virtual.
// A WrongCat seen through a WrongAnimal* will therefore use the
// WrongAnimal sound: the compiler picks the function from the POINTER type.
// It exists only to prove that `virtual` is what makes polymorphism work.
// ---------------------------------------------------------------------------
class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        virtual ~WrongAnimal();

        void        makeSound() const; // stays NON-virtual on purpose (static binding)
        std::string getType() const;

    protected:
        std::string type;
};

#endif
