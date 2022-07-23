#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& ref)
{
	std::cout << "Animal copy constructor called" << std::endl;
	(*this) = ref;
}

Animal&	Animal::operator=(const Animal& ref)
{
	std::cout << "this" << std::endl;
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "It's Animal" << std::endl;
}
