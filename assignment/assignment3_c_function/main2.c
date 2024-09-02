/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: First
 */
# include "stdio.h"
int f=1;
void factorial(int s)
{
	if (s>0)
		{
		f=f*s;
	    s--;
       factorial(s);
		}

}
int main ()
{
	int a;
	printf("\nEnter a positive integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &a);
	factorial(a);
	printf("\n%d", f);


}


