#include<stdio.h>
struct p{
int coeff;
  int exp;
};
int m,i;
struct p a[20];
void read(struct p a[20] , int m ){
printf("Enter a coefficient(constant first) :");
for(i=0;i<=m;i++){
scanf("%d",&a[i].coeff);
a[i].exp=i;
}
}
void disp(struct p a[20],int m){
printf("\nThe polynomial is : ");
for(i=m;i>0;i--){
printf("%dx^%d+\t",a[i].coeff,a[i].exp);
}
if(i==0)
printf("%d\t",a[i].coeff,a[i].exp);
}
void main(){
printf("\n\t\tPOLYNOMIAL");
printf("\n\t\t=========");
printf("\nEnter the degree of the polynomial:");
scanf("%d",&m);
read(a,m);
disp(a,m);
}
