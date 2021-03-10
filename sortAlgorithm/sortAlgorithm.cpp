#include<stdio.h>

// selection sort from small to large
void selectionSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		//save the current position
		int position = i;
		for (int j = i; j < n; j++)
		{
			//find the smallest value's position from current position to the end of the array.
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

// bubble sort from small to large
void bubbleSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int exchange = 0;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				exchange = 1;
			}
		}
		if (0 == exchange)
			break;
	}
}

// insection sort from small to large
void insectionSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		//extract a[i]
		int value = a[i];
		int j = i - 1;
		//move the larger numbers back
		while (j >= 0 && a[j] > value)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		//insect a[i] in the right position
		a[j + 1] = value;
	}
}