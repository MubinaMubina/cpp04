#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // PSEUDOCODE
    // 1. Same tests as ex01 (subject test, array of AAnimal*, deep copies)
    //      AAnimal* zoo[N]; half new Dog(), half new Cat(); makeSound(); delete
    //
    // 2. AAnimal must NOT be instantiable. Keep this line commented out, and
    //    uncomment it once to see the compiler refuse it:
    //      AAnimal a;                   // error: abstract class
    //      AAnimal* p <- new AAnimal(); // error as well
    //    A pointer/reference TO AAnimal is fine, only objects are forbidden.
    //
    // 3. valgrind --leak-check=full ./animals
    return 0;
}
