#include <stdlib.h>
#include <stdio.h>
int main(int argc, char*argv[]) 
{
int x; 
double y, res;
x=atoi(argv[1]);
y=atof(argv[2]);
if(x==0){
res=((y*9)/5)+32;
printf("%.2lf\n",res);
}
if(x==1){
res=((y-32)*5)/9;
printf("%.2lf\n",res);
}
return 0;
}
