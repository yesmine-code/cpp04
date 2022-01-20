#include "Ice.hpp"

Ice::Ice(void){
	this->type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice(void){
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice( Ice const & src ): AMateria(){
	this->type = "Ice";
	*this = src;
	std::cout << "Ice Copy constructor called" << std::endl;
	return;
}

Ice &Ice::operator=(Ice const & ice){
	std::cout << "Ice  Assignement operator called" << std::endl;
	this->type = ice.getType();
	return *this;
}

std::string const &Ice::getType() const{
	return (this->type);
}
AMateria *Ice::clone(void) const{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target){
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}