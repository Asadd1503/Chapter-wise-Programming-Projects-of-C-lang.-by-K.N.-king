#include <stdio.h>

int main(void){
    short numerator, denominator, red_numerator, red_denominator;
    printf("enter numertaor and denominator(N/D): ");
    scanf("%hd/%hd", &numerator, &denominator);
    reduce(numerator, denominator, &red_numerator, &red_denominator);
}
void reduce(short num, short denom, short *red_num, short *red_denom){
    short gcd = do_gcd(num, denom);
}

short do_gcd(short num, short denom){
    if(num > denom){
        for(;;){
            if(num == 0){
                return denom;
            }
            else{
                short temp = num;
                num = num % denom;
                denom = temp;
            }
        }
    }
    else{
        for(;;){
            if(denom == 0){
                return num;
            }
            else{
                short temp = denom;
                denom = denom % num
            }
        }

    }
}