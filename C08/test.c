#define TEST ("%d", i);
#include<stdio.h>
int	main()
{
#ifndef TEST
	printf ("NOT");
#else
	printf("DEFINED");
#endif
}
