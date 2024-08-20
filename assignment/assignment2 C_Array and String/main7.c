/*
 * main.c
 *
 *  Created on: Aug 20, 2024
 *      Author: First
 */
#include <stdio.h>
int main(){
	char string[100];
	int i,length=0;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
    gets(string);
    for (i=0;string[i]!=0;i++)

    {
    	length=length+1;
    }
    printf("%d", length);
    return 0;
}

