#include <iostream>

using std::cin;
using std::cout;

int main()
{
	for(int i = 3; i >= 0; --i)
	{
		for(int j = 0; j < 8; ++j)
		{
			if(i > j || (j+i) >= 8 )
			{
				cout << " ";
			}
			else
			{
				cout << "#";
			}
		}
		cout << "\n";
	}	
	for (int i = 0; i < 4; ++i)
	{
		for(int j = 0; j < 8; ++j)
		{
			if( j < i || (j+i) >= 8 )
				std::cout << " ";
			else
				std::cout << "#";
		}
		std::cout << "\n";
	}
	return 0;
}
