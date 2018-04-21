// sorting two dimensional arrays.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

int main()
{
	int arr[4][4];

	
	for (int i = 0; i <=5; i++)
	{
		for (int k = 0; k <= 5; k++) {
			cout << "ENTER THE ARRAY DEATAILS PLEASE \n";
			cin >> arr[i][k];
				cout << endl;
		}
	}

	cout << "THE ARRAY BEFORE SORTING\n";
 
	for (int i = 0; i <=5 ; i++)
	{
		for (int k = 0; k <= 5; k++) {


			cout << "(" << arr[i][k] << "." << arr[i][k] << ")\t";
		}
	}

	int x;
	for (int k = 0; k <=5; k++)
	{
		for (int l = 0; l <= 5; l++)
		{
			for (int i = 0; i <= 5; i++)
			{
				for (int j = 0; j <= 5; j++)
				{
					if (arr[i][j] > arr[k][l]) {


					x = arr[k][l];
					arr[k][l] = arr[i][j];
					arr[i][j] = x;


					}
				}
			}
		}
	}


	cout << "the array after sorting: \n";

	int i = 0;
	while (i <= 5) {

		int j = 0;

			while (j <= 5)
			{


				cout << "(" << arr[i][j] << "." << arr[i][j] << ")\t";

				j++;
			}

			i++;
	}

	int c;
	for(;;)
	{
		cin >> c;
	}
    return 0;
}

