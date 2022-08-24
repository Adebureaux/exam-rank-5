#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "Fwoosh.hpp"
# include "Polymorph.hpp"
# include "Fireball.hpp"
# include "Dummy.hpp"
# include "BrickWall.hpp"
# include "SpellBook.hpp"
# include "TargetGenerator.hpp"

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
		void forgetSpell(const std::string& name);
		void launchSpell(const std::string& name, ATarget& target);

	private:
		std::string name;
		std::string title;
		SpellBook book;
};

#endif
