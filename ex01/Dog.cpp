#include "Dog.hpp"

Dog::Dog()
	: Animal()
{
	std::cout << "Guys here's a cute doggy!" << std::endl;
	this->type = "Dog";
	this->B = new Brain();
}

Dog::Dog(const Dog& ref)
{
	std::cout << "...............Cloning the Dog........" << std::endl;
	(*this) = ref;
}

Dog&	Dog::operator=(const Dog& ref)
{
	std::cout << "dog copy assignment" << std::endl;
	if (this != &ref)
	{	
		Animal::operator=(ref);
		this->B = new Brain(*ref.B);
	}
	return (*this);
}

Dog::~Dog()
{
	delete (this->B);
	std::cout << "Bye Bye doggy!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "WHOF WHOF. give me some food" << std::endl;
}
