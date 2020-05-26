#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char inp[20],ch,d;
	int i,n;
	fp1=fopen("reverse.txt","w");
	printf("Enter text:\n");
	scanf("%s",inp);
	fprintf(fp1,"%s",inp);
	fclose(fp1);
	fp1=fopen("reverse.txt","r");
	fseek(fp1,0,SEEK_END);
	n=ftell(fp1);
	i=0;
	while(i<n)
	{
		i++;
		fseek(fp1,-i,SEEK_END);
		ch=fgetc(fp1);
		printf("%c",ch);
	}	
	fclose(fp1);
	fp1=fopen("reverse.txt","r");
	fp2=fopen("copy.txt","w");
	while((d=fgetc(fp1))!=EOF)
	fputc(d,fp2);
	printf("\nContents of file 1 copied to file 2");
	fclose(fp1);
	fclose(fp2);
}
