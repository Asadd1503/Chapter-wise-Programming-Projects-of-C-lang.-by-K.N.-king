#include <stdio.h>
#include <ctype.h>
#define at 24
void main(void){

    int n, i;
    char waste;
    printf("enter the range: ");
    scanf("%d", &n);
    waste = getchar();
    for(i = 1;i <= n;++i){
        printf("%d\t%d\n", i, i*i);
        if(i == at ){
            printf("Press Enter to continue...");
            while(getchar() != '\n'){

            }
                
            

            
                
        }
        else continue;
    }




}