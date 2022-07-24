#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

bool	isEmpty(Animal a)
{
	if (a.getType() != "")
		return (true);
	return false;
}

void	section1(void)
{
	Animal* meta = new Animal();
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
	delete j;
}

void	section2(void)
{
	WrongAnimal	*wrongAnimal = new WrongAnimal();
	WrongAnimal	*wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << std::endl;
	std::cout << wrongAnimal->getType() << std::endl;

	wrongCat->makeSound();
	wrongAnimal->makeSound();

	delete wrongAnimal;
	delete wrongCat;
}

void	section3(void)
{
	Animal	animalCat = Cat();
	Animal	animalDog = Dog();
	
	std::cout << animalCat.getType() << std::endl;
	animalCat.makeSound();
	std::cout << animalDog.getType() << std::endl;
	animalDog.makeSound();
	
	animalCat = animalDog;
	std::cout << animalCat.getType() << std::endl;
	animalCat.makeSound();
}

void	section4(void)
{
	Cat	cat;
	Cat	cat2;
	Dog	dog;
	
	Animal	animalCat2 = cat;
	Animal	animalDog2 = dog;
	cat = cat2;
	cat2.makeSound();
	Cat cat3 = cat;
}

int	main()
{
	std::cout << "==========section1==========" << std::endl;
	section1();
	std::cout << "\n" << std::endl;

	std::cout << "==========section2==========" << std::endl;
	section2();
	std::cout << "\n" << std::endl;

	std::cout << "==========section3==========" << std::endl;
	section3();
	std::cout << "\n" << std::endl;
	
	std::cout << "==========section4==========" << std::endl;
	section4();
	std::cout << "\n" << std::endl;
	
	std::cout << "=======mem leak check=======" << std::endl;
	system("leaks ex_00");
	return 0;	
}
