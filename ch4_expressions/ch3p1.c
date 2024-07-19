#include <stdio.h>

int main(void)
{
    int d , m, y;
    printf("enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("you entered the date : %d%.2d%.2d", y, m, d);

}