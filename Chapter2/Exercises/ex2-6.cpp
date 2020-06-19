#include <iostream>
#include <cstdlib>
#include <string>
//create a program that translates base10 into base2 and vice versa

int menu();
int base2to10(std::string input);
std::string base10to2(std::string input);
int pow(const int x, const int y);

int main()
{
	std::string hold;
	bool going = true;
	while(going)
	{
		system("clear");
		switch(menu())
		{
			case 1:
				{
					system("clear");
					std::cout << "Please enter a number in base-10 to convert to base 2: ";
					std::getline(std::cin, hold);
					std::cout << "Result: " << base10to2(hold);
					std::cout << "\n\n PRESS ENTER TO CONTINUE: ";
					std::getline(std::cin, hold);
					break;
				}
			case 2:
				{
					system("clear");
					std::cout << "Please enter a number in base-2 to convert to base 10: ";
					std::getline(std::cin, hold);
					std::cout << "Result: ";
				       	if(base2to10(hold) < 0)
						std::cout << "Invalid Entry... Try Again";
					else
						std::cout << base2to10(hold);
					std::cout << "\n\n PRESS ENTER TO CONTINUE: ";
					std::getline(std::cin, hold);
					break;

				}
			case 3: going = false; break;
		}
	}
	return 0;
}
int menu()
{
	std::string h;
	std::cout << "Please Choose from the Following: \n1. Base 10 -> 2 \n2. Base 2 - > 10 \n3. Exit \n\n CHOICE: ";
	std::getline(std::cin, h);
	int r = atoi(h.c_str());
	if(r < 1 || r > 3)
	{
		std::cout << "Invalid Entry... Try again \n";
		return menu();
	}
	return r;
}
int base2to10(std::string input)
{
	int x = input.length() - 1;
	int y = 0;
	for(int i = x, k = 0; i >= 0; --i, ++k)
	{
		if(input[i] - '0' > 1 || input[i] - '0' < 0)
			return -1;
		y += (input[i]-'0')*pow(2, k);
	}
	return y;
}
std::string base10to2(std::string input)
{
	char s;
	int y = input.length();
	for(int j = 0; j < y; ++j)
	{
		if(input[j] <'0' || input[j] > '9')
			return "error... invalid enrty...";
	}
	int x = atoi(input.c_str());
	int n = 0;
	std::string hold = "";
	while(x/pow(2,n))
	{
		++n;
	}
	--n;
	for(int i = n; i >= 0; --i)
	{
		if(x >= pow(2,i))
		{	s = '1';
			hold.push_back(s);
			x -= pow(2,i);
		}
		else
		{
			s = '0';
			hold.push_back(s);
		}
	}	
	return hold;
}
int pow(const int x, const int y)
{
	if( y == 0 && x != 0 )
		return 1;
	else if (x == 0)
		return 0;
	int a = x, b = y;
	while(b > 1)
	{
		a *= x;
		--b;
	}
	return a;
}
