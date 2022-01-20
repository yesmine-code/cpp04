#include "Ice.hpp"

Ice::Ice(void){
	std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
}

Ice::~Ice(void){
	std::cout << "Ice desstructor called" << std::endl;
}

Ice::Ice( Ice const & src ){
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = src;
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