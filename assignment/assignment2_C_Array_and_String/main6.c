/*
 * main.c
 *
 *  Created on: Aug 20, 2024
 *      Author: First
 */
#include <stdio.h>
int main(){
	char text[100],ch ;
	int  i,frequency=0;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(text);
	printf("Enter the character to find the frequency:");
	fflush(stdin);fflush(stdout);
	scanf("%c", &ch);
	for (i = 0; text[i] != 0; ++i) {
	        if (ch == text[i]){
	            frequency= frequency+1;
	        }
	    }
	    printf("frequency of  %c = %d\n", ch, frequency);
	    return 0;
}




