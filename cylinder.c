//simple c program to find the volume and surface area of a cylinder 
/*
Name: JEFF MURITHI 
Reg no: CT101/G/26553/25
Date:23rd September 2025
Description: Volume and surface area of a cylinder 
*/

# include <stdio.h>
int main(){

     float radius,height,volume,surfacearea ;
     
     printf("Pi=3.142 \n");
     printf("Enter the radius of the cylinder \n");
     scanf("%f",&radius );
     
     printf("Enter the height of the cylinder \n");
     scanf("%f",&height);
     
     volume = 3.142*radius * radius * height ;
     printf("\n volume is %.2f cm³",volume);
     
     surfacearea = (2*3.142) * radius * radius+ (2*3.142) * radius * height;
     printf("\n surface_area is %.2f cm²",surfacearea);
     

return 0;

}