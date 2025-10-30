/*
Name:
Reg.No:
Date:
Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int chain[3][5][10];
	int totalOccupied=0;
	int branch;
	int floor;
	int room;
	
	srand(time(0));
	
	for(branch=0;branch<3;branch++){
		for(floor=0;floor<5;floor++){
			for(room=0;room<10;room++){
				chain[branch][floor][room]=rand()%2;
				if(chain[branch][floor][room]==1){
					totalOccupied++;
				}
			}
		}
	}
	
	printf("Total number of occupied rooms acrooss all branches:%d \n",totalOccupied);
	
	return 0;
}