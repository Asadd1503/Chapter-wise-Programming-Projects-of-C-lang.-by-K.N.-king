#include <stdio.h>
#define _8am 480
#define _9_43am 583
#define _11_19pm 679
#define _12_47pm 767
#define _2pm 880
#define _3_45pm 945
#define _7pm 1140
#define _9_45pm 1305
void main(void){
    int hour, min;
    printf("enter time according to 24-hour clock(xx-xx): ");
    scanf("%d:%d",&hour ,&min);
    printf("closest departure time: ");
    int udm = hour * 60 + min;               // udm = user departure time in minutes

    if(0 <= udm && udm < 480){
        if((_8am - udm) < ((1440 + udm) - _9_45pm )){
            printf("\"8:00 AM\" , arrival time \"10:16 am\"\n");
        }
        else{
            printf("\"9:45pm\" , arrival time \"11:49 pm\"n");
        }
    }
    else if(480 <= udm && udm < 583){
        if((udm - _8am) < (_9_43am - udm)){
            printf("\"8:00 am\" , arrival time \"10:16 am\"\n");   
        }
        else{
            printf("\"9:43 am\" , arrival time: \"11:52 am\"\n");
        }
    }
    else if(583 <= udm && udm < 679){
        if((udm - 583) < (679 - udm)){
            printf("\"9:43 am\" , arrival time: \"11:52 am\"\n");           
        }
        else{
            printf("\"11:19 pm\" , arrival time \"1:31 pm\"\n");
        }
    }
    else if(679 <= udm && udm < 767){
        if((udm - 679) < (767 -udm)){
            printf("\"11:19 pm\" , arrival time: \"1:31 pm\"\n");
        }
        else{
            printf("\"12:47 pm\" , arrival time: \"3:00 pm\"\n");
        }

    }
    else if(767 <= udm && udm < 880){
        if((udm - 767) < (880 - udm)){
            printf("\"12:47 pm\" , arrival time: \"3:00 pm\"\n");
        }
        else{
            printf("\"2:00 pm\" , arrival time \"4:08 pm\"\n");
        }

    }
    else if(880 <= udm && udm < 945){
        if((udm - 880) < (945 - udm)){
            printf("\"2:00 pm\" , arrival time: \"4:08 pm\"\n");
        }
        else{
            printf("\"3:45 pm\" , arrival time: \"5:55pm\"\n");
        }
    }
    else if(945 <= udm && udm < 1140){
        if((udm - 945 ) < (1140 - udm)){
            printf("\"3:45 pm\" , arrival time: \"5:55 pm\"\n");
        }
        else{
            printf("\"7:00 pm\" , arrival time: \"9:20 pm\"\n");
        }
    }
    else if(1140 <= udm && udm < 1305){
        if((udm - 1140 ) < (1305 - udm)){
            printf("\"7:00 pm\" , arrival time: \"9:20 pm\"\n");
        }
        else{
            printf("\"9:45 pm\" , arrival time: \"11:58 pm\"\n ");
        }
    }
    else {
        printf("\"9:45 pm\" , arrival time: \"11:58 pm\"\n");
    }


}