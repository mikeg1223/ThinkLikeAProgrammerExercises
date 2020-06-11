#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cin;
using std::cout;

int main()
{
	int hold = 0;
	cout << "Please enter the height of the triangle: ";
	cin >> hold;
	int hold1 = 2*hold;
	for(int i = 0; i < hold1; ++i)
	{
		for(int j = 0; j < hold-abs(hold-i); ++j)
		{
			cout << "#";
		}
		cout << "\n";
	}
	return 0;
}
