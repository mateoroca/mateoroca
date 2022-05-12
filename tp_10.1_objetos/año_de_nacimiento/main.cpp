#include <iostream>
#include "./include/Program.h"

using namespace std;

int main()
{
    Program* programa = new Program;

    programa->cargarDatos();

    system("cls");

    programa->mostrarPersona();

    delete programa;

    return 0;
}
