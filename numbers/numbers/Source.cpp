// odd Tymek
// even Tymek

#include <iostream>

int main()
{
	int input = 7; //user inputted number

	std::cout << "think of a number:" << std::endl;
	std::cin >> input;

	if (input % 2 == 1)
	{
		std::cout << "the number was odd" << std::endl;
	}
	return 1;
}