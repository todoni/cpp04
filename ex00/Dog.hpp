#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& ref);
		~Dog();
		Dog& operator=(const Dog& ref);

		void	makeSound(void) const;
};

#endif
