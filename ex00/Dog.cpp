#include "Dog.hpp"


Dog::Dog(void){
    this->type = "dog";
	std::cout << "dog default constructor called" << std::endl;

}

Dog::~Dog(void){
	std::cout << "Cat desstructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "aaaaawwwww!!" << std::endl;
}

Dog::Dog( Dog const & src ) :Animal(src)
{
	std::cout << "dog Copy constructor called" << std::endl;
	*this = src;
	return;
}

Dog &Dog::operator=(Dog const & dog){
	std::cout << "Dog  Assignement operator called" << std::endl;
	this->type = dog.getType();
	return *this;
}