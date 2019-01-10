#ifndef PROJECT_HUMANA_HPP
#define PROJECT_HUMANA_HPP

#include <string>
#include "Weapon.hpp"

<<<<<<< HEAD
class HumanA {
private:
    Weapon _weapon;
    std::string name;
public:
    std::string type;
    std::string const getType();
    std::string setType();
    void attack(void);
=======
namespace zob {

	class HumanA {
	private:
		std::string name;
		zob::Weapon *weapon;
	public:
		HumanA(const std::string &name, zob::Weapon &weapon);

		void attack() const;
	};
}
>>>>>>> e46ab191f1cb98760ce7b5411e4eddd4ceafa0ac

#endif //PROJECT_HUMANA_HPP
