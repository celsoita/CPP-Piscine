#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const &src);
		Dog& operator=(Dog const &rhs);
		void makeSound(void) const;
		virtual ~Dog(void);
};
#endif