/*
Name:JEFF MURITHI.
Reg.No:CT101/G/26553/25.
Date:13th November,2025.
*/

#include <stdio.h>

int main(){
	FILE*file;
	float amount,total=0;
	int choice;
	
	file=fopen("sales.txt","r");
	
	if (file == NULL) {
		printf("File sales.txt not found. Creating a new one... \n");
		file=fopen("sales.txt","w");
		if (file == NULL) {
			printf("Error: Could not create sales.txt \n");
			return 1;
		}
		printf("sales.txt file created successfully! \n");
		fclose(file);
	} else {
		fclose(file);
	}
	
	printf("Do you want to add new sales transactions? (1= Yes, 0= No): ");
	scanf("%d",&choice);
	
	if (choice ==1) {
		file=fopen("sales.txt","a");
		if(file==NULL) {
			printf("Error opening sales.txt for writing! \n");
			return 1;
		}
		
		int n,i;
		printf("Enter number of transactions: ");
		scanf("%d",&n);
		
		for (i=0;i<n;i++) {
			printf("Enter amount for transactions %d: ",i+1);
			scanf("%f",&amount);
			fprintf(file, "%.2f \n",amount);
		}
		
		fclose(file);
		printf("Transactions successfully addded to sales.txt for reading \n");
		return 1;
	}
	
	while (fscanf(file, "%f",&amount)==1) {
		total += amount;
	}
	
	fclose(file);
	printf("Total sales for the day: %.2f \n",total);
	
	return 0;
}