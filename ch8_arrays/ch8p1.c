#include <stdio.h>
#include <stdbool.h>

void main(void){
    unsigned int num;
    short int n, i;
    short int count = 1;
    
    printf("enter a number: ");
    while(scanf("%u", &num)){
        if(num <= 0) break;
        bool d[10] = {false};   
        i=0;
        
        short int rec[15] = {0};
        while(num > 0){
            n = num % 10;
            if(d[n] == true){
                rec[i] = n;
                ++i;
            }
            else{
                d[n] = true;
            }
            num /= 10u;  
        }
        if(rec[0] == 0){
            printf("the %hd number has no repeated digit.", count);
        }
        else{
            printf("the repeated digits in %hd nnumber are: ", count);
            for(int j=0;j < i; j++){
                printf("%d ", rec[j]);
            }
        }
        count++;
        printf("\n");

    }
}   