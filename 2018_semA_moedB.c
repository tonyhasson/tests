#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>








//question 1:

/*



int func(int num);
void main()
{
	int num = 98765;
	printf("func:%d", func(num));
}
int func(int num)
{
	if (num < 100)
	{
		if (num / 10 > num % 10)
		{
			return(-1);
		}
		else if(num/10<num%10)
		{
			return(1);
		}
	}
	else
	{
		if (func(num % 100) == 1 && func(num / 10) == 1)
		{
			return(1);
		}
		else if (func(num % 100) == -1 && func(num / 10) == -1)
		{
			return(-1);
		}
		else
		{
			return(0);
		}
	}
}

*/


//question 2:


/*

int func(int* a, int* b, int n);
void main()
{
	int a[] = {-3,1,10,21,22,31,40};
	int b[] = { -3,1,10,21,22,23,31,40 };
	int n = sizeof(a) / sizeof(int);
	int x = func(a, b, n);
	printf("the answer is: %d",x );

}
int func(int* a,int* b, int n)
{
	
	int low = 0, high = n - 1,mid,key=b[0]-1;
	while (high > low)
	{
		mid = (high + low) / 2;
		if (a[mid] == b[mid])
		{
			low = mid + 1;
			if (key != b[0] - 1)
			{
				
				return(key);
			}
		}
		else if (a[mid] != b[mid])
		{
			key = b[mid];
			high = mid - 1;
		}
		
	}
	return(key);
}

*/

//question 3:

/*

int limit_and_sort(int* a, int n, int m, int* p);
void main()
{
	int a[] = {11,7,5,4,5,4,3,201,5,3};
	int m=7, n=sizeof(a)/sizeof(int);
	int* b=(int*)calloc(m,sizeof(int));
	assert(b);
	int* p = b;
	int t = limit_and_sort(a, n, m, p);
	printf("\nt:%d", t);
	for (int i = 0; i < t; i++)
	{
		printf("\n%d", p[i]);
	}
	free(b);

}
int limit_and_sort(int* a, int n, int m, int* p)
{
	int* count_arr = (int*)calloc(m, sizeof(int));
	int i, j=0;
	assert(count_arr);
	for (i = 0; i < n; i++)
	{
		if (a[i] <= m)
		{
			count_arr[a[i] - 1]++;
			
		}
	}
	for (i = 0; i < m; i++)
	{
		if (count_arr[i] > 0)
		{
			
			p[j] = i + 1;
			count_arr[i] = 0;
			j++;
		}
	}
	free(count_arr);
	return(j);
}

*/


//question 4:


/*


int func(char* str1, char* str2);
void main()
{
	char str1[] = "a";
	char str2[] = "kabababa";
	printf("the answer is: %d", func(str1, str2));
}
int func(char* str1, char* str2)
{
	
	int i, j, tf, count = 0;
	for (i = 0; i <= strlen(str2) - strlen(str1); i++)
	{
		j = 0;
		tf = 1;
		while (str1[j] != '\0' && tf == 1)
		{
			
			if (str2[i + j] != str1[j])
			{
				tf = 0;
			}
			else
			{
				j++;
			}
		}
		if (tf == 1)
		{
			count++;
		}
	}
	return(count);
}

*/

//question 5:

/*



#define R 3
#define C 5

void print_array(int a[][C]);
void input_array(int a[][C]);
void func(int a[][C] , int b[][C] );
void main()
{
	int a[R][C], b[R][C];
	input_array(a);
	func(a, b);
	print_array(b);

}
void input_array(int a[][C])
{
	int i, j;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("enter to a[%d][%d]: ", i, j);
			scanf_s("%d", &a[i][j]);
		}
		if (i < R - 1)
		{
			printf("\nnew row\n");
		}
	}
}
void print_array(int a[][C])
{
	int i, j;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void func(int a[][C], int b[][C])
{
	int i, j, max = a[0][0];
	b[0][0] = a[0][0];
	for (i = 0; i < R; i++)
	{
		if (a[i][0] > max)
		{
			max = a[i][0];
		}
		b[i][0] = max;
	}
	max = a[0][0];
	for (j = 0; j < C; j++)
	{
		if (a[0][j] > max)
		{
			max = a[0][j];
		}
		b[0][j] = max;
	}
	for (i = 1; i < R; i++)
	{
		for (j = 1; j < C; j++)
		{
			if (a[i][j] >= b[i - 1][j] && a[i][j] >= b[i][j - 1])
			{
				max = a[i][j];
			}
			else if (b[i-1][j] >= a[i][j] && b[i-1][j] >= b[i][j - 1])
			{
				max = b[i - 1][j];
			}
			else if (b[i][j-1] >= b[i - 1][j] && b[i][j-1] >= a[i][j])
			{
				max = b[i][j - 1];
			}
			b[i][j] = max;
		}
	}
}

*/

