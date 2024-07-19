#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
//#define _Bool bool;
int main() {
    //float f ;

    long unsigned i ;
    _Bool b = sizeof i ;
    //short j = sizeof i ;
    
    printf("%d\n", b);



    return 0;
}
