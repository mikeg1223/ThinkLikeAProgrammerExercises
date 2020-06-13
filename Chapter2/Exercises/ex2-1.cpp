#include <iostream>

int main()
{
	int length = 0;
	std::cout << "Please enter and even size to create: ";
	std::cin >> length;
	if(length%2)
	{
		--length;
	}
	int outer = length/2;
	for (int i = 0; i < outer; ++i)
	{
		for(int j = 0; j < length; ++j)
		{
			if( j < i || (j+i) >= length )
				std::cout << " ";
			else
				std::cout << "#";
		}
		std::cout << "\n";
	}
	return 0;
}
