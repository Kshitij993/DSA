#include<stdio.h>

void main()
{
 char a[30],*str;
 printf("\n enter the string \n");
 scanf("%[^\n]%*c",a);
 str=&a;
 int c=0;
 while(*str!='\0')
  {
   if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
     c+=1;
   str++;
  } 
 printf("No of vowels = %d",c);
 }
