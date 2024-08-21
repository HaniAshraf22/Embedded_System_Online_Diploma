/*
 * main.c
 *
 *  Created on: Aug 15, 2024
 *      Author: First
 */
#include <stdio.h>
int main()                       // assignment of sum of Tow array
{
	float a[2][2];
	float b [2][2];
	float s[2][2];
	int r,c;
	printf("Enter the element of 1st matrix\r\n ");
	for (r=0; r<2; r++)
	{
		for (c=0;c<2;c++)
	    {
			printf(" enter a (%d , %d) : \n", r ,c);
			fflush(stdin);fflush(stdout);
			scanf("%f", &a[r][c]);
		 }
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%2.2f\t", a[r][c]);
		}
		printf ("\r\n");
	}
	printf("Enter the element of 2st matrix\r\n ");
	for (r=0; r<2; r++)
		{
			for (c=0;c<2;c++)
		    {
				printf(" enter b (%d , %d) : \n", r ,c);
				fflush(stdin);fflush(stdout);
				scanf("%f", &b[r][c]);
			 }
		}
	for(r=0;r<2;r++)
	{
			for(c=0;c<2;c++)
			{
				printf("%2.2f\t", b[r][c]);
			}
			printf ("\r\n");
	}
	printf("sum of matrix\r\n ");
	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			s[r][c]=a[r][c]+b[r][c];
			printf(" %2.2f\t", s[r][c]);
		}
		printf ("\r\n");
	}

	return 0;
}

