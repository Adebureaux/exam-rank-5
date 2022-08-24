#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"

class SpellBook {
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* rhs);
		void forgetSpell(const std::string& name);
		ASpell* createSpell(const std::string& name);
	
	private:
		SpellBook& operator=(const SpellBook& rhs);
		SpellBook(const SpellBook& rhs);

	private:
		std::map<std::string, ASpell*> spell;
};

#endif
