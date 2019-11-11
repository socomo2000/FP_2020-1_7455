#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]) {
int t, sum;
t=atoi(argv[1]);
sum=0;
while(t!=0){
sum=sum+(t%10);
t=(t/10);
}
printf("%i\n", sum);
return 0;
}
