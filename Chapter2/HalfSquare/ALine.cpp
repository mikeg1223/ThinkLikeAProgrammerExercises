#include <iostream>

using std::cout;
using std::cin;

int main()
{
	//this will not throw an exception for improper user input and is not intended to
	//this is the 2nd reduction of the hald square problem
	int hold = 0;
	cout << "Please enter how long you would like to make the line: ";
	cin >> hold;
	for(int i = 0; i < hold; ++i)
	{
		cout << "#";
	}
	return 0;
}

