#include <stdio.h>
#include <stdlib.h>
int APRETONES(int personas){//funcion para decir numero de personas y regresar cuantos saludos hubo dentre ellas si no se repitieronm saludos(usando recursividad)
  int res;//declarar variables
  int z;
  if(personas==1){//en caso de que solo sea una perona no habrá saludos, este se usará como nuestro caso base
    return 0;//ya que no hay saludos, se regresa cero
  }else{//si es mas de una persona...
    z=APRETONES(personas-1)+(personas-1);//el resultdo es la suma de todos los naturales que anteceden al numero sin contar al numero
    return z;//se regresa dicha suma
  }
}
int main(int argc, char*argv[]) {//
int a, ans;
a=atoi(argv[1]);//se lee y transforma a int el numero ingresado
ans=APRETONES(a);//se usa la funcion para calcular el numero de apretones
printf("%i\n",ans);//se muestra el resultado
return 0;
}
