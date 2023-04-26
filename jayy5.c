#include<stdio.h>

main()
{
	int x=2,y=9,z=1,xyz;
	xyz = (x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
	printf("x+y+z=%d",xyz);
	}
