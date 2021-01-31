#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>



/*

//question 1:

double func(double* a, int n);
void main()
{
	double a[] = { 2.5,-5,10,-20,40 };
	int n = sizeof(a) / sizeof(double);
	printf("the answer is: %.2lf", func(a, n));
}
double func(double* a, int n)
{
	if (n == 2)
	{
		return(a[1] / a[0]);
	}
	else
	{
		double x = a[1] / a[0];
		if (x == func(a + 1, n - 1))
		{
			return(x);
		}
		else
		{
			return(0);
		}


	}
}


*/




/*

//question 2:


void func(int* a, int n);
void main()
{
	int a[] = { 15, 16, 16, 15, 14, 13, 12, 13, 14, 14 };
	int i,n = sizeof(a) / sizeof(int);
	func(a, n);
	for (i = 0; i < n; i++)
	{
		printf("\na[%d]=%d", i, a[i]);
	}
}
void func(int* a, int n)
{
	int min=a[0], max=a[0],i;
	for (i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	int* count_arr = (int*)calloc(max - min + 1, sizeof(int));
	for (i = 0; i < n; i++)
	{
		count_arr[a[i]-min]++;
	}
	int j = 0;
	for (i = 0; i < max-min+1; i++)
	{
		while (count_arr[i] > 0)
		{
			count_arr[i]--;
			a[j] = i + min;
			j++;
		}
	}

}

*/




/*



//question 3+bonus:





int bonus(int* a, int n, int key);
int func(int* a, int n, int* min);
void main()
{
	int a[] = { 1,2,3,4,9,15,26,13,8,5,-8 };
	int min,n = sizeof(a) / sizeof(int);
	int t = func(a, n, &min);
	int key =6 ;
	printf("the max pos is:%d the min value is: %d",t,min);
	printf("\nand the key pos is:%d", bonus(a, n, key));

}
int func(int* a, int n, int* min)
{
	int low = 0, high = n - 1, mid,pos;
	while (high >= low)
	{
		mid = (high + low) / 2;
		if (mid > 0 && mid < n - 1)
		{
			if (a[mid] > a[mid + 1] && a[mid] < a[mid - 1])//going down
			{
				high = mid - 1;
			}
			if (a[mid]<a[mid + 1] && a[mid]>a[mid - 1])//going up
			{
				low = mid + 1;
			}
			if (a[mid] > a[mid + 1] && a[mid] > a[mid - 1])
			{
				if (a[0] > a[n - 1])
				{
					*min = a[n - 1];
				}
				else if (a[0] < a[n - 1])
				{
					*min = a[0];
				}
				return(mid);
			}
		}
		else
		{
			if (mid == 0)
			{
				if (a[mid] > a[mid + 1])
				{
					*min = a[n - 1];
					return(mid);
					
				}
			}
			if (mid == n - 1)
			{
				if (a[mid] > a[mid - 1])
				{
					*min = a[0];
					return(mid);
				}
			}
		}
	}

	
}
int bonus(int* a, int n, int key)
{
	int min, max_pos = func(a, n, &min),low1=0,low2=n-1,high=max_pos,mid;
	while (high >= low1)
	{
		
		mid = (high + low1) / 2;
		if (a[mid] < key)
		{
			low1 = mid + 1;
		}
		else if (a[mid] > key)
		{
			high = mid - 1;
		}
		else
		{
			return(mid);
		}

	}
	high = max_pos;
	while (high <= low2)
	{
		mid = (high + low2) / 2;
		if (a[mid] < key)
		{
			low2 = mid - 1;
		}
		else if (a[mid] > key)
		{
			
			high = mid + 1;
		}
		else
		{
			return(mid);
		}
	}
	return(-1);
}
*/





//question 4:

/*

int func(char* s1, char* s2);
void main()
{
	char * s1 = "the books    a   r   e    h   e   re   ";
	char * s2 = "the books are here";
	printf("%d", func(s1, s2));
}
int func(char* s1, char* s2)
{
	int size_1 = strlen(s1), size_2 = strlen(s2), i=0, j=0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] != 32 && s2[j] != 32)
		{
			if (s1[i] != s2[j])
			{
				
				return(0);
			}
			i++;
			j++;
		}
		else
		{
			if (s1[i] == 32)
			{
				i++;
			}
			if (s2[j] == 32)
			{
				
				j++;
			}
		}
	}
	return(1);
	
}
*/






//question 5:

/*

#define N 4
void print_array(int a[][N]);
void input_array(int a[][N]);
void func(int a[][N]);
void main()
{
	int a[N][N];
	input_array(a);
	func(a);
	print_array(a);

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
void print_array(int a[][N])
{
	int i,j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
		
	}
}
void func(int a[][N])
{
	int i, temp;
	for (i = 0; i < N; i++)
	{
		temp = a[i][i];
		a[i][i] = a[i][N - 1 - i];
		a[i][N - 1 - i] = temp;
	}
}
