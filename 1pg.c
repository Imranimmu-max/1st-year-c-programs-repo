// program to reaad the radius of the circle and find the area of circumsference ;

#include<stdio.h>
// #include<conio.h>

void main(){
    float radius,pi=3.14,area,cir;
    // clrscr();

    printf("enter the raadius of circle : ");
    scanf("%f",&radius);

    area  = pi*radius*radius;
    cir   = 2*pi*radius;

    printf("the area od circle is = %f\n",area);
    printf("the circumference is = %f\n",cir);

    
    
}