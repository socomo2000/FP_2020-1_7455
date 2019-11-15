#include <stdio.h>
#include <stdlib.h>
void imprimir(int x[], int y);
void intercambio(int *a, int *b);
void ordenar(int c[], int d);
int main(int argc, char *argv[]){
int n[argc-1];
for(int i=0; i<argc; i++){
n[i]=atoi(argv[i]);
}
ordenar(n,argc);
imprimir(n,argc);
return 0;
}
void imprimir(int x[], int y){
for(int i=1; i<y; i++){
printf("%i\n",x[i]);
}
}
void intercambio(int *a, int *b){
int aux;
aux = *a;
*a = *b;
*b = aux;
}
void ordenar(int x[], int y){
for(int i=y-1; i>0; i--){
for(int j=0; j<i; j++){
if(x[j]>x[j+1]){
intercambio(&x[j],&x[j+1]);
}
}
}
}
