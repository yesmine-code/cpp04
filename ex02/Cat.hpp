#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "AAnimal.hpp"

class Cat : public AAnimal{
private:
    Brain *brain;
public:
    Cat(void);
	Cat(const Cat &src);
    virtual ~Cat(void);
	AAnimal &operator=(AAnimal const & cat);
	virtual void makeSound(void) const;
	Cat &operator=(Cat const & cat);
	virtual Brain	*getBrain( void ) const;
};


#endif