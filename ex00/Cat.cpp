#include "Cat.hpp"


Cat::Cat(void){
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "cat";
}

Cat::~Cat(void){
	std::cout << "Cat desstructor called" << std::endl;
}
void Cat::makeSound(void) const{
	std::cout<< "miaaaaow ^^ !!"<<std::endl;
}

Cat::Cat( Cat const & src ): Animal(src){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat &Cat::operator=(Cat const & cat){
	std::cout << "cat  Assignement operator called" << std::endl;
	this->type = cat.getType();
	return *this;
}
