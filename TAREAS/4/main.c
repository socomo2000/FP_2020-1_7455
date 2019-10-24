#include <stdlib.h> //para poder usar atof
#include <stdio.h>
float m; 
float y=0; //empieza en 0 xq ahí se guardaran y sumaran los valores
float promedio; //todas las variables las declaro como float ya que el resultado tambien debe ser float
int main(int argc, char*argv[]) { //así se dice que habrá argumentos de entrada
	for (int i=1; i<argc; i++){ //para que se vaya recorriendo un espacio, empieza en 1 porque el lugar 0 lo tiene./main
		m=atof(argv[i]); //como todos los argumentos ingresan como carcateres se usa atof para pasarlos a float
		y=y+m; //aqui se suman los vaklores y se guada dicha sum,a en la variable y
}
promedio=y/(argc-1); //se divide la suma entre la longitud del "vector" menos 1 porque no se toma en cuenta el espacio que ocupa ./main
printf("%.2lf\n", promedio); //se imprime el re3sultado con dos decimales de float

return 0; 
}
