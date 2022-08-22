#ifndef ASpell_HPP
# define ASpell_HPP
# include "Warlock.hpp"

class ASpell {
	public:
		ASpell(const std::string& name, const std::string& effects);
		ASpell& operator=(const ASpell& rhs);
		ASpell(const ASpell& rhs);
		~ASpell();

		std::string getName(void) const;
		std::string getEffects(void) const;

		virtual const ASpell* clone(void) const = 0;

	private:
		std::string name;
		std::string effects;
};

#endif
