#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain(void){
	std::cout << "Brain desstructor called" << std::endl;
}
void Brain::makeSound(void) const{
	std::cout<< "miaaaaow ^^ !!"<<std::endl;
}

Brain::Brain( Brain const & src ){
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
	return;
}

Brain &Brain::operator=(Brain const & brain){
	std::cout << "Brain  Assignement operator called" << std::endl;
	for (int i = 0; i < IdeaNum; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}