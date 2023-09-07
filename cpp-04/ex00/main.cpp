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

		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		const WrongAnimal* father = new WrongAnimal();
		const WrongAnimal* x = new WrongCat();
		const WrongCat* giacomo = new WrongCat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << x->getType() << " " << std::endl;

		meta->makeSound();
		j->makeSound();
		i->makeSound(); //will output the cat sound!
		father->makeSound();
		x->makeSound();
		giacomo->makeSound();

		delete meta;
		delete i;
		delete j;
		delete father;
		delete x;
		delete giacomo;
		return 0;
}