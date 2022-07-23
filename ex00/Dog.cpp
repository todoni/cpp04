#include "Dog.hpp"

Dog::Dog()
	: Animal()
{
	std::cout << "Guys here's a cute doggy!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& ref)
	: Animal(ref)
{
	std::cout << "...............Cloning the Dog........" << std::endl;
}

Dog&	Dog::operator=(const Dog& ref)
{
	if (this != &ref)
		Animal::operator=(ref);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Bye Bye doggy!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "WHOF WHOF. give me some food" << std::endl;
}
