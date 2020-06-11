#include <iostream>

using std::cin;
using std::cout;

int main()
{
	//this program does not allow for error exception
	//this is a toy program meant to model the necessary step to draw a right triangle or half square
	int hold = 0;
	cout << "Count down from what number? : ";
	cin >> hold;
	for(int i = 0; i < hold; ++i)
	{
		cout << hold - i << "\n";
	}
	return 0;
}
