#include<stdio.h>
int main()
{
int a[100],n,sum=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum=sum+a[i];
printf("%d",sum);
return 0;
}
