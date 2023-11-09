// odd Tymek

#include <iostream>
int main()
{
	int number = 8; //user number

	std::cout << " what is your number :" << std::endl;
	std::cin >> number;

	if (number % 2 == 0)
	{
		std::cout << "the number was even" << std::endl;
	}
	return 1;
}