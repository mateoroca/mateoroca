#include <iostream>
using namespace std;


template <typename T>
T GetMax (T a, T b) {  
return (a>b)? a : b;
 
}

template<typename T, typename Y>
T getMin(T a,Y b)
{
    return (a<b)? a : b;
}


int main(int argc, const char** argv)
 {
    

   

   cout << "el mas grade es:";

   cout << GetMax<int>(100,5);

   cout << endl;

   cout << "prueba con distintos tipos";

   cout << endl;

   cout << "el de menor valor es : ";

   cout << getMin<char,float>('f',2.5);




    return 0;
}

