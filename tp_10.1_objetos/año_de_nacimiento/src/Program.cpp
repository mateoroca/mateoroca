#include "Program.h"

Program::Program()
{
    //ctor
}

Program::~Program()
{
    delete persona;
    cout << "objeto persona eliminado";
}

void Program::cargarDatos()
{
    string nombre;
    int diact,mesact,annoact,diadn,mesdn,annodn;


   cout << "ingrese el nombre:";
   cin  >> nombre;
   persona->setnombre(nombre);
   /////////////////////////////////
   cout << "ingrese el dia actual:";
   cin  >>diact;
   if(diact<=31)
   persona->setdiaact(diact);
   else cout<<"error"<<endl;
   /////////////////////////////////
   cout << "ingrese el mes actual:";
   cin  >> mesact;
   if(mesact<=12)
   persona->setmesact(mesact);
   else cout <<"error"<<endl;
   /////////////////////////////////
   cout << "ingrese el anio actual:";
   cin  >> annoact;
   persona->setannoact(annoact);
   ///////////////////////////////////////
   cout << "ingrese el dia de nacimiento:";
   cin  >> diadn;
   if(diadn<=31)
   persona->setdiadn(diadn);
   else cout <<"error"<<endl;
   ///////////////////////////////////////
   cout << "ingrese el mes de nacimiento:";
   cin  >> mesdn;
   if(mesdn<=12)
   persona->setmesdn(mesdn);
   else cout <<"error"<<endl;
   /////////////////////////////////////////
   cout << "ingrese el anio de nacimiento:";
   cin  >> annodn;
   persona->setannodn(annodn);
   /////////////////////////////////////////


}


 void Program::mostrarPersona()
 {
     cout << "nombre:"<< persona->getnombre()  <<endl
          << "edad:"  << persona->obtenerEdad()<<endl;

 }
