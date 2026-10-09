#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf("%d,%d,%d",a,b,c);
if (a>(b*75)+(c*50))
{
printf("boat will stable");
}

else(a<(b*75)+(c*50));
{
printf("boat will drown");
}

}
