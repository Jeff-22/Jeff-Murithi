/*
Name:JEFF MURITHI.
Reg.No:CT101/G/26553/25
Date:1st October 2025.
Description:Mobile Data Bundle Purchase.
*/

#include <stdio.h>
    int main(){
    	int choice;
    	
	printf("SELECT DATA BUNDLE:\n");
	printf("1.100MB @ 50KES\n");
	printf("2.500MB @ 200KES\n");
	printf("3.1GB @ 350KES\n");
	printf("4.2GB @ 600KES\n");
	
	printf("Enter your choice(1-4):");
	scanf("%d",&choice);
	
	switch (choice){
		case 1:
		   printf("You selected 100MB. Cost=50KES \n");
		   break;
	    case 2:
	       printf("You selected 500MB. Cost=200KES \n");
	       break;
	    case 3:
	       printf("You selected 1GB. Cost=350ES \n");
	       break;
	    case 4:
	       printf("You selected 2GB. Cost=600KES \n");
	       break;
	   default:
	   	printf("Invalid choice \n");
	     
   	
		
	}	
				
		return 0;
	}