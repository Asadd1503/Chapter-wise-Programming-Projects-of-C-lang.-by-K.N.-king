
// Dividing ISBN INTO ITS FIVE PARTS 
// Arthour Muhammmad Asad

#include <stdio.h>
int main(void)
{
    int  gsi_p, group_i, publisher_c, item_n, check_d;

    printf("Enter ISBN :");
    scanf("%d-%d-%d-%d-%d", &gsi_p, &group_i, &publisher_c, &item_n, &check_d);

    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher Code: %d\nItem number: %d\nCheck digit: %d\n",gsi_p, group_i, publisher_c, item_n, check_d);
}