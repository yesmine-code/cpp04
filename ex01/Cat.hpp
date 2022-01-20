#ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal{
private:
    Brain *brain;
public:
    Cat(void);
	Cat(const Cat &src);
    virtual ~Cat(void);
	Animal &operator=(Animal const & cat);
	virtual void makeSound(void) const;
	Cat &operator=(Cat const & cat);
	virtual Brain	*getBrain( void ) const;
};


#endif