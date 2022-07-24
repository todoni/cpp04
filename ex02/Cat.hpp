#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	B;

	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat& ref);
		virtual ~Cat();
		Cat& operator=(const Cat& ref);

		virtual void	makeSound(void) const;
		Brain&			getBrain(void);
		void			setBrain(std::string name);
};

#endif
