#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain*	B;

	public:
		Dog();
		Dog(const Dog& ref);
		virtual ~Dog();
		Dog& operator=(const Dog& ref);

		virtual void	makeSound(void) const;
};

#endif
