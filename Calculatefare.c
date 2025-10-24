/*
Name:JEFF MURITHI.
Reg.No:CT101/G/26553/25.
Date:22nd October 2025.
Descrition:Calclating Fare.
*/

#include <stdio.h>

  float calculatefare(float distance){
	  return distance *50;
  }
  
  int main(){
  	float distance;
  	printf("Enter distance travelled(in km): \n");
  	scanf("%f",&distance);
  	
  	
  	printf("Total fare=KSH %.2f \n",calculatefare(distance));
 	 	  
	  return 0;
  }