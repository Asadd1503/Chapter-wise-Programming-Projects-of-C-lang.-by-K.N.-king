
// Evaluation of Check digit for UPC (universal product code)
// date: 7/1/2024
// Arthour: Muhammad Asad
#include <stdio.h>
int main(void)
{
    int p, i1, i2, i3 , i4, i5, i6, i7, i8 , i9 , i10;

    printf("enter UPC (x xxxxx xxxxx): ");
    scanf ("%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d", &p, &i1, &i2, &i3 , &i4, &i5, &i6, &i7, &i8 , &i9 , &i10);

    int sum2 = i1 + i3 + i5 + i7 + i9;
    int sum1 = p + i2 + i4 + i6 + i8 + i10;

    int total = 3 * sum1 + sum2;


    printf("enterd upc: %d %d%d%d%d%d %d%d%d%d%d\n", p, i1, i2, i3 , i4, i5, i6, i7, i8 , i9 , i10);
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;
}