#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double RAIZ(double x, double tol, double candidato){//funcion para sacar la raiz de un nuemro tomando en cuenta cierta tolerancia
  double division, diferencia, promedio;//declaramos variables
  division=x/candidato;//se divide el numero entre el primer candidato
  diferencia=fabs(division-candidato);//la diferencia sera el valor absoluto de la resta del resultato de la division y el candidato
  while(diferencia>tol){//mientras que dicha diferencia sea mayor que la tolerancia se hara lo siguiente
    division=x/candidato;//se repite la division del numero entre el candidato
    diferencia=fabs(division-candidato);//se vuelve a obtener la diferencia
    promedio=(candidato+division)/2;//se obtiene el promedio 
    candidato=promedio;//se cambia de candidato en caso de que siga sin cumplise la condicion 
  }
  return candidato;//la funcion regresa el candidato, o sea la raiz
}
int main(int argc, char*argv[]) {
double numero, tolerancia, ans, candidato;//se declaran las variables a utilizar
numero=atof(argv[1]);//el numero alque se le va a sacer la raiz es el primero que se mete
candidato=atof(argv[3]);//el numero con el que inicia el programa
tolerancia=atof(argv[2]);//la tolerancia es el segundo argumento que se mete
ans=RAIZ(numero, tolerancia, candidato);//se usa la funcion creada para obtener la raiz
printf("%lf\n",ans);//se muestra la raiz
return 0;
}
