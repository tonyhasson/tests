#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

/*



//question 2:

int sequel(num);
void main()
{
	int num;
	printf("enter num: ");
	scanf_s("%d", &num);
	printf("\n sequel or not : %d", sequel(num));
}
int sequel(num)
{
	if (num < 10)
	{
		if (num % 2 == 0)
		{
			return(1);
		}
		else
		{
			return(0);
		}
	}
	else
	{
		if ((sequel(num % 10) - 1) % 2 == 0 && (sequel(num / 10) - 1) % 2 != 0 && (sequel(num / 100) - 1) % 2 == 0)
		{
			return(1);
		}
		else
		{
			return(0);
		}
	}
}
*/





/*

//question 3 bonus:


void input_array(int* a, int n);
int func(int*a, int n);
void main()
{
	int n;
	printf("enter n: ");
	scanf_s("%d", &n);
	int* a = calloc(n, sizeof(int));
	input_array(a, n);
	printf("the answer is: %d", func(a, n));
}
void input_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nenter a number: ");
		scanf_s("%d", &a[i]);
	}
}
int func(int*a, int n)
{
	int* count_arr = (int*)calloc(n, sizeof(int));
	int i,count_amount=0;
	for (i = 0; i < n; i++)
	{
		if (a[i] >= 0 && a[i] <= n - 1)
		{
			count_arr[a[i]]++;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (count_arr[i] > 0)
		{
			count_amount++;
		}
	}
	i = 0;
	while (count_amount > 0)
	{
		if (a[i] >= 0 && a[i] <= n - 1)
		{
			if (count_arr[a[i]] > 0)
			{
				count_amount--;
				count_arr[a[i]] = -1;
			}
		}
		i++;
	}
	return(i-1);
	
}
*/



/*



//question 4:
int func(int* a, int* b, int n);
void input_array(int* a, int n);
void main()
{
	int n;
	printf("enter n: ");
	scanf_s("%d", &n);
	int* a = calloc(n, sizeof(int));
	int* b = calloc(n, sizeof(int));
	input_array(a, n);
	printf("\nnew array:");
	input_array(b, n);
	printf("the answer is: %d", func(a,b, n));
}
void input_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nenter a number: ");
		scanf_s("%d", &a[i]);
	}
}
int func(int* a, int* b, int n)
{
	int i,j, count_spin = 0;
	for (i = 0; i < n; i++)
	{
		if (a[0] != b[i])
		{
			count_spin++;
		}
		else
		{
			i = n;
		}
	}
	
	for (i = 0; i + count_spin < n; i++)
	{
		if (a[i] != b[i + count_spin])
		{
			
			return(0);
			
		}
	}

	for (j=0;j<count_spin;j++)
	{
		if (a[i] != b[i - count_spin-1])
		{
			
			return(0);
		}
		i++;
	}
	return(1);
}

*/









//question 5:

/*

int* merge_arrays(int* a, int n, int* b, int t);
int* func(int* a, int n);
void input_array(int* a, int n);
void print_array(int* a, int n);
void main()
{
	int n;
	printf("enter n: ");
	scanf_s("%d", &n);
	int* a = calloc(n, sizeof(int));
	input_array(a, n);
	int *t=func(a, n);
	a = t;
	print_array(a, n);
	
}
void input_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nenter a number: ");
		scanf_s("%d", &a[i]);
	}
}
void print_array(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\n%d",a[i]);
		
	}
}
int* func(int* a, int n)
{
	int i, size;
	for (i = 0; i < n-1; i++)
	{
		if (a[i] > a[i + 1])
		{
			size = i;
			i = n;
		}
	}
	int* arr_left = (int*)calloc(size+1, sizeof(int));
	int* arr_right = (int*)calloc(n-(size+1), sizeof(int));
	int j = 0;
	i = 0;
	while (i < n||size+j<n)
	{
		if (i < size + 1)
		{
			arr_left[i] = a[i];
			i++;
		}
		else
		{
			arr_right[j] = a[i];
			j++;
			i++;
		}
	}
	

	return(merge_arrays(arr_left, size + 1, arr_right, n - (size + 1)));
	

}
int* merge_arrays(int* a, int n, int* b, int t)
{
		int* c = (int*)malloc((n + t) * sizeof(int));
		int i = 0, j = 0, k = 0;
		while (i < n && j < t)
		{
			
			if (a[i] < b[j])
			{
				c[k++] = a[i++];
			}
			else
			{
				c[k++] = b[j++];
			}
		}
		while (i < n)
		{
			c[k++] = a[i++];
		}
		while (j < t)
		{
			c[k++] = b[j++];
		}
		
		return c;
	
	
	
}

*/



//question 6:

/*

#define N 3
void print_array(int* a);
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
void print_array(int* a)
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
}
int func(int a[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i - 1 >= 0)
			{
				if (a[i][j] == a[i -1][j])
				{
					return(0);
				}
			}
			if (i + 1 <= N - 1)
			{
				if (a[i][j] == a[i + 1][j])
				{
					return(0);
				}
			}
			if (j - 1 >= 0)
			{
				if (a[i][j] == a[i][j-1])
				{
					return(0);
				}
			}
			if (j + 1 <= N - 1)
			{
				if (a[i][j] == a[i][j+1])
				{
					return(0);
				}
			}
			if (j + 1 <= N - 1 && i + 1 <= N - 1)
			{
				if (a[i][j] == a[i+1][j + 1])
				{
					return(0);
				}
			}
			if (j - 1 >= 0&& i - 1 >= 0)
			{
				if (a[i][j] == a[i-1][j - 1])
				{
					return(0);
				}
			}
			if (j - 1 >= 0 && i + 1 <= N - 1)
			{
				if (a[i][j] == a[i + 1][j - 1])
				{
					return(0);
				}
			}
			if (j + 1 <= N - 1 && i - 1 >= 0)
			{
				if (a[i][j] == a[i - 1][j + 1])
				{
					return(0);
				}
			}
		}
	}
	return(1);
}

*/
