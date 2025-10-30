/*
Name:JEFF MURITHI.
Reg.No:CT101/G/26553/25.
Date:30th October,2025.
Dexsription:2D Array to show occupancy and vacancy of rooms in a hotel.
*/

#include <stdio.h>

int main(){
	int occupancy[5][10];
	int occupied,vacant;
	int floor;
	int room;
	
	printf("Room occupancy status(1=occupied,0=vacant): \n");
	
	for(floor=0;floor<5;floor++){
		occupied =0;
		vacant=0;
		printf("Floor %d: \n",floor+1);
		for(room=0;room<10;room++){
			occupancy[floor][room]=rand()%2;
			
			printf("%d",occupancy[floor][room]);
			
			if(occupancy[floor][room]==1)
				occupied++;
			else
				vacant++;
		}
		printf("Occupied:%d, vacant:%d \n\n",occupied,vacant);
	}
	
	return 0;
}