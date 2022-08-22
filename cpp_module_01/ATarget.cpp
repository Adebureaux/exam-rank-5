#include "ATarget.hpp"

ATarget::ATarget(const std::string& type) : type(type) {}

ATarget& ATarget::operator=(const ATarget& rhs) {
	type = rhs.type;
	return (*this);
}

ATarget::ATarget(const ATarget& rhs) {
	*this = rhs;
}

ATarget::~ATarget() {}

const std::string& ATarget::getType(void) const {
	return (type);
}

void ATarget::getHitBySpell(const ASpell& rhs) const {
	std::cout << rhs.getEffects() << std::endl;
}
