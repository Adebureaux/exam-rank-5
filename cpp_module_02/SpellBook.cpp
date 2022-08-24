#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
	for (std::map<std::string, ASpell*>::iterator it = spell.begin(); it != spell.end(); it++)
		delete it->second;
	spell.clear();
}

void SpellBook::learnSpell(ASpell* rhs) {
	spell.insert(std::pair<std::string, ASpell*>(rhs->getName(), rhs->clone()));
}

void SpellBook::forgetSpell(const std::string& name) {
	std::map<std::string, ASpell*>::iterator it = spell.find(name);
	if (it != spell.end())
		delete it->second;
	spell.erase(name);
}

ASpell* SpellBook::createSpell(const std::string& name) {
	if (spell.find(name) != spell.end())
		return (spell[name]);
	return (NULL);
}

SpellBook& SpellBook::operator=(const SpellBook& rhs) {
	spell = rhs.spell;
	return (*this);
}

SpellBook::SpellBook(const SpellBook& rhs) {
	*this = rhs;
}
