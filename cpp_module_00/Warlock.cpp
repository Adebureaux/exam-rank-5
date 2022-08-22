#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) : name(name), title(title) {}

Warlock& Warlock::operator=(const Warlock& rhs) {
	name = rhs.name;
	title = rhs.title;
	return (*this);
}

Warlock::Warlock(const Warlock& rhs) {
	*this = rhs;
}

Warlock::~Warlock() {}

const std::string& Warlock::getName(void) {
	return (name);
}

const std::string& Warlock::getTitle(void) {
	return (title);
}

void Warlock::setTitle(const std::string& title) {
	this->title = title;
}

int main(void) {
	Warlock test("test1", "test2");

	test.setTitle("Hey");
	std::cout << test.getTitle() << std::endl;
	return (0);
}
