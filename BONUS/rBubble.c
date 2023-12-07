#include <stdio.h>

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	bubble_sort(int *arr, int n)
{
	if (n <= 1)
		return ;
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i] > arr[i+1])
			swap(&arr[i], &arr[i+1]);
	}
	bubble_sort(arr, n-1);
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
	bubble_sort(arr, n);
	displayArray(arr, n);
}