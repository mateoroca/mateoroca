#include<iostream>
 #include "../include/calculationHandler.h" 


calculationHandler::calculationHandler()
{
	
}


void calculationHandler::operateCalculator()
 {
   int opc,n1,n2;

	do{
	

	std::cout << "select the option that you want:" << std::endl
			  << "1- if you want pluss"             << std::endl
			  << "2- if you want subtract"          << std::endl
			  << "3- if you want divide"            << std::endl
			  << "4- if you want multiply"          << std::endl
			  << "0- to exit"                       << std::endl;
	 

	 std::cin >> opc;
	   
	   switch (opc)
	   {   
		   case 0 : 
		             exit(EXIT_SUCCESS);

	         break;
		   case 1 :  std::cout << "set the values you want to sum:";
		             std::cin  >>n1;
					 std::cin  >>n2;
					 CALCU.setn1(n1);
					 CALCU.setn2(n2);
					 system("cls");
					 std::cout << "result: ";
		             show(CALCU.suma());
		             std::cout << std::endl;
					 
		            
		   break;
			case 2 : std::cout << "set the values you want to subtract:";
		             std::cin  >>n1;
					 std::cin  >>n2;
					 CALCU.setn1(n1);
					 CALCU.setn2(n2);
					 system("cls");
					 std::cout << "result: ";
			         show(CALCU.resta());
					 std::cout << std::endl;
					  
			         
		   break;
			case 3 : std::cout << "set the values you want to divide:";
		             std::cin  >>n1;
					 std::cin  >>n2;
					 CALCU.setn1(n1);
					 CALCU.setn2(n2);
					 system("cls");
					 std::cout << "result: ";
			         show(CALCU.divicion());
					 std::cout << std::endl;
					  
		   break;
			case 4:  std::cout << "set the values you want to multiply:";
		             std::cin  >>n1;
					 std::cin  >>n2;
					 CALCU.setn1(n1);
					 CALCU.setn2(n2);
					 system("cls");
			         std::cout << "result: ";
					 show(CALCU.multiplicacion());
					 std::cout << std::endl;
					  
		   break;
		   default: std::cout << "error option not found";
		   break;
	   }
	
     }while(opc!=0);

 
	
}


