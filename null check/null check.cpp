#include <iostream>
#include<assert.h>


class Weapon {

	public:
		void Use() {}
};

class Player {
	std::shared_ptr<Weapon>weapon;
public:
	Player(std::shared_ptr<Weapon>weapon1) :weapon(std::move(weapon1)) {
		std::cout << weapon.use_count() << std::endl;
		std::cout << weapon1.use_count() << std::endl;
	}
	void Attack() {
		if (weapon)weapon->Use();
	}
};

int main() {
	auto wp = std::make_shared<Weapon>();

	Player p(wp);
	Player q(std::move(wp));

	return 0;
}

//class Test
//{
//public:
//	void Show()
//	{
//		std::cout << "Hello World!" << std::endl;
//	}
//
//
//};
//
//void Func(Test* test)
//{
//	assert(test != nullptr);
//	test->Show();
//}
//
//
//int main()
//{
//	Func(new Test());
//	Func(nullptr);
//}


