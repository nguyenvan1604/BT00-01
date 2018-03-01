#include <stdio.h>

void swap(void **p1, void **p2)
{
	void *tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int main()
{
	int a = 3, b = 4;
	int *p1 = &a, *p2 = &b;
	swap(&p1, &p2);

	float c=3.0, d=4.0;
	float *p3 = &c, *p4 = &d;
	swap(&p3, &p4);

    printf("a = %-2d, b = %-2d\n", *p1, *p2);
	printf("c = %.2f, d = %.2f", *p3, *p4);

	return 0;
}
