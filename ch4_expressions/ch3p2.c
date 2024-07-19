#include <stdio.h>

int main(void)
{
    int item_no, d, m, y;
    float price;

    printf("Enter item number :");
    scanf("%d", &item_no);

    printf("Enter unit price :");
    scanf("%f", &price);

    printf("Enter purchase date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("item\tunit\t\tpurchase\nnumber\tprice\t\tdate\n%d\t$  %.2f\t%.2d/%.2d/%d\n",item_no, price, d, m, y);
}