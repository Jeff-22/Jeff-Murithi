/*
Name:JEFF MURITHI.
Reg.No:CT101/G/26553/25.
Date:22nd October 2025.
Description:Converting Tempurature in Fahrenheit to Celcius.
*/

#include <stdio.h>

  float convertToCelcius(float fahrenheit){
	  return(fahrenheit-32)*5/9;
  }
  
  int main(){
  	float fahrenheit;
  	printf("Enter tempurature in farenheit: \n");
  	scanf("%f",&fahrenheit);
  	
  	printf("Tempuratue in celcius=%.2fc \n",convertToCelcius(fahrenheit));
	  
	  return 0;
  }
  
