# include <stdio.h>

int main()
{

int x,y,z,max;
printf("enter the value of x  :");
scanf("%d",&x);

printf("enter the value of y : ");
scanf("%d",&y);

printf("enter the value of z : ");
scanf("%d",&z);

max =(x>y)?((x>z)?x:z) : ((y>z)?y:z);
printf("the larger of the given no is : %d" , max);


    return 0;

}