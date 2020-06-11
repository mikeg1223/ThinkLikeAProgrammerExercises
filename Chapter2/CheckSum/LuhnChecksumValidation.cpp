#include <iostream>

using std::cin;
using std::cout;

int main()
{
	char hold;
	int checksum = 0;
	cout << "Enter a 6 digit number: ";
	for(int i = 0; i < 6; ++i)
	{
		cin >> hold;
		if(i%2 && hold >= '5')
		{
			checksum += (1 + ((hold - '0')*2)%10)
		}
		else if(i%2)
		{
			checksum += ((hold-'0')*2);
		}
		else
		{
			checksum += hold - '0';
		}
	}
	if(!(checksum%10))
	{
		
	}
	return 0;
}
