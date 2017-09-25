#include<stdio.h>
int main()
{
        int a[3][5],b[3][5],c[3][5],i,j;
printf("Inputed values for A Matrix\n");
for(j=0;j<3;j++)
{
        for (i=0;i<5;i++)
        {
                printf("A[%d][%d]=",j,i);
                scanf("%d",&a[j][i]);
        }
        printf("\n");
}

printf("Inputed value is printed like matrix\n");
for(j=0;j<3;j++)
{
        for (i=0;i<5;i++)
        {
                printf("A[%d][%d]=",j,i);
                printf("%d\t",a[j][i]);
        }
        printf("\n");
}

printf("Inputed values for B Matrix\n");
for(j=0;j<3;j++)
{
        for (i=0;i<5;i++)
        {
                printf("B[%d][%d]=",j,i);
                scanf("%d",&b[j][i]);
        }
        printf("\n");
}
printf("Inputed value is printed like matrix\n");
for(j=0;j<3;j++)
{
        for (i=0;i<5;i++)
        {
                printf("B[%d][%d]=",j,i);
                printf("%d\t",b[j][i]);
        }
        printf("\n");
}
}

