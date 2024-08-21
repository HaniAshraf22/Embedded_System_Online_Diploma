/*
 * main.c
 *
 *  Created on: Aug 20, 2024
 *      Author: First
 */
#include <stdio.h>
int main(){  // reverse string without strlen() function
	char string[100];
	string[0]='\0';
	//char reverse[100];
	int i;
	unsigned  L=0;
	int d;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
    gets(&string[1]);

    for (i=1;string[i]!=0;i++)

    {
    	L=L+1;
    }
    printf("length is: %d\r\n", L);
    printf("Reverse string is:");
    for (d=L;d<=L;d--)
    {
    	printf("%c", string[d]);
    }
    return 0;
}


