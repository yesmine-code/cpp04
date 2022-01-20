#include "AAnimal.hpp"

AAnimal::~AAnimal(void){
     std::cout<<"Aanimal destructor called !!"<<std::endl;
}

const std::string &AAnimal::getType(void) const{
    return (this->type);
}

std::ostream	&operator<<(std::ostream &os, const AAnimal &inst ){
	os << inst.getType();;
	return os;
}

