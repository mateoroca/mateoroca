#include <iostream>
#include "./include/Program.h"

using namespace std;

int main()
{
   Program* programa = new Program;

   programa->cargardatos();

   system("cls");

   programa->mostrardatos();


   delete programa;
    return 0;
}
