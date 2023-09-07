#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
	protected:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(Brain const &src);
		Brain& operator=(Brain const &rhs);
		const std::string getIdeas( int i) const;
		void setIdeas(std::string str, int i);
		~Brain(void);
};

#endif