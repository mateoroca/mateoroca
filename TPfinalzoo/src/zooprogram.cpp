#include "..\include\zooprogram.h"

using namespace std;





void nuevoanimalballena(tzoo& zoo)
{
     string nombre;
     int codigo;
     bool reproduccion,come,dorm;

    zoo.animals[zoo.cont] = new ballena();
    cout << "escriba el nombre :";
    cin  >> nombre;
    zoo.animals[zoo.cont]->setnombre(nombre);
    cout << "escriba el codigo :";
    cin  >> codigo;
    zoo.animals[zoo.cont]->setcodigo(codigo);
    cout <<"ingrese '1' si el animal tiene crias sino '0': ";
    cin  >>reproduccion;
    zoo.animals[zoo.cont]->setreproduccion(reproduccion);
    cout <<"ingrese '1' si el animal esta comiendo sino '0': ";
    cin  >>come;
    zoo.animals[zoo.cont]->setcomer(come);
    cout << "ingrese '1' si el animal esta durmiendo sino '0': ";
    cin  >> dorm;
    zoo.animals[zoo.cont]->setdormir(dorm);

     zoo.cont++;

}

void nuevoanimallovomarino(tzoo& zoo)
{
     string nombre;
     int codigo;
     bool reproduccion,come,dorm;

    zoo.animals[zoo.cont] = new lovodemar();
    cout << "escriba el nombre :";
    cin  >> nombre;
    zoo.animals[zoo.cont]->setnombre(nombre);
    cout << "escriba el codigo :";
    cin  >> codigo;
    zoo.animals[zoo.cont]->setcodigo(codigo);
    cout <<"ingrese '1' si el animal tiene crias sino '0': ";
    cin  >>reproduccion;
    zoo.animals[zoo.cont]->setreproduccion(reproduccion);
    cout <<"ingrese '1' si el animal esta comiendo sino '0': ";
    cin  >>come;
    zoo.animals[zoo.cont]->setcomer(come);
    cout << "ingrese '1' si el animal esta durmiendo sino '0': ";
    cin  >> dorm;
    zoo.animals[zoo.cont]->setdormir(dorm);

     zoo.cont++;
}
void nuevoanimalmurcielago(tzoo& zoo)
{
    string nombre;
     int codigo;
     bool reproduccion,come,dorm;

    zoo.animals[zoo.cont] = new murcielago();
    cout << "escriba el nombre :";
    cin  >> nombre;
    zoo.animals[zoo.cont]->setnombre(nombre);
    cout << "escriba el codigo :";
    cin  >> codigo;
    zoo.animals[zoo.cont]->setcodigo(codigo);
    cout <<"ingrese '1' si el animal tiene crias sino '0': ";
    cin  >>reproduccion;
    zoo.animals[zoo.cont]->setreproduccion(reproduccion);
    cout <<"ingrese '1' si el animal esta comiendo sino '0': ";
    cin  >>come;
    zoo.animals[zoo.cont]->setcomer(come);
    cout << "ingrese '1' si el animal esta durmiendo sino '0': ";
    cin  >> dorm;
    zoo.animals[zoo.cont]->setdormir(dorm);

     zoo.cont++;
}
void nuevoanimalganzo(tzoo& zoo)
{
     string nombre;
     int codigo;
     bool reproduccion,come,dorm;

    zoo.animals[zoo.cont] = new ganzo();
    cout << "escriba el nombre :";
    cin  >> nombre;
    zoo.animals[zoo.cont]->setnombre(nombre);
    cout << "escriba el codigo :";
    cin  >> codigo;
    zoo.animals[zoo.cont]->setcodigo(codigo);
    cout <<"ingrese '1' si el animal tiene crias sino '0': ";
    cin  >>reproduccion;
    zoo.animals[zoo.cont]->setreproduccion(reproduccion);
    cout <<"ingrese '1' si el animal esta comiendo sino '0': ";
    cin  >>come;
    zoo.animals[zoo.cont]->setcomer(come);
    cout << "ingrese '1' si el animal esta durmiendo sino '0': ";
    cin  >> dorm;
    zoo.animals[zoo.cont]->setdormir(dorm);

     zoo.cont++;
}
void nuevoanimalcocodrilo(tzoo& zoo)
{
    string nombre;
     int codigo;
     bool reproduccion,come,dorm;

    zoo.animals[zoo.cont] = new cocodrilo();
    cout << "escriba el nombre :";
    cin  >> nombre;
    zoo.animals[zoo.cont]->setnombre(nombre);
    cout << "escriba el codigo :";
    cin  >> codigo;
    zoo.animals[zoo.cont]->setcodigo(codigo);
    cout <<"ingrese '1' si el animal tiene crias sino '0': ";
    cin  >>reproduccion;
    zoo.animals[zoo.cont]->setreproduccion(reproduccion);
    cout <<"ingrese '1' si el animal esta comiendo sino '0': ";
    cin  >>come;
    zoo.animals[zoo.cont]->setcomer(come);
    cout << "ingrese '1' si el animal esta durmiendo sino '0': ";
    cin  >> dorm;
    zoo.animals[zoo.cont]->setdormir(dorm);

     zoo.cont++;
}
void nuevoanimalpelicano(tzoo& zoo)
{
  string nombre;
     int codigo;
     bool reproduccion,come,dorm;

    zoo.animals[zoo.cont] = new pelicano();
    cout << "escriba el nombre :";
    cin  >> nombre;
    zoo.animals[zoo.cont]->setnombre(nombre);
    cout << "escriba el codigo :";
    cin  >> codigo;
    zoo.animals[zoo.cont]->setcodigo(codigo);
    cout <<"ingrese '1' si el animal tiene crias sino '0':";
    cin  >>reproduccion;
    zoo.animals[zoo.cont]->setreproduccion(reproduccion);
    cout <<"ingrese '1' si el animal esta comiendo sino '0':";
    cin  >>come;
    zoo.animals[zoo.cont]->setcomer(come);
    cout << "ingrese '1' si el animal esta durmiendo sino '0':";
    cin  >> dorm;
    zoo.animals[zoo.cont]->setdormir(dorm);

     zoo.cont++;
}

