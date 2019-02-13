#include<stdio.h>
void main()
{
int number,reverse=0,reminder,one;
printf("enter the number:");
scanf("%d",&number);
one=number;
while(number>0)
	{
		reminder=number%10;
		reverse=reverse*10+reminder;
		number=number/10;
	}
if(one==reverse)
	printf("%d is palindrome",reverse);
else
	printf("%d is not palindrome",reverse);
}

