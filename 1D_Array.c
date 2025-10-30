/*
Name:
Reg.No:
Date:
Description:
*/

#include <stdio.h>

int main(){
	int revenue[7],total=0;
	float average;
	int i;
	
	printf("Enter revenue for 7 days: \n");
	for(i=0;i<7;i++){
		printf("Day %d:",i+1);
		scanf("%d",&revenue[i]);
		total+=revenue[i];
	}
	
	average=total/7.0;
	
	printf("Total weekly revenue:%d \n",total);
	printf("Average daily revenue:%.2f \n",average);
	
	return 0;
}