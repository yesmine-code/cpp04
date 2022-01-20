#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include<iostream>
#include "Brain.hpp"

class AAnimal{
protected:
    std::string type;
public:
	virtual ~AAnimal();
	const std::string &getType(void) const;
	virtual void makeSound(void) const = 0;
	virtual AAnimal &operator=(AAnimal const & anim) = 0;
	virtual Brain		*getBrain( void ) const = 0;
};
std::ostream	&operator<<(std::ostream &os, const AAnimal &inst);

#endif