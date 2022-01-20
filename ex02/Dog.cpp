#include "Dog.hpp"


Dog::Dog(void){
	std::cout << "dog default constructor called" << std::endl;
	this->type = "dog";
	this->brain = new Brain;

}

Dog::~Dog(void){
	delete this->brain;
	std::cout << "Dog desstructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "aaaaawwwww!!" << std::endl;
}

Dog::Dog( Dog const & src ) :AAnimal(src)
{
	std::cout << "dog Copy constructor called" << std::endl;
	*this = src;
	return;
}

Dog &Dog::operator=(Dog const & dog){
	std::cout << "Dog  Assignement operator called" << std::endl;
	this->type = dog.getType();
	*(this->brain) = *(dog.getBrain());
	return *this;
}

AAnimal &Dog::operator=(AAnimal const & dog){
	std::cout << "animal dog Assignement operator called " << std::endl;
	this->type = dog.getType();
	*(this->brain) = *(dog.getBrain());
	return *this;
}
Brain *Dog::getBrain() const {
	return (this->brain);
}