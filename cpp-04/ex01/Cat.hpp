#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain* _brain;
	public:
		Cat(void);
		Cat(Cat const &src);
		Cat(std::string type);
		Cat& operator=(Cat const &rhs);
		const std::string getIdeas( int i) const;
		void setIdeas(std::string str, int i);
		void makeSound(void) const;
		~Cat(void);
};

#endif