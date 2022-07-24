#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& ref);
		~WrongCat();
		WrongCat& operator=(const WrongCat& ref);

		void	makeSound(void) const;
};

#endif
