#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor" << std::endl;
}

Brain::Brain(std::string name)
{
	std::cout << "Default Brain constructor" << std::endl;
	for (int i = 0; i < LEN; i++)
		this->ideas[i] = name;
}

Brain::Brain(const Brain& ref)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	(*this) = ref;
}

Brain&	Brain::operator=(const Brain& ref)
{
	std::cout << "Brain copy assignment called" << std::endl;
	if (this != &ref)
	{
		for (int i = 0; i < LEN; i++)
			this->ideas[i] = ref.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
