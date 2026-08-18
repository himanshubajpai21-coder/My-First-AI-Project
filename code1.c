#include <stdio.h>

int main()
{

int a,b;

printf("ENTER THE NUMBER a : ");
scanf("%d",&a);

printf("ENTER THE NUMBER b : ");
scanf("%d",&b);

printf("THE ANSWER IS : %d\n",a^b);
printf("THE ANSWER IS : %d\n",a&b);
printf("THE ANSWER IS : %d\n",a|b);
printf("THE ANSWER IS : %d\n",a>>b);
printf("THE ANSWER IS : %d\n",a<<b);
printf("THE ANSWER IS : %d",~a);

    return 0;
}