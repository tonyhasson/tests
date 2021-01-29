#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>


/*




//question 2:

int func(int* gematria, char * s);
void main()
{
	int gematria[] = { 1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800 };
	char s[] ="exam";
	printf("the sum is: %d", func(gematria, s));
}
int func(int* gematria, char* s)
{
	if (s[0] == '\0')
	{
		return(0);
	}
	else
	{
		return(gematria[s[0] - 97] + func(gematria, s + 1));
	}

}


*/




/*

//question 4:


int func(int* a, int n);
int binary(int low, int high, int* a);
void main()
{
	int a[] = { -1, -1, 0, 1, 2, 3, 4, 5, 6,7, 8, 9, 10, 11 };
	printf("the answer is: %d", func(a, sizeof(a) / sizeof(int)));
}
int func(int* a, int n)
{
	return(binary(0, n - 1, a));
}
int binary(int low, int high, int* a)
{
	if (high >= low)
	{
		int mid = (high + low) / 2;
		printf("\na[mid]=%d", a[mid]);
		if (a[mid] != a[mid + 1] && a[mid] != a[mid - 1])
		{
			return(binary(low, mid - 1, a));
			return(binary(mid + 1, high, a));
		}
		else
		{
			return(a[mid]);
		}
	}
}

*/




/*

//question 5:

#define R 4
#define C 4
void input_array(int a[][C]);
int func(int a[][C]);
void main()
{
	int a[R][C];
	input_array(a);
	printf("the answer is:%d", func(a));


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
	}
}


int func(int a[][C])
{
	int i, j,tf=1;
	int* count_arr = (int*)calloc(9, sizeof(int));
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (j + 2 <= C - 1 && i+2 <= R-1)
			{
				tf = 1;
				int temp_r = i + 2,temp_c=j+2,temp_i=i,temp_j=j;
				for (i=temp_i; i <= temp_r; i++)
				{
					for (j=temp_j; j <= temp_c; j++)
					{
						if (a[i][j] >= 1 && a[i][j] <= 9)
						{
							count_arr[a[i][j] - 1]++;
						}
					}
				}
				for (i = 0; i < 9; i++)
				{
					if (count_arr[i] !=1)
					{
						tf = 0;
					}
					
					
				}
				
				if (tf == 1)
				{
					return(1);
				}
				for (i = 0; i < 9; i++)
				{
					count_arr[i] = 0;

				}
				i = temp_i;
				j = temp_j;

			}

		}
	}
	return(tf);
}

*/
