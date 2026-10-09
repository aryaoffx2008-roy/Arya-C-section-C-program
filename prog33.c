#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if ((a<b)&&(a<c))
{
printf("a is smallest number");
}
else if ((b<a)&&(b<c))
{
printf("b is smallest number");
}
else
{
printf("c is smallest number");
}
return 0;
}
