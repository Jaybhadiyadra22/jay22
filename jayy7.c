#include<stdio.h>

main()
{
	int x=2,y=9,z=1,xyz;
	xyz = (x*x)+(y*y)+(z*z)+(2*(x+y)*(y+z)*(z+x));
	printf("x+y+z=%d",xyz);
	}
