#include<stdio.h>
void main()
{
char string[50];
int a,length=0;
printf("Enter a string\n");
gets(string);
for(a=0;string[a]!='\0';a++)
{
length++;
}
printf("The length of a string");
printf("it is the length of%s=%d\n",string,length);

getch();
}
