#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include <string> 

class Warlock {
	public:
		Warlock(const std::string& name, const std::string& title);
		Warlock& operator=(const Warlock& rhs);
		Warlock(const Warlock& rhs);
		~Warlock();

		const std::string& getName(void);
		const std::string& getTitle(void);

		void setTitle(const std::string& title);

	private:
		std::string name;
		std::string title;
};

#endif
