#include <stdio.h>
#include <stdlib.h>
#include <math.h>//para poder usar la raiz
int main(int argc, char*argv[]) {//programa que usa la formula general para obtener las raics de un polinomio
double a, b, c, s, w, k, x1, x2, n, m, i1, i2, r1;//se declaran las variables a usar
a=atof(argv[1]);//el primer argumento de entrada que representa x^2
b=atof(argv[2]);//el segundo argumento de entrada que representa x
c=atof(argv[3]);//el tercer argumento de entrada que representa al termino independiente
if(a!=0){//la formula solo se puede usar cuando a es diferente de cero
s=2*a;//para usarlo más adelante(es la parte de abajo de la formula genertal)
w=(b*b)-(4*a*c);//se hace la partede adentro de la raiz
if(w>=0){//si la parte de adentro es positiva si se puede sacar la raiz real
k=sqrt(w);//se saca la raiz
x1=(b+k)/s;//se obtiene el resultado cuando se suma la raiz
x2=(b-k)/s;//se obtiene el resultado cuando se resta la raiz
if(x1==x2){//si ambos son iguales solo se muestra un resultado
printf("%.2lf\n",x1);//se muestra la raiz
}else{//en caso de que no sean iguales se muestran las dos raices
printf("%.2lf\n",x1);//se muestra la primera raiz
printf("%.2lf\n",x2);//se muestra la segunda raiz
}
}else{//en caso de que la parte de adentrode la raiz sea negativa, se tenrá que obtener la parte imaginaria y la real
n=(4*a*c)-(b*b);//se obtiene la parte de adentro de la raiz pero al reves para obtener un signo positivo esta vez
m=sqrt(n);//se ontiene la raiz
i1=m/s;//se divide el resultado entre la parte de abajo de la formula general
r1=b/s;//se obtiene la parte real de la raiz
printf("%.2lf+%.2lfi\n",r1,i1);//se muestra la primera raiz como la suma de la parte real mas la imaginaria
printf("%.2lf-%.2lfi\n",r1,i1);//se muestra la primera raiz como la suma de la parte real menos la imaginaria
}
}
  return 0;
}
