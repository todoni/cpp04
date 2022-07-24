#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#define SIZE 10

void	testArray(void)
{
	Animal	*array[SIZE];

	for (int i = 0; i < SIZE / 2; i++)
		array[i] = new Cat();

	for (int i = SIZE / 2; i < SIZE; i++)
		array[i] = new Dog();

	for (int i = 0; i < SIZE; i++)
		array[i]->makeSound();

	for (int i = 0; i < SIZE; i++)
		delete array[i];
}

void	testDeepCopy(void)
{
	Cat	cat1("Cat1");
	Cat	cat2("Cat2");
	Cat cat3(cat1);

	cat1.setBrain("Cat3");
	Brain&	tmp = cat1.getBrain();
	std::cout << "[cat1 Brain value]" << std::endl;
	for (int i = 0; i < LEN; i++)
		std::cout << tmp.ideas[i] + " ";
	std::cout << "\n" << std::endl;
	
	tmp = cat2.getBrain();
	std::cout << "[cat2 Brain value]" << std::endl;
	for (int i = 0; i < LEN; i++)
		std::cout << tmp.ideas[i] + " ";
	std::cout << "\n" << std::endl;

	tmp = cat3.getBrain();
	std::cout << "[cat3 Brain value]" << std::endl;
	for (int i = 0; i < LEN; i++)
		std::cout << tmp.ideas[i] + " ";
	std::cout << std::endl;
	
	std::cout << "cat1 Brain address:"<< &cat1.getBrain() << std::endl;
	std::cout << "cat2 Brain address:"<< &cat2.getBrain() << std::endl;
	std::cout << "cat3 Brain address:"<< &cat3.getBrain() << std::endl;
}

int	main()
{
	std::cout << "======================Basic Test=======================" << std::endl;
	const Animal* cat;
	const Animal* dog;
	cat = new Cat();
	dog = new Dog();
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	delete cat;
	delete dog;
	std::cout << "====================Deep Copy Test=====================" << std::endl;
	testDeepCopy();
	std::cout << "======================Array Test=======================" << std::endl;
	testArray();
	std::cout << "====================Memory Leak Check==================" << std::endl;
	system("leaks ex_01");
	return 0;
}
