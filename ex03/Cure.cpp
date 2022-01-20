#include "Cure.hpp"

Cure::Cure(void){
	this->type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure(void){
	std::cout << "Cure desstructor called" << std::endl;
}

Cure::Cure( Cure const & src ): AMateria(){
	this->type = "cure";
	*this = src;
	std::cout << "Cure Copy constructor called" << std::endl;
	return;
}

Cure &Cure::operator=(Cure const & cure){
	this->type = cure.getType();
	std::cout << "Cure  Assignement operator called" << std::endl;
	return *this;
}

std::string const &Cure::getType() const{
	return (this->type);
}

AMateria *Cure::clone(void) const{
	return(new Cure(*this));
}

void Cure::use(ICharacter& target){
	std::cout<<"* heals "<<target.getName()<<"’s wounds *"<<std::endl;
}