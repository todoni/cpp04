#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# define LEN 100

class	Brain
{
	public:
		std::string	ideas[LEN];
		Brain();
		Brain(std::string name);
		Brain(const Brain& ref);
		~Brain();
		Brain& operator=(const Brain& ref);
};

#endif
