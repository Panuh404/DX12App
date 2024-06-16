#pragma once

#include <iostream>

namespace QuietEX
{
	class Application
	{
	public:
		Application();
		bool Run();
	};
}

int main()
{
	QuietEX::Application();
	return 0;
}