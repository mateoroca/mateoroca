#ifndef EMPLOYEE_
#define EMPLOYEE_



#include <iostream>
using namespace std;

class Employee 
{
private:
   long long int dni;
    string name;
    string WorkArea;
public:
    Employee(int,string,string);
    ~Employee();
    int getDni();
    string getName();
    string getWorkArea();
};

#endif // DEBUG