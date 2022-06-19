#include <iostream>
using namespace std;

class Manager 
{
  private:
     List* ListEmployees;
  public:
     
    void SaveEmployee(Employee*);
    void showEmployeesSales();
    void showEmployeesMarketing();
    void showEmployeesProduction();
    int numberOfEmployeesOnSales();
    int numberOfEmployeesOnMarketing();
    int numberOfEmployeesOnProduction();
    
};

int Manager ::numberOfEmployeesOnProduction()
{

 int production = 0;

    for(int i = 0; i < ListEmployees->cont ; i++)
    {   
        
        if(ListEmployees[i]->getWorkArea() == "sales")
         
         production++;
    }

    return production;


}

int Manager::numberOfEmployeesOnMarketing()
{
    int Marketing = 0;

    for(int i = 0; i < ListEmployees->cont ; i++)
    {   
        
        if(ListEmployees[i]->getWorkArea() == "sales")
         
         Marketing++;
    }

    return Marketing;
}

int Manager::numberOfEmployeesOnSales()
{
     int production = 0;

    for(int i = 0; i < ListEmployees->cont ; i++)
    {
        if(ListEmployees[i]->getWorkArea() == "sales")
         
         production++;
    }
    return production;

    
}

void Manager::SaveEmployee(Employee* EMPLOYEE)
{   

    ListEmployees[ListEmployees->cont] = EMPLOYEE;
    ListEmployees->cont++;


    
}

void Manager::showEmployeesSales()
{
       for(int i = 0; i < ListEmployees->cont; i++)
       {  
           if(ListEmployees[i]->getWorkArea() == "sales")
           {
	  	      cout   << ListEmployees[i]->getName()<< endl
                     << ListEmployees[i]->getDni() << endl
                     << ListEmployees[i]->getWorkArea();
            
           }
	   }
}

void Manager::showEmployeesMarketing()
{
     for(int i = 0; i < ListEmployees->cont; i++)
       {  
           if(ListEmployees[i].getWorkArea() == "marketing")
           {
	  	      cout << ListEmployees[i]->getName()<< endl
                   << ListEmployees[i]->getDni() << endl
                   << ListEmployees[i]->getWorkArea();
            
           }
	   }
}

void Manager::showEmployeesProduction()
{
    for(int i = 0; i < ListEmployees->cont; i++)
       {  
           if(ListEmployees[i].getWorkArea() == "production")
           {
	  	      cout << ListEmployees[i]->getName()<< endl
                   << ListEmployees[i]->getDni() << endl
                   << ListEmployees[i]->getWorkArea();
           }
	   }
}



class Employee 
{
private:
    int dni;
    string name;
    string WorkArea;
public:
    Employee(int,string,string);
    ~Employee();
    int getDni();
    string getName();
    string getWorkArea();
    
};


Employee::Employee(int DNI,string NAME,string WORKAREA)
{
   this-> dni      = DNI;
   this-> name     = NAME;
   this-> WorkArea = WORKAREA;
}

Employee::~Employee()
{
    
}

int Employee::getDni()
{
    return dni;
}

string Employee::getName()
{
    return name;
}

string Employee::getWorkArea()
{
    return WorkArea;
}




class List 
{
   public:
   
   
   Employee* List[100];
   int cont = 0;

 

   
   
};







int main()
 {

   Employee* pepe = new Employee(71717118181,"jose","marketing");
   Employee* tomy = new Employee(24353688288,"tomas","sales");
   Employee* ricky = new Employee(2356288288,"ricardo","production");

   Employee* tony = new Employee(123444118181,"antonio","marketing");
   Employee* pancho = new Employee(32728288288,"francisco","sales");
   Employee* mica = new Employee(62728288288,"micaela","production");

   Employee* sofi = new Employee(81717118181,"sofia","marketing");
   Employee* mili = new Employee(22728288288,"milagros","sales");
   Employee* facu = new Employee(42728288288,"facundo","production");


   Manager* manager = new Manager();

   manager->SaveEmployee(pepe);
   manager->SaveEmployee(pancho);
   manager->SaveEmployee(mica);
   manager->SaveEmployee(sofi);
   manager->SaveEmployee(mili);
   manager->SaveEmployee(facu);
   manager->SaveEmployee(tony);
   manager->SaveEmployee(tomy);

   cout << "employees of marketing:"<<endl; 
   manager->showEmployeesMarketing();

   cout << "employees of sales:"<<endl;
   manager->showEmployeesSales();

   cout << "employees of production:"<<endl;
   manager->showEmployeesProduction();

   cout << "number of employees for area:"<<endl;
   cout << "marketing:";
   manager->numberOfEmployeesOnMarketing();

   cout << "sales:";
   manager->numberOfEmployeesOnSales();

   cout << "production:";
   manager->numberOfEmployeesOnProduction();

   delete pepe;
   delete tomy;
   delete ricky;
   delete tony;
   delete pancho;
   delete mica;
   delete sofi;
   delete mili;
   delete facu;
   delete manager;
   

    return 0;
 }