#include<stdio.h>
void main()
{
int number,reminder,armstrong=0,first;
printf("enter the number:");
scanf("%d",&number);
first=number;
while(number>0)
	{
		reminder=number%10;
		armstrong=armstrong+reminder*reminder*reminder;
		number=number/10;
	}
if(first==armstrong)
	printf("%d is an armstrong number",first);
else
	printf("%d is not an armstrong number",first);
} 
