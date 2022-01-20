#include "Cure.hpp"

Cure::Cure(void){
	std::cout << "Cure default constructor called" << std::endl;
	this->type = "cure";
}

Cure::~Cure(void){
	std::cout << "Cure desstructor called" << std::endl;
}

Cure::Cure( Cure const & src ){
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = src;
	return;
}

Cure &Cure::operator=(Cure const & cure){
	std::cout << "Cure  Assignement operator called" << std::endl;
	this->type = cure.getType();
	return *this;
}

std::string const &Cure::getType() const{
	return (this->type);
}
