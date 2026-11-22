#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

// ---------------------------------------------------------------------------
// AAnimal: base class. Polymorphism = calling a function through a base
// pointer (Animal* a) and getting the DERIVED behaviour (Dog/Cat).
//
// PSEUDOCODE
//   protected: type        derived classes set it, outsiders only read it
//                          through getType()
//   virtual ~AAnimal()      deleting a Dog through an AAnimal* must run ~Dog()
//                          too, otherwise Dog's resources leak
//   makeSound() const      MUST be `virtual` so the call is resolved at
//                          runtime (dynamic dispatch) from the real type
//                          `= 0` makes it pure virtual -> AAnimal is ABSTRACT:
//                          `new AAnimal()` no longer compiles, Dog/Cat still work
// ---------------------------------------------------------------------------
class AAnimal
{
    public:
        AAnimal();
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal() = 0; // optional: pure virtual dtor still needs a body in AAnimal.cpp

        virtual void makeSound() const = 0;
        std::string  getType() const;

    protected:
        std::string type;
};

#endif
