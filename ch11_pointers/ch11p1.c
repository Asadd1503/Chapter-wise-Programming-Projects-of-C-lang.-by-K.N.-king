#include <stdio.h>
void make_payment(int *deposit, int *_20, int *_10, int *_5, int *_1);

int main(void){
    int deposit, _20, _10, _5, _1;
    printf("enter the deposit amount: ");
    scanf("%d", &deposit);
    make_payment(&deposit, &_20, &_10 ,&_5, &_1);
    printf("remaining payment requires:\n20$\t10$\t5$\t1$\n%d\t%d\t%d\t%d",_20, _10, _5, _1);
}

void make_payment(int *deposit, int *_20, int *_10, int *_5, int *_1){
    *_20 = (*deposit/20);
    *deposit = *deposit - 20*(*_20);
    *_10 = (*deposit/10);
    *deposit = *deposit - 10*(*_10);
    *_5 = (*deposit/5);
    *deposit = *deposit - 5*(*_5);
    *_1 = *deposit;

}