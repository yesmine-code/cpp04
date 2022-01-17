#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

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
	Animal &operator=(Animal const & anim);
};
std::ostream	&operator<<(std::ostream &os, const Animal &inst);

#endif