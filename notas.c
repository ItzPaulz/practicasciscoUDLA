#include <stdio.h>

int main(){
    int notas;
    printf ("Introduzca la nota del alumno: \n");
    scanf ("%d", &notas);


    if (notas < 5){
        printf ("Alumno se queda a supletorios");
        
        
    } else if (notas==6) {
        printf ("bien");
    } else if (notas==7 || notas ==8) {
        printf ("Notable");
    } else if (notas==9 || notas ==10) {
        printf ("SUPER BIEN DESTACABLE");
    } else {
        printf ("NOTA INEXISTENTE");
    }


} 
    
    
    