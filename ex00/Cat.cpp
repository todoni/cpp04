#include "Cat.hpp"

Cat::Cat()
	: Animal()
{
	std::cout << "Hi Kitty what is your name?" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& ref)
	: Animal(ref)
{
	std::cout << "...............Cloning the Cat........" << std::endl;
	(*this) = ref;
}

Cat&	Cat::operator=(const Cat& ref)
{
	if (this != &ref)
		Animal::operator=(ref);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "HIIIIISSSSSS!!!! .......(cat is running away)" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOWWWWW....... GRRR..." << std::endl;
}
