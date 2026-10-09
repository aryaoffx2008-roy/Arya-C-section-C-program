#include<stdio.h>
int main()
{
int a,b;
char op ;
scanf("%d%d", &a,&b);
scanf("\n%c",&op);
switch (op)
{
case '+':
printf("sum=%d",a+b);
break;
case '-':
printf("diff=%d",a-b);
break;
case '*':
printf("prod=%d",a*b);
break;
case '/':
printf("divide=%d",a/b);
break;
case '%':
printf("modulus=%d",a%b);
break;
default:
printf("not a operator");
}
return 0;
}
