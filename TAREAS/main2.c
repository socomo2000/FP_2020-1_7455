#include <stdlib.h>
int main(int argc, char*argv[]) 
{

	for (int i=1; i<argc; i++){
		int w;
		w=atoi(argv[i]);
		
		if(w%2==0){
		printf("argv=par %s\n", argv[i]);
	} else {
		printf("argv=non %s\n", argv[i]);
}
}
return 0;
}

