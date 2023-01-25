#include<stdio.h>
int i;
void disp(int a[],int m)
{
printf("\nThe polynomial is : ");
for( i=m;i>=0;i--)
{
if(a[i]!=0&&i!=0)
printf("%dx^%d+",a[i],i);
else if(i==0)
printf("%d",a[i]);
}
}

void main()
{
int a[20],b[30],m,n;
printf("\nEnter the degree of first polynomial : ");
scanf("%d",&m);
printf("\nEnter the coefficients(enter constant first): ");
for(i=0;i<=m;i++)
scanf("%d",&a[i]);
disp(a,m);
printf("\nEnter the degree of second polynomial  : ");
scanf("%d",&n);
printf("\nEnter the coefficients(enter constant first) : ");
for(i=0;i<=n;i++)
scanf("%d",&b[i]);
disp(b,n);
}
