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
int main()
{
	auto p = new Test();

	assert(p != nullptr);

		p->Show();
		
	
	delete p;

}
