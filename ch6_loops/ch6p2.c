#include <stdio.h>
void main(void){
    int n, m, remainder;
    printf("enter numbers(x x): ");
    scanf("%d %d", &n, &m );
    for(;;m = n, n = remainder){
        if(n == 0){
            remainder = m;
            break;

        }
        remainder = m % n;

    }
    printf("GCD = %d\n", remainder);


}