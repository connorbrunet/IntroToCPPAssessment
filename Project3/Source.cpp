#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	{
		{
			srand((unsigned)time(0));
			int randomInteger;
			int lowest = 1, highest = 100;
			int range = (highest - lowest) + 1;
			for (int index = 0; index<20; index++) 
			{
				randomInteger = lowest + int(range*rand() / (RAND_MAX + 1.0));
				cout << randomInteger << endl;
			}
		}
	}

	system("pause");
}