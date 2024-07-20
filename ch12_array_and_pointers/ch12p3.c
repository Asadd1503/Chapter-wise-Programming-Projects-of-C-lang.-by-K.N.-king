/* About: checks displays min and max numbers in an array,
* given by users by using pointers arithmetic.  */

#include <stdio.h>

#define array_size 100

void max_min(int *ptr_head, int* ptr_last, int *max, int *min);
int *get_array(int *ptr_numbers);

int main(void){
    int numbers[array_size], *ptr_numbers_last;
    ptr_numbers_last = get_array(numbers);

    int max = 0 , min = 32000;
    max_min(numbers, ptr_numbers_last, &max, &min);

    printf("max = %d\nmin = %d", max, min);

}
void max_min(int *ptr_head, int* ptr_last, int *max, int *min){
    /*working: takes 4 arguements 1) ptr to head of array  2) ptr to last of array,
    * 3) and 4) addresses of max and min and updates max and min in main from array.*/
    for(;ptr_last >= ptr_head;){
        if(*ptr_last > *max){
            *max = *ptr_last;
        }
        if(*ptr_last < *min){
            *min = *ptr_last;
        }
        ptr_last--;

    }
}

int *get_array(int *ptr_numbers){
    /*working: takes pointer to head of array and returns array filled numbers by prompting user */
    printf("enter 0 to stop entering number");
    for(;;){
        if(*(ptr_numbers - 1) == 0){
            break;
        }
        else{
            scanf("%d", ptr_numbers);
            ptr_numbers++;
        }
    }
    return ptr_numbers - 2; /*returns pointer to last non zero element, ptr_numbers - 1 is pointing to zero
                             * entered by user  ptr_numbers is one number ahead. */
}