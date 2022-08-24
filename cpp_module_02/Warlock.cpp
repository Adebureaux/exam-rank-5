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
	book.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string& name) {
	book.forgetSpell(name);
}

void Warlock::launchSpell(const std::string& name, ATarget& target) {
	ASpell* spell;

	spell = book.createSpell(name);
	if (spell)
		spell->launch(target);
}

int main(void)
{
	Warlock richard("Richard", "foo");
	richard.setTitle("Hello, I'm Richard the Warlock!");
	BrickWall model1;

	Polymorph* polymorph = new Polymorph();
	TargetGenerator tarGen;

	tarGen.learnTargetType(&model1);
	richard.learnSpell(polymorph);

	Fireball* fireball = new Fireball();

	richard.learnSpell(fireball);

	ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

	richard.introduce();
	richard.launchSpell("Polymorph", *wall);
	richard.launchSpell("Fireball", *wall);
	delete polymorph;
	delete fireball;
	return (0);
}
