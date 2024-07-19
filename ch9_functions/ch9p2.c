#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool playgame(void);
int roll_dice(void);

int main(void){
    char input;
    printf("do you want to play(y/n): ");
    scanf(" %c", &input);
    bool result;
    short win = 0, lose = 0;
    srand(time(NULL));

    while(input != 'n'){
        result = playgame();
        if(result){
            win++;
        }
        else{
            lose++;
        }
        printf("do you want to play(y/n): ");
        scanf(" %c", &input);
    }
    printf("wins: %.2hd\t\tloses: %.2hd\n\n",win, lose);
    printf("per win 10$\t\tper lose $10\n\nyou earned: %hd$\t\tyou lost: %hd$\n\ntotal profit: %hd$\n\n",win*10,lose*10, win*10 - lose*10);

}
bool playgame(void){
    int one_time_only = 0;
    int point;
    again_call : 
    ;
    int sum = roll_dice();
    printf("you rolled: %d\n", sum);

    for(;one_time_only < 1;){
        if(sum == 7 || sum == 11){
            printf("you win!\n");
            return true;
        }
        else if(sum == 2 || sum == 3 || sum == 12){
            printf("you lose!\n");
            return false;
        }
        else{
            point = sum;
            printf("your point is: %d\n", point);
            one_time_only++;
            goto again_call;

        }
    }
    if(sum == point){
        printf("you win!\n");
        return true;
    }
    else if(sum == 7){
        printf("you lose!\n");
        return false;
    }
    else goto again_call;


}
int roll_dice(void){
    int dice1, dice2;
    

    dice1 = (rand() % 6) + 1;
    dice2 = (rand() % 6) + 1;

    return dice1 + dice2;

}