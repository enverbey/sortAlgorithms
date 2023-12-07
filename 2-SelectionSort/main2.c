#include <stdio.h>

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	selectionSort(int *arr, int n)
{
	int min_index;
	
	for (int i=0; i<n; i++)
	{
		min_index = i;
		for (int j=i; j<n; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		swap(&arr[i], &arr[min_index]);
	}
}

void	displayArray(int *arr, int n)
{
	printf("[ ");
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("]\n");
}

int main()
{
	int n;
	n = 5;

	int arr[5] = {3, 4, 5, 1, 2};

	displayArray(arr, n);
	selectionSort(arr, n);
	displayArray(arr, n);
}