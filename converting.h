#define _CRT_SECURE_N0_WARNINGS                
#include "converting.h"                        


void converting() {                                  
	char int_string[80];                            
	int int_number;                                                          
	printf("Type the int numeric string (q - to quit): \n");
	gets(int_string);                             
	while (strcmp(int_string, "q") != 0) {       
		int_number = atoi(int_string);           
		printf("Converted number is %d\n", int_number);    
		printf("Type the int numeric string (q - to quit): \n");  
		gets(int_string);                     
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");          


	

	  
	char double_string[80];                         
	double double_number;                                                   
	printf("Type the double numeric string (q - to quit): \n");
	gets(double_string);                        
	while (strcmp(double_string, "q") != 0) {   
		double_number = atof(double_string);    
		printf("Converted number is %f\n", double_number);   
		printf("Type the double numeric string (q to quit) : \n");    
		gets(double_string);                         
	}
}