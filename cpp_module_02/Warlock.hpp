#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "Fwoosh.hpp"
# include "Dummy.hpp"

class Warlock {
	public:
		Warlock(const std::string& name, const std::string& title);
		Warlock& operator=(const Warlock& rhs);
		Warlock(const Warlock& rhs);
		~Warlock();

		const std::string& getName(void) const;
		const std::string& getTitle(void) const;

		void setTitle(const std::string& title);

		void introduce(void) const;

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spell, ATarget& target);

	private:
		std::string name;
		std::string title;
		std::vector<ASpell*> spell;
};

#endif
