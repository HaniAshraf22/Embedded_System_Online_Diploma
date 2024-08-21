/*
 * main.c
 *
 *  Created on: Aug 15, 2024
 *      Author: First
 */
# include <stdio.h>
int main()  // Assignment of average of 6 number
{

	int b;
	int n;
	float a[n];
	float sum ,average;
	printf("Enter the numbers of data:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);


	for (b=0;b<n;++b)
	{
		printf("Enter the number:");
		fflush(stdin);fflush(stdout);
		scanf("%f", &a[b]);
		sum=sum+a[b];

	}
	average=sum/n;
	printf("the average is %2.2f", average);


}


