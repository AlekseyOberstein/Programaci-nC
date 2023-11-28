#include <iostream>
#include <stdlib.h>
#include<time.h>
int main(void){
    int lista[7];      // lista de 15 numeros aleatorios de 0 a 7 sin repetirse
    bool elegidos[7]; // ¿ya salio ese numero? (del 0 al 7)
    int posibles=8;
    int contador,posicion;
    int i,j;
    srand(time(NULL));

    for (i=0; i<8; i++){
	
	 elegidos[i]=false;
	 } // Empieza que no se ha elegido ningun numero
	 
    for (i=0; i<8; i++) {
        posicion=rand()%posibles+1;  // elige al azar una posicion entre los no elegidos (de 1 a 21)
        j=0;
        contador=0; // cuenta los numeros no elegidos que encuenta.
        while (contador<posicion) {         // Cuenta las posiciones no elegidas
            if (!elegidos[j++])contador++;  // Si el numero ya fue elegido se ignora
        }
        j--; // Cuando encuentra la posicion hace un j++ de mas.
        elegidos[j]=true;   // se marca la posicion como elegida
        posibles--;         // hay una posicion "no elegida" menos
        lista[i]=j;         // La posicion dentro la lista de elegidos es el numero a guardar
        std::cout << "lista["<<i<<"]= "<< j << "\n";
    }
}
