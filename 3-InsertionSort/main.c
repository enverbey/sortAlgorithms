#include <stdio.h>

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	insertionSort(int *arr, int n)
{
	int *min;
	
	for (int i=0; i<n-1; i++)
	{
		if (arr[i] > arr[i+1])
			for (int j=i; j>=0; j--)
			{
				if (arr[j] > arr[j+1])
				{
					swap(&arr[j], &arr[j+1]);
				}
				else
				{
					break ;
				}
			}
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
	insertionSort(arr, n);
	displayArray(arr, n);
}