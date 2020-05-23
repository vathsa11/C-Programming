#include<stdio.h>
typedef struct
{
	char name[20],dept[5];
	int age,empno,sal;	
}employee;
void main()
{
	int i;
	employee e[20];
	for(i=0;i<20;i++)
	{
		printf("Enter employee name: ");
		scanf("%s",e[i].name);
		printf("Enter department name:");
		scanf("%s",e[i].dept);
		printf("Enter age:");
		scanf("%d",&e[i].age);
		printf("Enter phone number:");
		scanf("%d",&e[i].empno);		
		printf("Enter salary:");
		scanf("%d",&e[i].sal);
	}
	printf("\nName\tAge\tPhone Number\tDepartment\tSalary\n");
	for(i=0;i<20;i++)
	printf("%s\t%d\t%d\t%s\t%d\n",e[i].name,e[i].age,e[i].empno,e[i].dept,e[i].sal);
}
