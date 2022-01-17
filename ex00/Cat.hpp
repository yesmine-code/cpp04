#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
private:
    
public:
    Cat(void);
	Cat(const Cat &src);
    virtual ~Cat(void);
	virtual void makeSound(void) const;
	Cat &operator=(Cat const & cat);
};


#endif