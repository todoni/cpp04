#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	:type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	(*this) = ref;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& ref)
{
	if (this != &ref)
		this->type = ref.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "It's WrongAnimal" << std::endl;
}
