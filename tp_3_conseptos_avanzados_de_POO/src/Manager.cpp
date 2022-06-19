#include "../include/Manager.hpp"




void Manager::SaveEmployee(Employee* EMPLOYEE)
{
    ListEmployees->List.[ListEmployees->cont] = EMPLOYEE;
    ListEmployees->cont++;
    
}

void Manager::showEmployeesSales()
{
       for(int i = 0; i < ListEmployees->cont; i++)
       {  
           if(ListEmployees->List.[i].getWorkArea() == "sales")
           {
	  	      cout << ListEmployees->List.[i].name << endl
                   << ListEmployees->List.[i].dni  << endl
                   << ListEmployees->List.[i].WorkArea;
            i++;
           }
	   }
}

void Manager::showEmployeesMarketing()
{
     for(int i = 0; i < ListEmployees->cont; i++)
       {  
           if(ListEmployees->List.[i].getWorkArea() == "marketing")
           {
	  	    cout << ListEmployees->List.[i].name << endl
                 << ListEmployees->List.[i].dni  << endl
                 << ListEmployees->List.[i].WorkArea;
            i++;
           }
	   }
}

void Manager::showEmployeesProduction()
{
    for(int i = 0; i < ListEmployees->cont; i++)
       {  
           if(ListEmployees->List.[i].getWorkArea() == "production")
           {
	  	    cout << ListEmployees->List.[i].name << endl
                 << ListEmployees->List.[i].dni  << endl
                 << ListEmployees->List.[i].WorkArea;
            i++;
           }
	   }
}

void Manager::showAllEmployees()
{
    for(int i = 0; i < ListEmployees->cont; i++)
       {  
           cout << ListEmployees->List.[i].name << endl
                << ListEmployees->List.[i].dni  << endl
                << ListEmployees->List.[i].WorkArea;
            i++;
           
	   }
}







