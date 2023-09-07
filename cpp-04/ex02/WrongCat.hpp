#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(WrongCat const &src);
		WrongCat& operator=(WrongCat const &rhs);
		std::string getType(void) const;
		void setType(std::string);
		 void makeSound(void) const;
		~WrongCat(void);


};

#endif