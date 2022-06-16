#include "Counter.h"
#include <iostream>

void Counter::count_up(void)
{
	++counter;
}

void Counter::count_down(void)
{
	--counter;
}

void Counter::count_show(void)
{
	std::cout << "Counter = " << counter << std::endl;
}

Counter::Counter(const int n)
{
	if (n != 1)
	{
		std::cout << "The initial counter value set to " << n << std::endl;
		counter = n;
	}
	else
	{
		std::cout << "Counter set to \"1\"\n";
		counter = 1;
	}
}

Counter::~Counter()
{
	std::cout << "Bye!\n";
}