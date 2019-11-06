#include <stdlib.h>
#include <stdio.h>
int main(int argc, char*argv[])
{
float x, y, t;
x=atof(argv[1]);//se convierte a flotante el primer argumento
t=x;//para poder multiplicar a x por si misma
y=atof(argv[2]);//se convierte a flotante el segundo argumento
while(y>1){//hasta que el contador llegue a 1 se detendra el programa
x=x*t;//para multiplicar el numero por si mismo tantas veces sea necesario
y=y-1;//contador para que el programa se detenga
}
printf("%.2lf\n",x);//el resultado tiene dos decimales
return 0;
}
