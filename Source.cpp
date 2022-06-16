#include "Counter.h"
#include <iostream>
#include <string>

int main()
{
	std::string answer;

	std::cout << "Do you want to set the initial counter value?\n";
	std::cout << "Press 'Y' to set up manually or 'N' to set to \"1\": ";

	getline(std::cin, answer);

	while ((answer.front() != 'y' && answer.front() != 'Y') && (answer.front() != 'n' && answer.front() != 'N'))
	{
		std::cout << "Please enter 'Y' or 'N': ";
		getline(std::cin, answer);
	}
		
	int n = 1;

	if (answer.front() == 'y' || answer.front() == 'Y')
	{
		std::cout << "Enter the initial value: ";

		while (!(std::cin >> n))
		{
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Please enter an integer value: ";
		}
		
		std::cin.get();
	}

	std::system("cls");
	Counter new_counter = Counter(n);

	while (answer.front() != 'x' && answer.front() != 'X')
	{
		std::cout << "Press '+', '-', '=' or 'X': ";
		getline(std::cin, answer);

		switch (answer.front())
		{
			case '+':
				new_counter.count_up();
				break;
			case '-':
				new_counter.count_down();
				break;
			case '=':
				new_counter.count_show();
				break;
			case 'x':
				break;
			default:
				std::cout << "That's not a choice!\n";
				break;
		}
	}

	return 0;
}