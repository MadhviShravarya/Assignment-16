#include<stdio.h>
#include<conio.h>
int main()
{
int m1[3][3],m2[3][3],add[3][3],i,j;
printf("Enter first matrix elements(any 9 numbers)\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&m1[i][j]);
}
}
printf("Enter second matrix elements(any 9 numbers)\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&m2[i][j]);
}
}
printf("\n");
printf("Resultant matrix is as follows\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
add[i][j]=m1[i][j]+m2[i][j];
printf("%d ",add[i][j]);
}
printf("\n");
}
getch();
}
