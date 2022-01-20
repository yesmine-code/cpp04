#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
private:

public:
	WrongCat(void);
	WrongCat(const WrongCat &src);
	~WrongCat(void);
	void makeSound(void) const;
	WrongCat &operator=(WrongCat const & cat);
};

#endif