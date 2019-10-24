#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){ //para que sepa que hbrá mas argumentos
int s=1;//empieza en 0 porque ahí se guardará el valor de todos los argumentos muliplicados y al multipklicar cualquier numero por uno da ese mismo numero
int r, j, k;//variables a usar
	for (int i=1; i<argc; i++){//se va moviendo de lugar en la lista
		j=atoi(argv[i]);//se convierten los caracteres de la lista a enteros
		s=s*j;//se multiplican todos los valores de la lista y se guardan en la variable s
}
	for (int w=1; w<argc; w++){//como se debe excluir un elemento de la lista igual se va moviendo de lugar
		k=atoi(argv[w]);//se convierte el vcaracter a utlizar en entero
		r=s/k;//se divide el valor de la multiplicacion de todos los valores entre el valor que no se quiere multiplicar para que se cancelen
		printf("%i\n", r);//se imprime el valor obtenido y con el ciclo for se cambiara de lugar4 hasta que se llegue al ultimo elemento de la lista
}
return 0;
}
