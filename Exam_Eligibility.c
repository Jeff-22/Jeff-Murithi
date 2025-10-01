/*
Name:JEFF MURITHI.
Reg.No:CT101/G/26553/25.
Date:30th September 2025.
Description:To check if a student is eligible for final exams.
*/

#include <stdio.h>
int main (){
	
   int percentage_class_attendance;
   float average_marks;
   
   printf("Enter the percentage-class_attendance\n");
   scanf("%f", &percentage_class_attendance);
   
   printf("Enter average_marks\n");
   scanf("%f", &average_marks);
   
   if(percentage_class_attendance>=75&&average_marks>=40)
   {
   	printf("Eligible");
   }
   
   else 
   {
   	printf("Not eligible");
   }	
	
		return 0;
}