#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>




/*


//question 2:

int func(int *a,int n);
void main()
{
	int arr[] = { 2,0,2,0,2 };
	printf("the array is %d", func(arr, sizeof(arr) / sizeof(int)));
}
int func(int* a, int n)
{
	if (n == 1 || n == 0)
	{
		return(1);
	}
	else
	{
		if (a[0] == a[n - 1])
		{
			return(func(a + 1, n - 2));
		}
		else
		{
			return(0);
		}
	}

}

*/



/*


//question 3+bonus:

int func(int* a, int n);
int func_bonus(int* a, int n);
void main()
{
	int arr[] = { 1,0,2};
	printf("the array is %d and the amount needed is :%d", func(arr, sizeof(arr) / sizeof(int)), func_bonus(arr, sizeof(arr) / sizeof(int)));
}
int func(int* a, int n)
{
	int* count_arr = (int*)calloc(n, sizeof(int));
	int i,ezugi=0;
	for (i = 0; i < n; i++)
	{
		count_arr[a[i]]++;
	}
	if (n % 2 == 0)
	{
		for (i = 0; i < n; i++)
		{
			if (count_arr[i] % 2 == 1)
			{
				return(0);
			}
		}
		return(1);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (count_arr[i] % 2 == 1)
			{
				ezugi++;
			}
		}
		if (ezugi < 1 || ezugi>1)
		{
			return(0);
		}
		else
		{
			return(1);
		}
	}


}
int func_bonus(int* a, int n)
{
	if (func(a, n) == 1)
	{
		return(0);
	}
	else
	{
		int i, ezugi=0;
		int* count_arr = (int*)calloc(n, sizeof(int));
		for (i = 0; i < n; i++)
		{
			count_arr[a[i]]++;
		}
		for (i = 0; i < n; i++)
		{
			if (count_arr[i] % 2 == 1)
			{
				ezugi++;
			}
		}
		return(ezugi - 1);

	}
}

*/




/*

//question 4:

int func(int* a,int* b, int n);
void main()
{
	int a[] = { 0,1,2 };
	int b[] = { 6,5,1 };
	printf("the arrays are :%d", func(a,b,sizeof(a)/sizeof(int)));
}
int func(int* a,int* b, int n)
{
	
	if (a[n - 1] < b[n - 1])
	{
		return(1);
	}
	else
	{
		int i=0,j=n-1;
		while (i < n || j >= 0)
		{
			if (a[i] < b[j])
			{
				i++;
			}
			else if (a[i] > b[j])
			{
				j--;
			}
			else
			{
				return(0);
			}
		}
		return(1);
	}


}

*/



/*


//question 5:

int partition(int* a, int low, int high);
void quick_sort(int* a, int low, int high);
int func(int* a, int* b, int d,int n);
void main()
{
	int a[] = {1,-2,8,11,3};
	int b[] = {-3,20,4,15,2};
	int d = -6;
	int n = sizeof(a)/sizeof(int);
	printf("the answer is: %d", func(a, b, d,n));
}
int func(int* a, int* b, int d,int n)
{
	int i;
	quick_sort(b, 0, n - 1);
	for (i = 0; i < n; i++)
	{
		int key = d - a[i],high=n-1,low=0,mid;
		while (high >= low)
		{
			mid = (high + low) / 2;
			if (key > b[mid])
			{
				low = mid + 1;
			}
			else if (key < b[mid])
			{
				high = mid - 1;
			}
			else
			{
				return(1);
			}
		}
	}
	return(0);
}
int partition(int* a, int low, int high)
{
	int temp;
	int first = low;
	int pivot = a[first];
	while (low < high)
	{
		while (a[high] > pivot)
		{
			high--;
		}
		while (low < high && a[low] <= pivot)
		{
			low++;
		}
		if (low < high)
		{
			temp = a[low];
			a[low] = a[high];
			a[high] = temp;
		}
	}
	temp = a[first];
	a[first] = a[high];
	a[high] = temp;
	return(high);
}
void quick_sort(int* a, int low, int high)
{
	int pos;
	if (low < high)
	{
		pos = partition(a, low, high);
		quick_sort(a, low, pos - 1);
		quick_sort(a, pos + 1, high);
	}
}



*/



/*


//question 6:

#define N 3
void input_array(int a[][N]);
int func(int a[][N]);
void main()
{
	int a[N][N];
	input_array(a);
	printf("the answer is:%d", func(a));


}
void input_array(int a[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("enter to a[%d][%d]: ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}


int func(int a[][N])
{
	int i, j,size= 2 * N + 2;
	int* sum = (int*)calloc(size, sizeof(int));

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			sum[i] += a[i][j];
			sum[j + N] += a[i][j];
			if (i == j)
			{
				sum[size - 2] += a[i][j];
			}
			if (i + j == N - 1)
			{
				sum[size - 1] += a[i][j];
			}


		}
	}
	for (i = 0; i < size-1; i++)
	{
		if (sum[i] != sum[i + 1])
		{
			return(0);
		}
	}
	return(1);
	
}

*/
