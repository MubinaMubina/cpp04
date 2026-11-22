#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // PSEUDOCODE
    // 1. Subject test
    //      const Animal* j <- new Dog();   const Animal* i <- new Cat();
    //      delete j; delete i;        -> must not leak
    //      (read the output: derived part is destroyed first, then Animal)
    //
    // 2. Array of Animals
    //      N <- 10 (even)
    //      Animal* zoo[N]
    //      for k in 0..N-1: zoo[k] <- (k < N/2) ? new Dog() : new Cat()
    //      for k in 0..N-1: zoo[k]->makeSound()
    //      for k in 0..N-1: delete zoo[k]    // via Animal*: needs virtual ~Animal
    //
    // 3. Deep copy tests (this is what the evaluator will poke at)
    //      Dog a;  give a's brain an idea (e.g. "bone")
    //      Dog b(a);          // copy constructor
    //      Dog c; c <- a;     // copy assignment
    //      change a's idea -> b and c MUST keep the old one
    //      let a, b, c leave scope -> no double free, no leak
    //      same for Cat
    //
    // 4. Check leaks:  valgrind --leak-check=full ./animals
    return 0;
}
