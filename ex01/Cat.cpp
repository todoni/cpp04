#include "Cat.hpp"

Cat::Cat()
	: Animal()
{
	std::cout << "Hi Kitty what is your name?" << std::endl;
	this->type = "Cat";
	this->B = new Brain();
}

Cat::Cat(std::string name)
{
	std::cout << "cat with name" << std::endl;
	this->type = "Cat";
	this->B = new Brain(name);
}

Cat::Cat(const Cat& ref)
{
	std::cout << "...............Cloning the Cat........" << std::endl;
	(*this) = ref;
}

Cat&	Cat::operator=(const Cat& ref)
{
	std::cout << "cat copy assignment" << std::endl;
	if (this != &ref)
	{
		Animal::operator=(ref);
		this->B = new Brain(*ref.B);
	}
	return (*this);
}

Cat::~Cat()
{
	delete (this->B);
	std::cout << "HIIIIISSSSSS!!!! .......(cat is running away)" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOWWWWW....... GRRR..." << std::endl;
}


Brain&	Cat::getBrain(void)
{
	return (*this->B);
}

void	Cat::setBrain(std::string name)
{
	*this->B = Brain(name);
}
