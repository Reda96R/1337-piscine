#include "ft_point.h"
#include<stdio.h>
void set_point(int *point)
{
point->x = 42;
}
int main(void)
{
int point;
set_point(&point);
printf(point.x);
return (0);
}
