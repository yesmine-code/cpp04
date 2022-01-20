#ifndef CURE_HPP
# define CURE_HPP

#include "Amateria.hpp"

class Cure{
private:
	std::string type const;
public:
	Cure(void);
	Cure(const Cure &src);
	virtual ~Cure(void);
	Cure &operator=(Cure const & cure);
	std::string const &getType() const;
};


#endif