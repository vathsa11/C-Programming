#include<stdio.h>
void main()
{
	int mat[3][3];
	int i,j,r,c,sum=0;
	int *p;
	printf("Input elements in the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element-[%d],[%d]:",i,j);
			scanf("%d",(*(mat+i)+j));
		}
	}
	p=&mat[0][0];
	printf("\n\nThe matrix is:\n\n");
	for(r=0;r<i;r++)
	{
		for(c=0;c<j;c++)
		{
			printf("%d\t",*(p+(r*j)+c));
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			sum=sum+mat[i][j];
		}		
	}
	printf("\nSum of diagonal elements: %d",sum);
}
