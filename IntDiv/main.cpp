#include <iostream>

int main()
{
	int value = 0;
	std::cin >> value;
	std::cout << '1' << std::endl;
	for (int i = 2; i <= value / 2; i++)
	{
		if (value % i == 0)
			std::cout << i << std::endl;
	}
	std::cout << value << std::endl;
}
