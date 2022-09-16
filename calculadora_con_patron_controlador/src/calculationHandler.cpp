
 #include "../include/calculationHandler.h" 


calculationHandler::calculationHandler()
{
	
};


void calculationHandler::operateCalculator()
 {
   int opc,n1,n2;

	do{
	

	std::cout << "select the option that you want:" << std::endl
			  << "1- if you want pluss"              << std::endl
			  << "2- if you want subtract"          << std::endl
			  << "3- if you want divide"            << std::endl
			  << "4- if you want multiply"          << std::endl;
	 

	 std::cin >> opc;
	   
	   switch (opc)
	   {
		   case 1 :  std::cout << "set the values you want to sum:";
		             std::cin  >>n1;
					 std::cin  >>n2;
					 CALCU.setn1(n1);
					 CALCU.setn2(n2);
		             SHOW.show(CALCU.suma());
		             
		            
		   break;
			case 2 : 
			         SHOW.show(CALCU.resta());
			         
		   break;
			case 3 : 
			         SHOW.show(CALCU.divicion());
		   break;
			case 4:  
			         SHOW.show(CALCU.multiplicacion());
		   break;
		   default: std::cout << "error";
		   break;
	   }
	
   }while(1<opc||opc>4);

 
	
}


