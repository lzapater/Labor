#include "Persona.h"
#include "Estudiante.h"
#include "Empleado.h"

int main()
{
    Persona raul("Raul Pinto", 25, 48152236);
    raul.Print();
    printf("\n");

    Estudiante jose("Jose Oporto", 18, 64653320, "Gotitas del saber", 101);
    jose.Print();
    printf("\n");

    Empleado pedro("Pedro Gonzales", 36, 64653320, "enlacamatodoeldia", 1200);
    pedro.Print();
    printf("\n");

    return 0;
}
