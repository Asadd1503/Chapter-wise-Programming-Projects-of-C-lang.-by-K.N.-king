#include <stdio.h>
void main(void){
    int hour, min;
    printf("Enter 24 hour time(xx:xx) :");
    scanf("%d:%d", &hour, &min);

    printf("time in 12 hour format :");
    switch (hour){
        case 0: printf("00:%.2d AM \n", min); break;
        case 1: printf("01:%.2d AM\n", min); break;
        case 2: printf("02:%.2d AM\n", min); break;
        case 3: printf("03:%.2d AM \n", min); break;
        case 4: printf("04:%.2d AM \n", min); break;
        case 5: printf("05:%.2d AM \n", min); break;
        case 6: printf("06:%.2d AM \n", min); break;
        case 7: printf("07:%.2d AM \n", min); break;
        case 8: printf("08:%.2d AM \n", min); break;
        case 9: printf("09:%.2d AM \n", min); break;
        case 10: printf("10:%.2d AM \n", min); break;
        case 11: printf("11:%.2d AM\n", min); break;
        case 12: printf("12:%.2d AM\n", min); break;
        case 13: printf("01:%.2d PM \n", min); break;
        case 14: printf("02:%.2d PM \n", min); break;
        case 15: printf("03:%.2d PM \n", min); break;
        case 16: printf("04:%.2d PM \n", min); break;
        case 17: printf("05:%.2d PM \n", min); break;
        case 18: printf("06:%.2d PM \n", min); break;
        case 19: printf("07:%.2d PM \n", min); break;
        case 20: printf("08:%.2d PM \n", min); break;
        case 21: printf("09:%.2d PM \n", min); break;
        case 22: printf("10:%.2d PM \n", min); break;
        case 23: printf("11:%.2d PM \n", min); break;
        case 24: printf("12:%.2d PM \n", min); break;
        
    }
}