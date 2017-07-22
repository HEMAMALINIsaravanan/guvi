#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("%d the number is the largest",a);
    else if(b>c)
    printf("%d the number is the largest",b);
    else
    printf("%d the number is the largets",c);
    return 0;
}
