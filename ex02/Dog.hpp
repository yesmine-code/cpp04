#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"
#include "AAnimal.hpp"

class Dog : public AAnimal{
private:
    Brain *brain;
public:
    Dog(void);
	Dog(const Dog &src);
    virtual ~Dog(void);
	AAnimal &operator=(AAnimal const & dog);
	virtual void makeSound(void) const;
	Dog &operator=(Dog const & dog);
	virtual Brain *getBrain(void) const ;
};


#endif