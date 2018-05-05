// sudokusolver9000.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>     /* srand, rand */
using namespace std;

char x[9] = { { 'A' },{ 'B' },{ 'C' },{ 'D' },{ 'E' },{ 'F' },{ 'G' },{ 'H' },{ 'I' } };
char y[9] = { { '1' },{ '2' },{ '3' },{ '4' },{ '5' },{ '6' },{ '7' },{ '8' },{ '9' } };

void setnumbers(void)
{
	int sudoarr[9][9];
	bool sudoarrai[9][9];
	int n = 0;
	int rng = rand() % 9 + 1;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << x[i] << y[j] << ": ";
			cin >> n;
			sudoarr[i][j] = n;
			
			if (sudoarr[i][j] != 0)
			{
				sudoarrai[i][j] = true;
			}
 
		}
	}

	int p = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << sudoarr[i][j] << "";
			p++;
			if (p == 9)
			{
				cout << endl;
				p = 0;
			}
		}
	}


	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (sudoarr[i][j] == 0)
			{
				sudoarr[i][j] = rng;

			}

		}
	}

	//lasketaan..

	int ready = false;

	while (ready == false)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (sudoarr[i][j] == 0)
				{
					sudoarr[i][j] = rng;

				}

			}
		}

	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << sudoarr[i][j] << "";
			p++;
			if (p == 9)
			{
				cout << endl;
				p = 0;
			}
		}
	}

}


void dothemath(void)
{
	
}

int main()
{
	setnumbers();
    return 0;
}
