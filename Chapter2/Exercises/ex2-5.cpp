#include <iostream>
#include <string>
#include <cstdlib>
//create a program to generates and validates checksums for isbn-13

int choice();
int generate(std::string h);
bool validate(std::string h);

int main()
{
	std::string hold = "";
	bool going = true;
	while (going)
	{
		system("clear");
		switch(choice())
		{
			case 1:
				{
					system("clear");
					std::cout << "Please enter a 12 digit string to generate a checksum: ";
					std::getline(std::cin, hold);
					int x = generate(hold);
						if (x < 0)
							std::cout << "Invalid input... ";
						else
						{
							std::cout << "Check digit is: " << x;
						}
					std::cout << "\n\n PRESS ENTER TO CONTINUE: ";
					std::getline(std::cin, hold);
					
				}
			case 2: 
				{
					system("clear");
					std::cout << "Please enter a 13 digit string to validate: ";
					std::getline(std::cin, hold);
					if(validate(hold))
					{
						std::cout << "Valid Checksum";
						std::cout << "\n\n PRESS ENTER TO CONTINUE: ";
						std::getline(std::cin, hold);
					} 
					else
					{
						std::cout << "Invalid Checksum";
						std::cout << "\n\n PRESS ENTER TO CONTINUE: ";
						std::getline(std::cin, hold);
					}
					break;
				}
			case 3: going = false; break;
		}
	}
	return 0;	
}
int choice()
{
	std::string h;
	std::cout << "Please Choose from the Following: \n1. Generate \n2. Validate \n3. Exit \n\n CHOICE: ";
	std::getline(std::cin, h);
	int r = atoi(h.c_str());
	if(r < 1 || r > 3)
	{
		std::cout << "Invalid Entry... Try again \n";
		return choice();
	}
	return r;
}
int generate(std::string h)
{
	int r = 0;
	char* s;
	s = new char;
	if(h.length() != 12)
	{
		delete s;
		return -1;
	}
	for(int i = 0; i < 12; ++i)
	{
		if( h[i] < '0' || h[i] > '9')
		{
			delete s;
			return -1;
		}
		else
		{
			*s = h[i];
			if(i%2)
				r += (atoi(s))*3;
			else
				r += (atoi(s));
		}
	}
	delete s;
	return (10-(r%10))%10;
}
bool validate(std::string h)
{
	int r = 0;
	char* s;
	s = new char;
	if(h.length() != 13)
	{
		std::cout << "invalid input";
		delete s;
		return false;
	}
	for(int i = 0; i < 12; ++i)
	{
		if( h[i] < '0' || h[i] > '9')
		{
			std::cout << "invalid input";
			delete s;
			return false;
		}
		else
		{
			*s = h[i];
			if(i%2)
				r += (atoi(s))*3;
			else
				r += (atoi(s));
		}
	}
	delete s;
	r = (10-(r%10))%10;
	return (h[12] - '0' == r);
}
