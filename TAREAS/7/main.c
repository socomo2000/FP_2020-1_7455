#include <stdlib.h>
#include <stdio.h>
int main(int argc, char*argv[])
{
float x, y, t;
x=atof(argv[1]);
t=x;
y=atof(argv[2]);
while(y>1){
x=x*t;
y=y-1;
}
printf("%.2lf\n",x);
return 0;
}
