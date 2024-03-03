#ifndef EX00_ZOMBIE_HPP_
# define EX00_ZOMBIE_HPP_

# include <string>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void setName(std::string newName);
		void announce() const;
	private:
		std::string _name;
};

#endif
