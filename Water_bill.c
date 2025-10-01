/*
Name:JEFF MURITHI.
Reg.No:CT101/G/26553/25.
Date:1st October 2025.
Description:CALCULATING THE WATER BILL.
*/

#include <stdio.h>

    int main(){
    	int units;
    	float water_bill;
    	
    printf("Enter water units consumed: \n");
	scanf("%d",&units);
	
	if (units<=30){
		water_bill=units*20;
	}
	
	else if (units<=60){
		water_bill=(30*20)+((units-30)*25);
	}
	
	else {
		water_bill=(30*20)+(30*25)+((units-60)*30);
	}
	
	printf("Total water_bill:%.2f KES \n",water_bill);	
    	   	
		
		return 0;
	}