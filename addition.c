#include<stdio.h>
int Add(int x, int y)
{	
	while (y != 0)

	{
		int carry = x & y; 
		x = x ^ y; 
		y = carry << 1;
	}
	return x;
}

int main()
{   int x,y;
scanf("%d %d",&x,&y);
	printf("%d", Add(x,y));
	return 0;
}
