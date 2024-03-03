#ifndef EX05_KAREN_HPP_
# define EX05_KAREN_HPP_

# include <string>

class Karen {
	public:
		Karen();
		~Karen();

		void complain(std::string level);
	private:
		void debug();
		void info();
		void warning();
		void error();

		typedef void (Karen::*f)();
};

#endif
