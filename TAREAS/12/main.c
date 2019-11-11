#include <stdio.h>
#include <stdlib.h>
int APRETONES(int personas){
  int res;
  int z;
  if(personas==1){
    return 0;
  }else{
    z=APRETONES(personas-1)+(personas-1);
    return z;
  }
}
int main(int argc, char*argv[]) {
int a, ans;
a=atoi(argv[1]);
ans=APRETONES(a);
printf("%i\n",ans);
return 0;
}
