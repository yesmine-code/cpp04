#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
private:
    
public:
    Dog(void);
	Dog(const Dog &src);
    virtual ~Dog(void);
	virtual void makeSound(void) const;
	Dog &operator=(Dog const & dog);

};


#endif