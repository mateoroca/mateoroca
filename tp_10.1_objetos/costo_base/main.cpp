#include <iostream>
#include "./include/programa.h"

using namespace std;

int main()
{
   programa* Programa = new programa;

   Programa->menu();

   delete Programa;

    return 0;
}
