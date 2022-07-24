#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal()
{
	std::cout << "WrongCat:Hi Kitty what is your name?" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& ref)
	: WrongAnimal(ref)
{
	std::cout << "...............Cloning the WrongCat........" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& ref)
{
	if (this != &ref)
		WrongAnimal::operator=(ref);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "HIIIIISSSSSS!!!! .......(WrongCat is running away)" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat:MEOWWWWW....... GRRR..." << std::endl;
}
