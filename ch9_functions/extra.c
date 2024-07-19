#include <stdio.h>

void avg(int a, int b){
    a = 20;
}
void main(void){
    int x = 1,y = 20;
    avg(x, y);
    printf("%d", x);

}