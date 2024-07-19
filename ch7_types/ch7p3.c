#include <stdio.h>
#include <ctype.h>
void main(void){
    short hour, min;
    char ts1, ts2;
    printf("Enter acc. to 12-hour clock(hh:mm): ");
    scanf("%hd:%hd %c", &hour, &min, &ts1);
    char TS1;
    TS1 = toupper(ts1);
    ts2 = getchar();
    
    printf("time in 24-hour clock: ");
    if(TS1 == 'P') printf("%.2hd:%.2hd\n", 12+hour, min);
    else printf("%.2hd:%.2hd\n", hour, min);
    
}