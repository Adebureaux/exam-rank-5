#include "SpellBook.hpp"

SpellBook::SpellBook() {
	
}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* rhs) {
	for (std::vector<ASpell*>::iterator it = spell.begin(); it < spell.end(); it++) {
		if (rhs->getName() == (*it)->getName())
			return;
	}
	spell.push_back(rhs->clone());
}

void SpellBook::forgetSpell(const std::string& name) {
	for (std::vector<ASpell*>::iterator it = spell.begin(); it < spell.end(); it++) {
		if (name == (*it)->getName()) {
			spell.erase(it);
			break;
		}
	}
}

ASpell* SpellBook::createSpell(const std::string& name) {
	return (NULL);
}

SpellBook& SpellBook::operator=(const SpellBook& rhs) {
	spell = rhs.spell;
	return (*this);
}

SpellBook::SpellBook(const SpellBook& rhs) {
	*this = rhs;
}
