#include<stdio.h>

void selectionSort(int a[], int n);

// test the function
int main()
{
	int a[9] = { 3,4,3,1,200,399,333,22,90 };
	selectionSort(a, 9);
	return 0;
}

// selection sort method to sort the sequence from small to large
void selectionSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		//save the current position
		int position = i;
		for (int j = i; j < n; j++)
		{
			//find the smallest value's position from \
			current position to the end of the array.
			if (a[position] > a[j])
			{
				position = j;
			}
		}
		// move the smallest value to the left of the array.
		if (position != i)
		{
			int temp = a[i];
			a[i] = a[position];
			a[position] = temp;
		}
	}
}
