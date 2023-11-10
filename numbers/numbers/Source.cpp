// odd Tymek
// even Tymek

#include <iostream>

int main()
{
	int input = 8; //user number

	std::cout << " what is your number :" << std::endl;
	std::cin >> input;

	if (input % 2 == 0)
	{
		std::cout << "the number was even" << std::endl;
	}

	else
	{
		std::cout << "the number was odd" << std::endl;
	}
	return 1;
}