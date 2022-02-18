#include<stdio.h>
int main()
{
	char s1[100];
	char s2[100];
	printf("enter s1");
	scanf("%[^\n]s",s1);
int i;
for(i=0;s1[i]!='\0';i++)
{
	s2[i]=s1[i];
}

	
	printf("%s",s2);
}
