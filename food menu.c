#include<stdio.h>
void main()
{
	int fd;
	printf("Please select a food item:\n");
	printf("1.Burger\n2.French Fries\n3.Pasta\n4.Pizza\n5.Sandwich\n");
	scanf("%d",&fd);
	switch(fd)
	{
		case 1: printf("Food Item : Burger\nPrice : Rs.129/-");
				break;
		case 2: printf("Food Item : French Fries\nPrice : Rs.99/-");
				break;
		case 3: printf("Food Item : Pasta\nPrice : Rs.179/-");
				break;
		case 4: printf("Food Item : Pizza\nPrice : Rs.239/-");
				break;
		case 5: printf("Food Item : Sandwich\nPrice : Rs.149/-");
				break;
		default: printf("Please enter a valid choice!");
	}	
}
