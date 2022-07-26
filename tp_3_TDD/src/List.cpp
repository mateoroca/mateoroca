
#include "../include/List.h"



void List::showList()
    {
        for (int i = 0; i < cont; i++)
        {
            cout      << employees[i]->getWorkArea() << endl
                      << employees[i]->getName()  << endl
                      << employees[i]->getDni() << endl
                      <<"------------------"<<endl;

        }
    }

 void List::addEmployee(Employee* employee)
    {
        employees[cont] = employee;
        cont++;
    }    
    
    
string List::obtainWorkArea(int index)
    {
        string workArea = employees[index]->getWorkArea();
        return workArea;
    }   

int List::getCount(){
        return cont;
    }
