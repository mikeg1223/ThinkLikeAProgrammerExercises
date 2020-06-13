#include <iostream>

using std::cin;
using std::cout;

int main()
{
	char hold;
	int evenChecksum = 0;
	int oddChecksum = 0;
	int checksum = 0;
	cout << "Enter a number number: ";
	int i = 0;
	hold = cin.get();
	while(hold != 10)
	{
		if(!(i%2) && hold >= '5')
		{
			evenChecksum += (1 + ((hold - '0')*2)%10);
			oddChecksum += hold - '0';
		}
		else if(!(i%2))
		{
			evenChecksum += ((hold-'0')*2);
			oddChecksum += hold - '0';
		}
		else if (hold >= '5')
		{
			evenChecksum += hold - '0';
			oddChecksum += (1 + ((hold - '0')*2)%10);
		}
		else
		{
			evenChecksum += hold - '0';
			oddChecksum += ((hold - '0')*2);
		}
		hold = cin.get();
	  	++i;
	}
	if(!(i%2))
	{
		checksum = evenChecksum;
	}
	else
	{
		checksum = oddChecksum;
	}
	if(!(checksum%10))
	{
		cout << "This is a valid checksum";
	}
	else
	{
		cout << "This is an invalid checksum";
	}
	return 0;
}
