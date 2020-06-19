#include <iostream>

int main()
{
	for(int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 7; ++j)
		{
			if(j >= i && j <= 2*i)
				std::cout << "#";
			else
				std::cout << " ";
		}
		for(int k = 6; k >= 0; --k)
		{
			if( k >= i && k <= 2*i)
				std::cout << "#";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
	for(int i = 3; i >= 0; --i)
	{
		for(int j = 0; j < 7; ++j)
		{
			if(j >= i && j <= 2*i)
				std::cout << "#";
			else
				std::cout << " ";
		}
		for(int k = 6; k >= 0; --k)
		{
			if( k >= i && k <= 2*i)
				std::cout << "#";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
}
