#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

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

int main()
{
	Warlock const richard("Richard", "Mistress of Magma");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

	Warlock* jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	delete jack;

	return (0);
}
