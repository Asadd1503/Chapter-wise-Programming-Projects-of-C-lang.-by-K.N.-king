#include <stdio.h>
int main(void)
{
    int country_c, start, end, middle;

    printf("enter telephone number [(xx)xxx-xxxx xxx]: ");
    scanf("(%d)%d-%d%d", &country_c, &start, &middle, &end);

    printf("%d.%d.%d%d\n", country_c, start, middle, end);
}