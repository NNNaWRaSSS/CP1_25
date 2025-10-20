#include <stdio.h>
#define POWER1(l, b) ((l) * (b))

int main()
{
	int l1 = 10, l2 = 5, area;

	area = POWER1(l1, l2);

	printf("Area of rectangle is: %d", area);

	return 0;
}