#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& ref);
		virtual ~Cat();
		Cat& operator=(const Cat& ref);

		virtual void	makeSound(void) const;
};

#endif
