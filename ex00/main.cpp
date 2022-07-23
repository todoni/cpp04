#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	/*Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;*/

	Animal meta;
	const Animal &ref = meta;
	const Animal j = meta;
	Animal i = meta;
	std::cout << j.getType() << " " << std::endl;
	std::cout << i.getType() << " " << std::endl;
	std::cout << meta.getType() << " " << std::endl;
	i.makeSound(); //will output the cat sound!
	j.makeSound();
	meta.makeSound();
	return 0;	
}
