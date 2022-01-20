#include "AMateria.hpp"

AMateria::AMateria(void){
	this->type = "";
	std::cout<<"AMateria constructor is called"<<std::endl;
}

AMateria::AMateria(std::string const & type){
	this->type = type;
	std::cout<<"AMateria constructor is called"<<std::endl;
}

std::string const &AMateria::getType() const{
	return (this->type);
}
