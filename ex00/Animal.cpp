#include "Animal.hpp"

 Animal::Animal(void){
     this->type = "";
     std::cout<<"animal defaut constructor called !!"<<std::endl;
 }
 Animal::Animal(std::string type){
     this->type = type;
     std::cout<<"animal constructor called !!"<<std::endl;

 }
Animal::~Animal(void){
     std::cout<<"animal destructor called !!"<<std::endl;
}

std::string Animal::getType(void) const{
    return(this->type);
}

void Animal::makeSound(void) const{
    if (type == "cat")
        std::cout<< "miaaaaow ^^ !!"<<std::endl;
    else if (type == "dog")
        std::cout<< "haaaabhaaaab /\/\ !!"<<std::endl;
    else
        std::cout<< "animaaaaaal !!"<<std::endl;
}