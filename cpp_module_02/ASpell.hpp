#ifndef ASpell_HPP
# define ASpell_HPP
# include <iostream>
# include <string>
# include "ATarget.hpp"
class ATarget;

class ASpell {
	public:
		ASpell(const std::string& name, const std::string& effects);
		ASpell& operator=(const ASpell& rhs);
		ASpell(const ASpell& rhs);
		~ASpell();

		std::string getName(void) const;
		std::string getEffects(void) const;

		virtual ASpell* clone(void) const = 0;

		void launch(const ATarget& rhs) const;

	private:
		std::string name;
		std::string effects;
};

#endif
