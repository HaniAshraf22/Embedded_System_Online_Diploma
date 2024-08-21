/*
 * main.c
 *
 *  Created on: Aug 16, 2024
 *      Author: First
 */
# include <stdio.h>
int main()  // search an element in array
{

	int i,r,s, n;

	printf("Enter no of element:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);
	float a[n];
	for (i=1;i<=n ;i++)
	{
		printf("%d\t", i+10*i);
	}
	printf("\r\nEnter the element to be searched:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &r);
	s=r/10;
	printf("Numer found at location :%d", s);

}


