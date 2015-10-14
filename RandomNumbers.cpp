#include <iostream>
#include <ctime>
using namespace std;

const int N = 10;
const int M = 5;

void generateRandomNumbers(int array[M])
{
	int j;
	bool repeated;	

	for (int i = 0; i < M; i++)
	{
		do {			
			array[i] = rand() % N + 1;
			repeated = false;
			
			for (j = 0; j < i; j++)
			{
				if (array[j] == array[i])
				{
					repeated = true;
					break;
				}				
			}
		} while (repeated == true);		
	}
}

void main()
{
	int random[M];

	// seed the random generator with an initial value 
	// to produce different results at each run
	srand(time(NULL));

	generateRandomNumbers(random);
	
	for (int i = 0; i < M; i++)
	{
		cout << random[i] << endl;
	}

	system("pause");
}