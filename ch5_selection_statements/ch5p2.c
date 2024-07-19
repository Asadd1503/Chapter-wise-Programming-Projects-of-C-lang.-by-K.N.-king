#include <stdio.h>
void main(void){
    int windSpeed;
    printf("enter wind speed(in knots): ");
    scanf("%d", &windSpeed);
    printf("Weather Description: ");
    if(windSpeed < 1) printf("Calm\n"); 
    if(1 <= windSpeed && windSpeed <=3) printf("Light air blowing\n");
    else if(3 < windSpeed && windSpeed <= 27) printf("Breeze\n");
    else if(27 < windSpeed && windSpeed <=47) printf("Gale\n");
    else if(47 < windSpeed && windSpeed <=63) printf("Storm Coming\n");
    else printf("Hurricane coming Run |/\n"); 
    printf("                      /|\\");
    }