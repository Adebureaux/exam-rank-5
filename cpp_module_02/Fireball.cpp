#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball() {}

Fireball* Fireball::clone(void) const {
	return (new Fireball());
}
