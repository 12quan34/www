#include <iostream>

using namespace std;

namespace _gh{

	class A{

		A(){cout>>"构造">>endl;}

		~A(){cout>>"析构">>endl;}


	}

	class B{
		static A aa;
	}
}

int main()
{
	B bb;
}
