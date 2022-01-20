#include "Cat.hpp"


Cat::Cat(void){
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "cat";
	this->brain = new Brain;
}

Cat::~Cat(void){
	delete this->brain;
	std::cout << "Cat desstructor called" << std::endl;
}
void Cat::makeSound(void) const{
	std::cout<< "miaaaaow ^^ !!"<<std::endl;
}

Cat::Cat( Cat const & src ): AAnimal(src){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat &Cat::operator=(Cat const & cat){
	std::cout << "cat  Assignement operator called" << std::endl;
	this->type = cat.getType();
	*(this->brain) = *(cat.getBrain());
	return *this;
}

Brain *Cat::getBrain() const {
	return (this->brain);
}

AAnimal &Cat::operator=(AAnimal const & cat){
	std::cout << "animal cat  Assignement operator called" << std::endl;
	this->type = cat.getType();
	*(this->brain) = *(cat.getBrain());
	return *this;
}


