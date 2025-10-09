/*
Name:JEFF MURITHI.
Reg.No:CT101/G/26553/G.
Date:9th October 2025.
Description:Password Checker.
*/

#include <stdio.h>
#include <string.h>

   int main(){
   	char password[20];
   	
   do{
	   printf("Enter password:\n");
	   scanf("%s",password);
   }while(strcmp(password,"1234")!=0);
   
   
   printf("Access Granted\n");	
	     
	   return 0;
   }