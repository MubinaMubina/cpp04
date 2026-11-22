#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

// ---------------------------------------------------------------------------
// Animal: base class. Polymorphism = calling a function through a base
// pointer (Animal* a) and getting the DERIVED behaviour (Dog/Cat).
//
// PSEUDOCODE
//   protected: type        derived classes set it, outsiders only read it
//                          through getType()
//   virtual ~Animal()      deleting a Dog through an Animal* must run ~Dog()
//                          too, otherwise Dog's resources leak
//   makeSound() const      MUST be `virtual` so the call is resolved at
//                          runtime (dynamic dispatch) from the real type
// ---------------------------------------------------------------------------
class Animal
{
    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        void        makeSound() const; // PSEUDOCODE: add `virtual` -> enables polymorphism
        std::string getType() const;

    protected:
        std::string type;
};

#endif
