#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	for (std::map<std::string, ATarget*>::iterator it = target.begin(); it != target.end(); it++)
		delete it->second;
	target.clear();
}

void TargetGenerator::learnTargetType(ATarget* rhs) {
	target.insert(std::pair<std::string, ATarget*>(rhs->getType(), rhs->clone()));
}

void TargetGenerator::forgetTargetType(const std::string& type) {
	std::map<std::string, ATarget*>::iterator it = target.find(type);
	if (it != target.end())
		delete it->second;
	target.erase(type);
}

ATarget* TargetGenerator::createTarget(const std::string& type) {
	if (target.find(type) != target.end())
		return (target[type]);
	return (NULL);
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& rhs) {
	target = rhs.target;
	return (*this);
}

TargetGenerator::TargetGenerator(const TargetGenerator& rhs) {
	*this = rhs;
}
