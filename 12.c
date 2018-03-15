#include<stdio.h>
int main()
{
int sum=0,a,i,n;
scanf("%d",&a);
i=a;
n=i;
while(i!=0)
{
n=i%10;
sum=(sum*10)+n;
i=i/10;
}
if(sum==a)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
