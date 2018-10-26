#include<stdio.h>
#include<string.h>
int main()
{
	char str[50]="",str1[50];
	int c,i;

	FILE *fp1,*fp2,*fp3,*fp4;

	fp1=fopen("Capital.txt","w+");
	fp2=fopen("Small.txt","w+");
	fp3=fopen("Number.txt","w+");
	fp4=fopen("Operator.txt","w+");

	printf("Enter any Expresion: ");
	scanf("%s",str);
	printf("You entered the Expression as %s\n",str);

	c=strlen(str);
	printf("Length of String is %d\n",c);

	for(i=0;i<=c;i++)
	{
		int a=str[i];
		if(a>=65&&a<=90)
		{
			fprintf(fp1,"%c",str[i]);
		}	
		else if(a>=97&&a<=122)
		{
			fprintf(fp2,"%c",str[i]);		
		}
		else if(a>=48&&a<=57)
		{
			fprintf(fp3,"%c",str[i]);
		}	
		else
		{
			fprintf(fp4,"%c",str[i]);		
		}
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fp4);

	fp1=fopen("Capital.txt","r");
	fp2=fopen("Small.txt","r");
	fp3=fopen("Number.txt","r");
	fp4=fopen("Operator.txt","r");

	printf("The Capital Letters are: ");
	while(fscanf(fp1,"%s",str1)!=EOF)
	{
		printf("%s\n",str1);		
	}
	printf("The Small Letters are: ");
	while(fscanf(fp2,"%s",str1)!=EOF)
	{
		printf("%s\n",str1);		
	}
	printf("The Numbers are: ");
	while(fscanf(fp3,"%s",str1)!=EOF)
	{
		printf("%s\n",str1);		
	}
	printf("The Operators are: ");
	while(fscanf(fp4,"%s",str1)!=EOF)
	{
		printf("%s\n",str1);		
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fp4);
	
	return 0;
}
