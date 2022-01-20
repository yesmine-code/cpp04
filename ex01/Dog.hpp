#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal{
private:
    Brain *brain;
public:
    Dog(void);
	Dog(const Dog &src);
    virtual ~Dog(void);
	Animal &operator=(Animal const & dog);
	virtual void makeSound(void) const;
	Dog &operator=(Dog const & dog);
	virtual Brain *getBrain(void) const ;
};


#endif