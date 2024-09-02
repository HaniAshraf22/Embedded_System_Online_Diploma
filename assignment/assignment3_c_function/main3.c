/*
 * main.c
 *
 *  Created on: Aug 31, 2024
 *      Author: First
 */
# include "stdio.h"
void  reverse(char R[], int v)
{
	if (v>0)
	{
		v--;
	printf("%c", R[v]);
	reverse(R, v);
	}

}
int main()
{
	int s;
	char x[100];
	printf("Enter a sentence:");
	fflush(stdin); fflush(stdout);
	gets(x);
	printf("\nPlease enter the number of char:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &s);
	printf("\n");
	reverse(x, s);
}


