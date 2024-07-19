#include <stdio.h>
#include <ctype.h>
void display_time(float *dt, float *at, short *time );
void find_closest_flight(short desired_time, float *dt, float *at);
short time_in_mins(short hour, short min, char time);

int main(void){
    short hour, min;
    char time;
    
    printf("enter your time(hh:mm AM/PM): ");
    scanf("%hd:%hd %1c", &hour, &min, &time);
    
    short time_mins = time_in_mins(hour, min ,time);
    float dt,at;
    find_closest_flight(time_mins, &dt, &at);
    display_time(&dt, &at, &time_mins);


}
void display_time(float *dt, float *at, short *time ){
    int dt_hour, dt_min, at_hour, at_min;
    dt_hour = (int) (*dt);
    dt_min = (int) (100 * (*dt - dt_hour));

    at_hour = (int) (*at);
    at_min = (int) (100 * (*at - at_hour));

    if(*time >= 720){
        printf("departure time = %.2d:%.2d PM and arrival time = %.2d:%.2d AM\n", dt_hour, dt_min, at_hour, at_min);
    }
    else{
        printf("departure time = %.2d:%.2d PM and arrival time = %.2d:%.2d AM\n",dt_hour, dt_min, at_hour, at_min);
    }

    
}


void find_closest_flight(short desired_time, float *dt, float *at){
    if(desired_time <= 200){
        *dt = 12.00;
        *at = 3.30;
    }
    else if(desired_time <= 500){
        *dt = 6.00;
        *at = 8.30;
    }
    else if(desired_time <= 700){
        *dt = 10.30;
        *at = 12.30;
    }
    else if(desired_time <= 1080){
        *dt = 3.30;
        *at = 6.15;
    }
    else{
        *dt = 8.00;
        *at = 11.15;
    }
}
short time_in_mins(short hour, short min, char time){
    time  = tolower(time);
    if(time == 'a'){
        return hour * 60 + min;
    }
    else{
        return 720 + (hour * 60 + min);
    }
}