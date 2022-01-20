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
	std::cout << "Character Copy constructor called" << std::endl;
	*this = src;
	return;
}

Character::~Character( void )
{
	std::cout << "Destructor for Character called" << std::endl;
	return;
}

Character &	Character::operator=( Character const & src )
{
	this->index = 0;
	for (int i = 0; i < 4; i++){
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = src.inventory[i];
		if (src.inventory[i])
			this->index++;
	}
	this->name = src.getName();
	std::cout << "Character Assignement operator is called" << std::endl;
	return *this;
}

std::string const	&Character::getName() const{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	if (this->index < 4)
	{
		this->inventory[this->index] = m;
		this->index++;
		std::cout << "Equipped a " << m->getType() << std::endl;
	}
	else
		std::cout << "Couldn't equip a " << m->getType() << ", no more space"<< std::endl;
}

void	Character::unequip(int idx){
	int i;
	for (i = idx + 1; i < 4 && this->inventory[i] ; i++)
		this->inventory[i - 1] = this->inventory[i];
	this->inventory[i] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
	this->unequip(idx);
}

void	Character::printInventory( void ) const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			std::cout << i << ": " << this->inventory[i] << std::endl;
		else
			std::cout << i << ": Empty" << std::endl;
	}
}