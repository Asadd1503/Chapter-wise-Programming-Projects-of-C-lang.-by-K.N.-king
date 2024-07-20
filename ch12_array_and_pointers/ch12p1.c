
/*working: Displays sentence in reverse direction
 *Date: 7/20/24  
 */
#include <stdio.h>
#include <ctype.h>

#define temp_size 100

void copy_array(char *ptr_temp_array, char *ptr_orig_array, int *len);

int main(void){
    char ch, temp_array[temp_size], *ptr_temp_array = temp_array;
    int len = 0;
    printf("enter you sentence: ");
    while((ch = getchar())!= '\n'){
        *ptr_temp_array = ch;
        ptr_temp_array++;
        len++;
    }
    
    char orig_array[len];
    copy_array(temp_array, orig_array, &len); /*copy array with extra size to array with perfect size*/

    char *ptr_orig_array = orig_array;
    ptr_orig_array += (len - 1);

    printf("name in reverse: ");
    for(; ptr_orig_array >= orig_array ; ptr_orig_array--){  /*printing array in reverse direction*/
        printf("%c", *ptr_orig_array);
    }
    printf("\n");
    return 0;
    
}

void copy_array(char *ptr_temp_array, char *ptr_orig_array, int *len){    /*takes 1) array from which it is copying*/
    int i = 0;                                                     /*2) array into which we want to copy*/
                                                                    /* 3) len of 2nd array*/
    for(; i < *len;){
        *ptr_orig_array = *ptr_temp_array;
        ptr_orig_array++;
        i++;
        ptr_temp_array++;
    }
}