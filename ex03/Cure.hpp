#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
private:
public:
	Cure(void);
	Cure(const Cure &src);
	virtual ~Cure(void);
	Cure &operator=(Cure const & cure);
	std::string const &getType() const;
	AMateria *clone(void) const;
	void use(ICharacter& target);
};


#endif