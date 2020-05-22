#include<stdio.h>
int lcm(int m,int n);
void main()
{
	int a,b,res;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	res=lcm(a,b);
	printf("LCM of %d and %d = %d",a,b,res);
}
int lcm(int m,int n)
{
	static int i=1;
	if(i%m==0&&i%n==0)
	return i;
	else
	{
		i++;
		lcm(m,n);
		return i;
	}
}
