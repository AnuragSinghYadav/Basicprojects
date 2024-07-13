#include<stdio.h>
#include<conio.h>
void main()
{  //converting temp from Fahrenheit to Celsius 
     int clrscr();
    float f,c;
    printf("Enter the Temperature in Fahrenheit :");
    scanf("%f",&f);
    c= ((f-32)*5)/9;
    printf("Temperature in Celsius %f", c);
    getch();

}