#include<stdio.h>
//int length()
//{
//	int i,j;
//	char m[50];
//	printf("enter string: ");
//	gets(m);
//	for( i=0;m[i]!=0;++i)
//	{
//		
//	}
//	printf("reverse string is: ");
//	for( j=i;j>=0;j--)
//	{
//		printf("%c",m[j]);
//	}
//}
//int main()
//{
//	length();
//}

char s[100];
int i=0,j;
int reverse()
{
	if(i >= 0)
	{
		printf("%c",s[i]);
		i--;
		reverse();
	}
}
int main()
{
	printf("Enter any string you want to reverse : ");
	gets(s);
	for (i = 0; s[i] != 0; i++){
	}
	reverse();
}