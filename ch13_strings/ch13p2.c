/*About: sum all the numbers provided in commnad line*/

#include <stdio.h>
#include <stdlib.h>

int my_atoi_zerotonine(char *ptr);

int main(int argc, char *argv[]){
    char **start = argv + 1;
    int sum = 0;
    for(;*start ;){
        sum += my_atoi_zerotonine(*start);
        start++;
    }
    printf("%d\n", sum);
}

int my_atoi_zerotonine(char *ptr){
    /*About: My own atoi() function which takes acharacter array and,
    * and calculates sum of all characters by converting to int works,
    * only for 0 to 9 didgts */ 
    int sum = 0;
    while(*ptr != '\0'){
        sum += (*ptr - 48);
        
        ptr++;
    }
    return sum;
}