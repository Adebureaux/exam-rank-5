#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

const Fwoosh* Fwoosh::clone(void) const {
	return (this);
}
