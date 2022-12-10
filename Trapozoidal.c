#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 1/(1+pow(x,2))

int main()
{
    float lower,upper,integration=0.0,stepsize,k;
    int i,subinterval;
//    clrscr()
    printf("\nEnter the lower limit of integration : ");
    scanf("%f",&lower);
    printf("\nEnter the upper limit of integration : ");
    scanf("%f",&upper);
    printf("\nEnter the number of subinterval : ");
    scanf("%d",&subinterval);
    printf("\n");
    stepsize=(upper-lower)/subinterval;
    integration=f(lower)+f(upper);
    for(i=1;i<=subinterval-1;i++)
    {
        k=lower+i*stepsize;
        integration=integration+2*f(k);
    }
    integration=(integration*stepsize)/2;
    printf("\nRequired value of integration is : %.3f",integration);
    getch();
    return 0;
}
