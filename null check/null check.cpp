#include <iostream>
#include<assert.h>


class Test
{
public:
	void Show()
	{
		std::cout << "Hello World!" << std::endl;
	}


};

void Func(Test* test)
{
	assert(test != nullptr);
	test->Show();
}


int main()
{
	Func(new Test());
	Func(nullptr);
}
