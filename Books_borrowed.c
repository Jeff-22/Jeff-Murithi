/*
Name:JEFF MURITHI.
Reg.No:CT101/G/26553/25.
Date:13th November,2025.
Description:Program to record borrowed books.
*/

#include <stdio.h>

int main(){
	FILE*file;
	char title[100];
	
	file=fopen("borrowed_books.txt","a");
	if (file == NULL){
		printf("Error opening file!\n");
		return 1;
	}
	
	printf("Enter book title: ");
	fgets(title, sizeof (title), stdin);
	
	fprintf(file, "%s", title);
	fclose(file);
	
	printf("Book title successfully stored in borrowed_books.txt \n");
	
	return 0;
}