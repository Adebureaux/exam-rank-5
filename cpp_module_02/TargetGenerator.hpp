#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
# include <iostream>
# include <string>
# include <map>
# include "ATarget.hpp"

class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget* rhs);
		void forgetTargetType(const std::string& type);
		ATarget* createTarget(const std::string& type);
	
	private:
		TargetGenerator& operator=(const TargetGenerator& rhs);
		TargetGenerator(const TargetGenerator& rhs);

	private:
		std::map<std::string, ATarget*> target;
};

#endif
