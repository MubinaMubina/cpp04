#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // PSEUDOCODE
    // 1. Subject test
    //      const Animal* meta <- new Animal()
    //      const Animal* j    <- new Dog()
    //      const Animal* i    <- new Cat()
    //      print j->getType(), i->getType()
    //      i->makeSound()  -> Cat sound   (needs virtual makeSound)
    //      j->makeSound()  -> Dog sound
    //      meta->makeSound() -> generic sound
    //      delete meta, j, i
    //
    // 2. Same thing with the Wrong classes
    //      const WrongAnimal* w <- new WrongCat()
    //      w->makeSound()  -> prints the WrongAnimal sound (NOT the cat's):
    //                         the non-virtual call is bound at compile time
    //      WrongCat directly (WrongCat c; c.makeSound()) -> the cat sound
    //      delete w
    //
    // 3. Extra tests
    //      - Dog and Cat used directly (Dog d; d.makeSound())
    //      - copy constructor and operator= on Dog/Cat (check type + messages)
    //      - read the constructor/destructor messages: base is built first,
    //        destroyed last
    return 0;
}
