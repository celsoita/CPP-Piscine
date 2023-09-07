#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
	std::string _type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal& operator=(WrongAnimal const &rhs);
		void setType(std::string newType);
		std::string getType(void) const;
		void makeSound(void) const;
		~WrongAnimal(void);
};

#endif