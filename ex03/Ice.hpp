#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
private:
public:
	Ice(void);
	Ice(const Ice &src);
	virtual ~Ice(void);
	Ice &operator=(Ice const & ice);
	std::string const &getType() const;
	AMateria *clone(void) const;
	void use(ICharacter& target);
};


#endif