void destructordeanimales(tzoo& zoo)
{
    for(int i =0;i<zoo.cont;i++)
    {
        delete zoo.animals[i];
        cout << "animal eliminado"<<endl;
    }
}
void mostrarlista(tzoo& zoo)
{
    for(int i=0;i<zoo.cont;i++)
    {
      zoo.animals[i]->mostrarlistadeanimal();
    }
}


void programazoo(tzoo& zoo)
{

        int opc;

     do{

  cout  <<"DIJITE EL NUMERO DE LA OPCION QUE DESEA REALIZAR:......"<<endl<<endl
        <<"|1|AGREGAR ANIMAL DE TIPO MAMIFERO....................."<<endl
        <<"|2|AGREGAR ANIMAL DE TIPO OVIPARO......................"<<endl
        <<"|3|VER LISTA DE ANIMALES..............................."<<endl
        <<"|0|SALIR..............................................."<<endl;

         cin>>opc;

        switch (opc)
        {
        case 1: system("cls");

            selecciondemamiferos(zoo);

            break;
        case 2: system("cls");

            selecciondeoviparos(zoo);
              break;
        case 3: system("cls");

           mostrarlista(zoo);
             break;
           default: if(opc<0||opc>3) cout << "opcion no encontrada intente de nuevo"<<endl<<endl;
            break;

        }

     }while(opc!=0);

     destructordeanimales(zoo);
    // system("cls");

}

void selecciondemamiferos(tzoo& zoo)
{
    int opc;

     do{

  cout  <<"DIJITE EL NUMERO DE LA OPCION QUE DESEA REALIZAR:....."<<endl<<endl
        <<"|1|AGREGAR BALLENA............... ...................."<<endl
        <<"|2|AGREGAR MURCIELAGO................................."<<endl
        <<"|3|AGREGAR LOVO DE MAR................................"<<endl
        <<"|0|BACK..............................................."<<endl;

         cin>>opc;

        switch (opc)
        {
        case 1: system("cls");

            nuevoanimalballena(zoo);

            break;
        case 2: system("cls");

            nuevoanimalmurcielago(zoo);

        case 3: system("cls");

            nuevoanimallovomarino(zoo);
           break;
           default: if(opc<0||opc>3) cout << "opcion no encontrada intente de nuevo"<<endl<<endl;
            break;

        }

     }while(opc!=0);

     system("cls");

}

void selecciondeoviparos(tzoo& zoo)
{
   int opc;

     do{

  cout  <<"DIJITE EL NUMERO DE LA OPCION QUE DESEA REALIZAR:....."<<endl<<endl
        <<"|1|AGREGAR COCODRILO.................................."<<endl
        <<"|2|AGREGAR GANZO......................................"<<endl
        <<"|3|AGREGAR PELICANO..................................."<<endl
        <<"|0|BACK..............................................."<<endl;

         cin>>opc;

        switch (opc)
        {
        case 1: system("cls");

            nuevoanimalcocodrilo(zoo);

            break;
        case 2: system("cls");

            nuevoanimalganzo(zoo);

        case 3: system("cls");

            nuevoanimalpelicano(zoo);

           break;
           default: if(opc<0||opc>3) cout << "opcion no encontrada intente de nuevo"<<endl<<endl;
            break;

        }

     }while(opc!=0);

     system("cls");

}



