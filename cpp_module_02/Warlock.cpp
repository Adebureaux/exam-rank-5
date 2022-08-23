#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock& Warlock::operator=(const Warlock& rhs) {
	name = rhs.name;
	title = rhs.title;
	return (*this);
}

Warlock::Warlock(const Warlock& rhs) {
	*this = rhs;
}

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName(void) const {
	return (name);
}

const std::string& Warlock::getTitle(void) const {
	return (title);
}

void Warlock::setTitle(const std::string& title) {
	this->title = title;
}

void Warlock::introduce(void) const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
	this->spell.push_back(spell);
}

void Warlock::forgetSpell(std::string spell) {
	for (std::vector<ASpell*>::iterator it = this->spell.begin(); it < this->spell.end(); it++) {
		if (spell == (*it)->getName()) {
			this->spell.erase(it);
			break;
		}
	}
}

void Warlock::launchSpell(std::string spell, ATarget& target) {
	for (int i = 0; i < this->spell.size(); i++) {
		if (spell == this->spell[i]->getName()) {
			target.getHitBySpell(*this->spell[i]);
			break;
		}
	}
}

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}
