#include <stdio.h>

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	insertionSort(int *arr, int n, int i)
{
	int *min;
	
	if (i >= n-1)
		return ;
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
	insertionSort(arr, n, ++i);
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
	insertionSort(arr, n, 0);
	displayArray(arr, n);
}