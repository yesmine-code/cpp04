#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string &type);
	~WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	const std::string &getType(void) const;
	void makeSound(void) const;
	WrongAnimal &operator=(WrongAnimal const & anim);
};
std::ostream	&operator<<(std::ostream &os, const WrongAnimal &inst);

#endif