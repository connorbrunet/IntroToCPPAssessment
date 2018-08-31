#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

	{
		char input;
		int randomInteger;
		int lastGuess;
		int firstUserInput;
		char secondUserInput;

		do
		{
			std::cout << "think of a number, input 'c' or 'C' when ready" << std::endl;
			std::cin >> input;
			system("cls");
		} while (input != 'c' && input != 'C');

		while (input == 'c' || input == 'C');
		{
			{
		
				int lowest = 1, highest = 100;
				int range = ((highest - lowest) + 10);
				randomInteger = lowest + int(range*rand() / (RAND_MAX + 1.0));
				std::cout << randomInteger << std::endl;

				std::cout << "is this your number? enter '1' for yes or '2' for no." << std::endl;
				std::cin >> firstUserInput;
			}
			if (firstUserInput == 2)
			{
				std::cout << "is your number greater '>' or less than '<' the current guess?" << std::endl;
				std::cin >> secondUserInput;
				if (secondUserInput == '<')
				{

				}
				if (secondUserInput == '>')
				{

				}

				//i cannot
			}
		}

	}


	system("pause");
}