#ifndef EX03_WEAPON_HPP_
# define EX03_WEAPON_HPP_

#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();

		void setType(std::string type);
		std::string getType() const;

	private:
		std::string _type;
};

#endif
