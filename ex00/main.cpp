#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== 1. Virtual ===" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }

    std::cout << std::endl << "=== Non virtual ===" << std::endl;
    {
        const WrongAnimal* w = new WrongCat();
        std::cout << w->getType() << " " << std::endl;
        w->makeSound();

        const WrongCat c;
        c.makeSound();

        delete w;
    }

    std::cout << std::endl << "=== Direct use, copy, assignment ===" << std::endl;
    {
        Dog d;
        Cat c;
        d.makeSound();
        c.makeSound();

        Dog d2(d);
        Cat c2;
        c2 = c;
        std::cout << d2.getType() << " " << c2.getType() << std::endl;
        d2.makeSound();
        c2.makeSound();
    }
    return 0;
}
