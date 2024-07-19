#include <stdio.h>
#define FP 32.0
#define SC (5.0/9.0)
int main(void)
{
    float temp_F, temp_C;
    printf("enter your surrounding temprature : ");
    scanf("%f", &temp_F);
    temp_C = (temp_F - FP)*(SC);
    printf("temprature inn celceus : %.1f\n",temp_C);
    return 0;
}