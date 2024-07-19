// earliest date among the entered one
#include <stdio.h>
void main(void){
    int uMonth, uYear, uDay; // u = User
    int mMonth = 12, mYear = 2024, mDay = 31; // m = manual
    while(1){
        printf("Enter Date(mm/dd/yyyy): ");
        scanf("%2d/%2d/%4d", &uMonth, &uDay, &uYear);
        if(uMonth == 0 && uDay ==0 && uYear ==0){
            goto loopEnd;
        }
        if(uYear < mYear){
            mYear = uYear;
        }
        if(uMonth < mMonth){
            mMonth = uMonth;
        }
        if(uDay < mDay){
            mDay = uDay;
        } 
    }
        
    loopEnd : ;
    printf("Earliest date among the entered: %d/%d/%d\n", mMonth, mDay, mYear);
    
}