#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ){
	this->index = 0;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	std::cout << "MateraiSource Default constructor is called" << std::endl;
	return;
}

MateriaSource::MateriaSource(MateriaSource const & src){
	*this = src;
	std::cout << "MateriaSource Copy constructor is called" << std::endl;
	return;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] != NULL)
			delete this->materias[i];
	}
	std::cout << "MateriaSource Destructor is called" << std::endl;
	return;
}

MateriaSource &MateriaSource::operator=( MateriaSource const & src )
{
	for (int i = 0; i < 4; i++){
		if (this->materias[i] != NULL)
			delete this->materias[i];
		if (src.materias[i] != NULL)
			this->materias[i] = src.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	std::cout << "MateriaSourceAssignement operator is called" << std::endl;
	return *this;
}

void		MateriaSource::learnMateria(AMateria *amat)
{
	if (this->index >= 4)
		std::cout << "MateriaSource can know at most 4 Materias." << std::endl;
	else
	{
		this->materias[this->index] = amat;
		this->index++;
		std::cout << "Learned " << amat->getType() << " Materia"<< std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && this->materias[i]; i++)
	{
		if (type == this->materias[i]->getType())
			return this->materias[i]->clone();
	}
	return NULL;
}

void		MateriaSource::printMaterias( void ) const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] != NULL)
			std::cout << i << ": " << this->materias[i]->getType() << std::endl;
		else
			std::cout << i << ": Empty" << std::endl;
	}
}