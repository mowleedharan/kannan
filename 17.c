#include <stdio.h>
void main()
{
int n=0,num,sum=0,rem=0,count=0,n1;
scanf("%d",&num);
n1=n=num;
while(n!=0)
{
count++;
n=n/10;
}
while(n1!=0)
{
rem=n1%10;
sum=sum+pow(rem,count);
n1=n1/10;
}
if(sum==num)
{
printf("armstrong");
}
else
{
printf("not an armstrong");
}
return 0;
}
