/*
Name:
Reg.No:
Date:
Description:
*/

#include <stdio.h>

   int main(){
   	int balance=1000;
   	int withdrawal;
   	
   	while(balance>0){
		   printf("Enter withdrawal amout:");
		   scanf("%d",&withdrawal);
		   balance-=withdrawal;
		   printf("Remaining balance:%d\n",balance);
	   }
	   
	   printf("Account balance is zero or negative.\n");
   	

	   
	   
	   return 0;
   }