#include <iostream>
#include "./include/program.h"

using namespace std;

int main()
{
    program* Programa = new program;

    Programa->cargardatos();
    system("cls");
    Programa->mostraralumno();

    delete Programa;

    return 0;
}
