#include <iostream>

using std::cin;
using std::cout;

int main()
{	
	//this simple program does not account for user error (letter into the int variable)
	int hold;
	cout << "Please enter the size of square: ";
	cin >> hold;
	for(int i = 0; i < hold; ++i)
	{
		for(int j = i; j < hold; ++j)
		{
			cout << "#";
		}
		cout << "\n";
		
	}
	return 0;
}
