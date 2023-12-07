#include <stdio.h>

void	displayArray(int *arr, int n)
{
	printf("[ ");
	for(int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("]\n");
}

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
//pivotu sondan seçersen
void	quickSort(int *arr, int n)
{
	int pivot = arr[n-1];
	
	int i = 0;
	for (int j=0; j<n; j++)
	{
		if (arr[j] < pivot)
		{
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[n-1]);

	if (n <= 2)
		return ;
	if ((i+1) == n || i==0)
	{
		quickSort(arr, n-1);
		return ;
	}
	quickSort(arr, i);
	for (int k=0; k<i; k++)
		++arr;
	arr++;
	quickSort(arr, n-i-1);
}


int main()
{
	int n;
	n = 10;

	int arr[10] = {25,10, 5, 30, 40, 2, 1, 18, 7, 50};

	displayArray(arr, n);
	quickSort(arr, n);
	displayArray(arr, n);
}