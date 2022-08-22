#ifndef ATARGET_HPP
# define ATARGET_HPP
# include "Warlock.hpp"
class ASpell;

class ATarget {
	public:
		ATarget(const std::string& type);
		ATarget& operator=(const ATarget& rhs);
		ATarget(const ATarget& rhs);
		~ATarget();

		const std::string& getType(void) const;

		virtual const ATarget* clone(void) const = 0;

		void getHitBySpell(const ASpell& rhs) const;

	private:
		std::string type;
};

#endif
