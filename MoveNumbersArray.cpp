#include <iostream>
using namespace std;

const int N = 10;

// we could use an extra array as an argument for the rearranged integers
// so we wouldn't have to change the initial one
void rearrange_array(int integers[N], int M)
{
	int rearranged[N];

	for (int i = 0; i < N; i++)
	{
		if (i < M)
		{			
			rearranged[N - M + i] = integers[i];
		}
		else
		{
			rearranged[i - M] = integers[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		integers[i] = rearranged[i];
	}
}

void main()
{
	int ints[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	rearrange_array(ints, 3);

	for (int i = 0; i < N; i++)
	{
		cout << ints[i] << endl;
	}

	system("pause");
}