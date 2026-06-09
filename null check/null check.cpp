#include <iostream>


class Test
{
public:
	void Show()
	{
		std::cout << "Hello World!" << std::endl;
	}


};
int main()
{
	auto p = new Test();

	if (p != nullptr) {

		p->Show();
		
	}
	delete p;

}
