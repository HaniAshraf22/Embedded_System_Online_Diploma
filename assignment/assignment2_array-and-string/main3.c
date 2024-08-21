/*
 * main.c
 *
 *  Created on: Aug 16, 2024
 *      Author: First
 */
# include <stdio.h>
int main()       // assignment of user can enter the matrix and the program give the transposed
{
	int r,c ,i,s ;
	printf("enter the raw and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &r, &c);
	float a[r][c];
	float b[r][c];
	for (i=0; i<r; i++)
		{
			for (s=0;s<c;s++)
		    {
				printf(" enter a (%d , %d) : ", i ,s);
				fflush(stdin);fflush(stdout);
				scanf("%f", &a[i][s]);
			 }
		}
	printf("\r\nEnterd  Matrix \r\n");
	for (i=0; i<r; i++)
			{
				for (s=0;s<c;s++)
			    {
					printf("%2.2f\t ", a[i][s]);

				 }
				printf("\r\n");
			}
    printf("the transposed matrix is\r\n");
	for (i=0; i<c; i++)
			{
				for (s=0;s<r;s++)
			    {
					b[i][s]=a[s][i];
				 }
			}
	for (i=0; i<c; i++)
				{
					for (s=0;s<r;s++)
				    {
						printf("%2.2f\t", b[i][s]);
					 }
					printf("\r\n");
				}
	return 0;

}



