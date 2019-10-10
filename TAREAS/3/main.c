#include <stdlib.h>
#include <stdio.h>
int main(int argc, char*argv[]) 
{
	float s, r, m, d, n1, n2;
	n1 = atof(argv[1]);
	n2 = atof(argv[2]);
	s = n1+n2;
	r = n1-n2;
	m = n1*n2;
	d = n1/n2;
	printf("%.2lf\n", s);
	printf("%.2lf\n", r);
	printf("%.2lf\n", m);
	printf("%.2lf\n", d);
return 0;
}
