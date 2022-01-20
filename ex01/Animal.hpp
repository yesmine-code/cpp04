#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include "Brain.hpp"

class Animal{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string &type);
    virtual ~Animal();
	Animal(Animal const & src);
    const std::string &getType(void) const;
    virtual void makeSound(void) const;
	virtual Animal &operator=(Animal const & anim);
	virtual Brain		*getBrain( void ) const = 0;
};
std::ostream	&operator<<(std::ostream &os, const Animal &inst);

#endif