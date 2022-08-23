#ifndef FWOOSH_HPP
# define FWOOSH_HPP
# include <iostream>
# include <string>
# include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
		Fwoosh();
		~Fwoosh();
		const Fwoosh* clone(void) const;
};

#endif
