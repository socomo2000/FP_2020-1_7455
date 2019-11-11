#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]) {//programa para sumar los digitos de un numero
int t, sum;//se declaran ambas variables
t=atoi(argv[1]);//se cambia de caracter a entero el primer argumento ingresado
sum=0;//ahi se guardaran los valores
while(t!=0){//cuando t valga cero se habra cumplido la suma de todos los digitos del numero
sum=sum+(t%10);//se suma el digito nuevo con el anterior usando el modulo obtenido del numero entre diez
t=(t/10);//para que el valor de t se vaya moviendo y no se sumen los mismo digitos
}
printf("%i\n", sum);//se muestra el resultado de la suma
return 0;
}
