#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "Wrongcat";
}
WrongCat::~WrongCat(void){
	std::cout << "WrongCat desstructor called" << std::endl;
}
void WrongCat::makeSound(void) const{
	std::cout<< "miaaaaow ^^ !!"<<std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src){
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongCat &WrongCat::operator=(WrongCat const & wrongcat){
	std::cout << "Wrongcat  Assignement operator called" << std::endl;
	this->type = wrongcat.getType();
	return *this;
}