//c program to check qualification of a loan
/*
Name:JEFF MURITHI 
Reg no:CT101/G26553/25
Date: 24th September 2025
Description: program to check if one is qualified to get a loan
*/

# include <stdio.h>

int main() {
    int age;
    float annualincome;
    
    printf("enter your age(in years) \n");
    scanf("%d",&age);
    
    printf("\n Enter your annual income Ksh.");
    scanf("%f",&annualincome);
    
    if (age >=21&& annualincome >=21000){
        printf("Congratulations you qualify for a loan");
    } else {
        printf("Unfortunately we are unable to offer you a loan at this time");
          
    }
    
  return 0;           

}