#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
/*
Implement a Dog class that inherits from Animal.
Implement a Cat class that inherits from Animal.
These two derived classes must set their type field depending on their name. Then,
the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
The type of the Animal class can be left empty or set to the value of your choice.
Every animal must be able to use the member function:
makeSound()
It will print an appropriate sound (cats don’t bark).
*/
int main(void)
{
	// Animal animale("Alpha");
	// animale.makeSound();
	// std::cout << " Animale :" << animale.getAnimal() << std::endl;
	// Dog cane("jack");
	// cane.makeSound();
	// std::cout << " cane :" << cane.getAnimal() << std::endl;
	// Cat gatto("garfield");
	// gatto.makeSound();
	// std::cout << " gatto :" << gatto.getAnimal() << std::endl;

		// const Animal* meta = new Animal();
		// const Animal* j = new Dog();
		// const Animal* i = new Cat();
		// const WrongAnimal* father = new WrongAnimal();
		// const WrongAnimal* x = new WrongCat();
		// std::cout << j->getType() << " " << std::endl;
		// std::cout << i->getType() << " " << std::endl;
		// std::cout << x->getType() << " " << std::endl;

		// i->makeSound(); //will output the cat sound!
		// j->makeSound();
		// x->makeSound();
		// meta->makeSound();
		// father->makeSound();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const Dog* dogPtr = dynamic_cast<const Dog*>(j);
    for (int i = 0; i < 5; i++) 
	{
    	std::cout << "Il doggo pensa";
    	dogPtr->Dog::getIdeas(i).empty( ) != 0 ? std::cout << "..." : std::cout <<  dogPtr->Dog::getIdeas(i);
    	std::cout << std::endl;
    }
    delete j;
    delete i;

    std::cout << std::endl;

    Cat basic("Sandro");
    {
        basic.setIdeas("sleeping", 0);
        std::cout << "[basic] "<< basic.Animal::getType() << " is thinking... " << basic.getIdeas(0) << std::endl;
        Cat tmp = basic;
        std::cout << "[tmp] " << tmp.Animal::getType() << " is thinking... " << tmp.getIdeas(0) << std::endl;
    }

    std::cout << "[basic] "<< basic.Animal::getType() << " is thinking... " << basic.getIdeas(0) << std::endl;
    std::cout << std::endl;

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}