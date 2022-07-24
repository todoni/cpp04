#ifndef WRONGAnimal_HPP
# define WRONGAnimal_HPP

# include <string>
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& ref);
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& ref);

		void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
