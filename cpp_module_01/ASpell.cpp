#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects) {}

ASpell& ASpell::operator=(const ASpell& rhs) {
	name = rhs.name;
	effects = rhs.effects;
	return (*this);
}

ASpell::ASpell(const ASpell& rhs) {
	*this = rhs;
}

ASpell::~ASpell() {}

std::string ASpell::getName(void) const {
	return (name);
}

std::string ASpell::getEffects(void) const {
	return (effects);
}
