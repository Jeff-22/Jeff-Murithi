/*
Name:JEFF MURIHI.
Reg.No:CT101/G/26553/25.
Date:9th October 2025.
Description:Numer Guessing Game.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main(){
  	int secret,guess,attempts=0;
  	srand(time(0));
  	secret=rand()%20+1;
  	
  while(1){
  	printf("Enter yor guess (1-20):");
	scanf("%d",&guess);
	attempts++;
	
	if(guess>secret)
		printf("Too high!\n");
	else if(guess<secret)
		printf("Too low!\n");
	else{
		printf("Congratulations!\n");
		break;
	} 
  } 	
	 	  
	  return 0;
  }