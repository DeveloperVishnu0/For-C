#include<stdio.h>
#include<conio.h>
void main()
{
    float x[100],y[100],xp,yp=0,p;
    int i,j,n;
   // clrscr();
    printf("Enter no. of data : \n");
    scanf("%d",&n);
    printf("\nEnter data: \n");
    for(i=1;i<=n;i++)
    {
        printf("\nx[%d] = ",i);
        scanf("%f",&x[i]);
        printf("\ny[%d] = ",i);
        scanf("%f",&y[i]);
    }
    printf("\nEnter the interpolation point : ");
    scanf("%f",&xp);
    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=1;j<=n;j++)
        {
            if(i!=j)
                p*=((xp-x[j])/(x[i]-x[j]));
        }
        yp+=p*y[i];
    }
    printf("Interpolation value at %.3f is %.f.",xp,yp);
    getch();
}
