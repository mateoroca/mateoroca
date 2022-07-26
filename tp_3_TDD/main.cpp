
#include"./include/Manager.h"



int main()
 {


   // 1 er primer parte del test

   Employee* pepe = new Employee(71717118181,"jose","marketing");

   //fin de la primera parte 

   Employee* tomy = new Employee(24353688288,"tomas","sales");
   Employee* ricky = new Employee(2356288288,"ricardo","production");

  
   Employee* pancho = new Employee(32728288288,"francisco","sales");
   Employee* mica = new Employee(62728288288,"micaela","production");

   Employee* facu = new Employee(42723435567,"facundo","production");

   // 2 da parte  del test
   Manager* manager = new Manager();
  
  
  manager->SaveEmployee(pepe);
  manager->SaveEmployee(tomy);
  manager->SaveEmployee(ricky);
  manager->SaveEmployee(pancho);
  manager->SaveEmployee(mica);
  manager->SaveEmployee(facu);


   // fin de la segunta parte del test
 
  
  cout << "employees of marketing:"; 
  cout << manager->numberOfEmployeesOnMarketing();   // 3 ra parte del test

   cout << endl;

  cout << "employees of sales:";
  cout << manager->numberOfEmployeesOnSales();
   cout << endl;

  cout << "employees of production: ";
  cout << manager->numberOfEmployeesOnProduction();

   cout << endl;
   cout << endl;
                               // fin de la tercera parte del test

    //4 ta parte del test

  manager->showEmployees();

  // fin del test
     
   delete pepe;
   delete tomy;
   delete ricky;
   delete pancho;
   delete mica;
   delete facu;
   delete manager;
   

    return 0;
 }