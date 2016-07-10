#include<stdio.h>
int main()
{
int i,j,x[50],y[50],n,t;
printf("\n Enter the no of value : ");
scanf("%d",&n);
printf("enter the first set value : ");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
x[i]=y[i];
}
printf("enter the second set value : ");
for(j=0;j<n;j++)
{
scanf("%d",&x[j]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(y[i]>y[j])
{
t=x[i];
x[i]=x[j];
x[j]=t;
t=y[i];
y[i]=y[j];
y[j]=t;
}
else if(y[i]==y[i+1])
{
if(x[i]>x[j])
{
t=x[i];
x[i]=x[j];
x[j]=t;
}
}
}
}
for(i=0;i<n;i++)
{
printf("%d",x[i]);
}
return 0;
}
