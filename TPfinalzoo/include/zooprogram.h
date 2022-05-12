#ifndef ZOOPROGRAM_H_INCLUDED
#define ZOOPROGRAM_H_INCLUDED
#include <iostream>
#include "../include/animal.h"
#include "../include/ballena.h"
#include "../include/cocodrilo.h"
#include "../include/ganzo.h"
#include "../include/pelicano.h"
#include "../include/murcielago.h"
#include "../include/lovodemar.h"

using namespace std;

typedef struct
{
    animal* animals[100];
    int cont = 0;

}tzoo;



void nuevoanimalballena(tzoo& zoo);
void nuevoanimallovomarino(tzoo& zoo);
void nuevoanimalmurcielago(tzoo& zoo);
void nuevoanimalganzo(tzoo& zoo);
void nuevoanimalcocodrilo(tzoo& zoo);
void nuevoanimalpelicano(tzoo& zoo);
void destructordeanimales(tzoo& zoo);
void mostrarlista(tzoo& zoo);
void programazoo(tzoo& zoo);
void selecciondemamiferos(tzoo& zoo);
void selecciondeoviparos(tzoo& zoo);







#endif // ZOOPROGRAM_H_INCLUDED
