#include<stdio.h>
#include<conio.h>
void main()
{
int n=2,count=0;
int i,m;
printf("enter range:");
scanf("%d",&m);
while(n<m)
{
for(i=2;i<=n;i++)
{
if(n%2==0)
goto t;
printf("%d",n);
count++;
t:n++;
}
printf("number of prime numbers are %d",count);
getch();
}
