#include <stdio.h>

int main()
{
    float euros;
    
    printf ("Introduce los euros que quieras convertir:  \n");
    scanf ("%f", &euros);

    printf (" %2.f euros equivalen a %2.f pesetas\n" ,euros, euros*233.6);


    

    return 0;
}
