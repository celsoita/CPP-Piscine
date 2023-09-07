#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain* _brain;
	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const &src);
		Dog& operator=(Dog const &rhs);
		const std::string getIdeas( int i) const;
		void setIdeas(std::string str, int i);
		void makeSound(void) const;
		~Dog(void);
};
#endif