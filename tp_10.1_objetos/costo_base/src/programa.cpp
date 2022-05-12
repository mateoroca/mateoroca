#include "programa.h"
#include "articulo.h"
#include <iostream>
 using namespace std;

programa::programa()
{
    //ctor
}

programa::~programa()
{
    delete Articulo;

     cout << "se han eliminado los objetos"<<endl;
}

void programa::crearArticuloYcargarcostobase()
{

    float costob;

    cout << "ingrese el costo base del articulo:";
    cin >> costob;
    Articulo->setcostobase(costob);
}

 void programa::mostrarpvpdetal()
 {
     cout << "el pvp al detal es: "<< Articulo->pvpdetal()<<endl;

 }




void programa::mostrarpvpmayor()
{
    cout << "el pvp al mayor es:" <<Articulo->pvpmayor()<<endl;
}




void programa::menu()
{
    int opc;

     do{

  cout  <<"DIJITE EL NUMERO DE LA OPCION QUE DESEA REALIZAR:......"<<endl<<endl
        <<"|1|PVP AL MAYOR........................................"<<endl
        <<"|2|PVP AL DETAL........................................"<<endl
        <<"|0|SALIR..............................................."<<endl;

         cin>>opc;

        switch (opc)
        {
        case 1: system("cls");

         crearArticuloYcargarcostobase();
         mostrarpvpmayor();

            break;
        case 2: system("cls");

             crearArticuloYcargarcostobase();
             mostrarpvpdetal();

             break;
           default: if(opc<0||opc>2) cout << "opcion no encontrada intente de nuevo"<<endl<<endl;
            break;

        }

     }while(opc!=0);


}
