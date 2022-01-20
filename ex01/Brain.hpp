#ifndef Brain_HPP
# define Brain_HPP

#include <iostream>

class Brain{
private:
	static const int IdeaNum = 100;
public:
	Brain(void);
	Brain(const Brain &src);
	virtual ~Brain(void);
	virtual void makeSound(void) const;
	Brain &operator=(Brain const & brain);
	std::string ideas[IdeaNum];
};
#endif