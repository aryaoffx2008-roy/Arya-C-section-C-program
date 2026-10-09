#include<stdio.h>
int main()
{
int mark;
scanf("%d",&mark);
if (100>=mark && mark>=91)
{
printf("the grade is A");
}
else if(90>=mark && mark>70)
{
printf("the grade is B");
}
else if(70>=mark && mark>50)
{
printf("the grade is C");
}
else 
{
printf("the grade is D");
}
return 0;
}
