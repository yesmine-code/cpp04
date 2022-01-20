
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource{

public:

	MateriaSource( void );
	MateriaSource( const MateriaSource &src );
	~MateriaSource( void );
	MateriaSource	&operator=( const MateriaSource &src );
	virtual void		learnMateria(AMateria *amat);
	virtual AMateria	*createMateria(std::string const & type);
	void			printMaterias( void ) const ;

private:

	AMateria		*materias[4];
	int			    index;

};

#endif