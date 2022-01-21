#include "Character.hpp"

Character::Character( void ){
	this->name = "";
	this->index = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character Default constructor called" << std::endl;
	return;
}

Character::Character( const std::string &name )
{
	*this = Character();
	this->name = name;
	std::cout << "Character constructor name is  called" << std::endl;
	return;
}

Character::Character( Character const & src )
{
	*this = src;
	std::cout << "Character Copy constructor called" << std::endl;
	return;
}

Character::~Character( void ){
	std::cout << "Destructor for Character called" << std::endl;
	return;
}

Character &	Character::operator=( Character const & src ){
	this->index = 0;
	for (int i = 0; i < 4; i++){
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		this->inventory[i] = src.inventory[i];
		if (src.inventory[i] != NULL)
			this->index++;
	}
	this->name = src.getName();
	std::cout << "Character Assignement operator is called" << std::endl;
	return *this;
}

std::string const	&Character::getName() const{
	return (this->name);
}

void	Character::equip(AMateria* m){
	if (this->index < 4){
		this->inventory[this->index] = m;
		this->index++;
	}
	//else print cannot equip more than 4 materia but in subject (do not do anything so nothing to print :D
}

void	Character::unequip(int idx){
	int i;
	for (i = idx + 1; i < 4 && this->inventory[i] ; i++)
		this->inventory[i - 1] = this->inventory[i];
	this->inventory[i] = NULL;
}

void	Character::use(int idx, ICharacter& target){
	if (this->inventory[idx] != NULL) {
		this->inventory[idx]->use(target);
		this->unequip(idx);
	}
}

void	Character::printCharacter( void ) const
{
	for (int i = 0; i < 4; i++){
		if (this->inventory[i])
			std::cout <<"inventory "<< i << " = " << this->inventory[i] << std::endl;
		else
			std::cout <<"inventory "<< i << " = NULL" << std::endl;
	}
}