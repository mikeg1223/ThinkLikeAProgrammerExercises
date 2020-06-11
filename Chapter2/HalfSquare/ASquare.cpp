#include <iostream>

using std::cout;
using std::cin;

int main()
{
	//this program assumes perfect input and does not throw error exceptions
	//this is a reduction of the half square problem
	int hold = 0;
	cout << "Please enter the length of a square side: ";
	cin >> hold;
	for(int i = 0; i < hold; ++i)
	{
		for(int j = 0; j < hold; ++j)
		{
			cout << "#";
		}
		cout << "\n";
	}
	return 0;
}
