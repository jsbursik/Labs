#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE = 5;

void initialize(int array[][SIZE], int size);
void printCard(int bingo[][SIZE], int size);

int main()
{
	int card[SIZE][SIZE];

	srand(time(NULL));

	initialize(card, SIZE);

	card[2][2] = 'X';

	cout << " B  I  N  G  O" << endl;
	printCard(card, SIZE);
	
	return 0;
}

void initialize(int array[][SIZE], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < SIZE; col++)
		{
			switch (col)
			{
				case 0: array[row][col] = (rand() % 15) + 1;
					break;
				case 1: array[row][col] = (rand() % 15) + 16;
					break;
				case 2: array[row][col] = (rand() % 15) + 31;
					break;
				case 3: array[row][col] = (rand() % 15) + 46;
					break;
				case 4: array[row][col] = (rand() % 15) + 61;
					break;
				default:cout << "Error: Unknown col value: " << col << endl;
			}
		}
	}

	return;
}

void printCard(int bingo[][SIZE], int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < SIZE; col++)
		{
			cout.width(2);
			if ((row == 2) && (col == 2))
			{	
				cout << static_cast<char>(bingo[row][col]) << " ";
			}
			else
			{	
				cout << bingo[row][col] << " ";
			}
		}

		cout << endl;
	}

	return;
}
