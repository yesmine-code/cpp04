#ifndef ICE_HPP
# define ICE_HPP

#include "Amateria.hpp"

class Ice{
private:
	std::string type const;
public:
	Ice(void);
	Ice(const Ice &src);
	virtual ~Ice(void);
	Ice &operator=(Ice const & ice);
	std::string const &getType() const;
};


#endif