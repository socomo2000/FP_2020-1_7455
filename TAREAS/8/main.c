#include <stdlib.h>
#include <stdio.h>
int main(int argc, char*argv[]) //programa para convertir de farenheit a centigrados
{
int x; //x puede ser entero porque solo se dara 1 o 0
double y, res;//para que los resultados salgan mas exactos se usa double
x=atoi(argv[1]);//se conviete x a numero entero
y=atof(argv[2]);//se conviete el segundo valor ingresaso a double
if(x==0){//en caso de que x valga cero se usará la siguiente formula
res=((y*9)/5)+32;//formula para convrtir de centigrados a farenheit
printf("%.2lf\n",res);//se muestra el resultado
}
if(x==1){//en caso de que x valga uno se usará la siguiente formula
res=((y-32)*5)/9;//formula para converir de farenheit a centigrados
printf("%.2lf\n",res);//se muestra el resultado
}
return 0;
}
