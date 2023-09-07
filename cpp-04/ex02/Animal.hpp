#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal(void);//default constructor
		Animal(std::string type);
		std::string getType(void) const;
		void setType(std::string NewAnimal);
		Animal(Animal const &src);//default copy construct
		Animal& operator=(Animal const &rhs);//default overloard operator
		virtual void makeSound(void) const = 0;
		virtual ~Animal(void);//default deconstructor
};

#endif

//223