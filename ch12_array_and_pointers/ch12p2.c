/* About: takes string as input and store it in array and,
* then checks wether the string is palindrome or not while ignoring,
* all the char's except a,b,...z and A,B,...,Z. and considers a = A true.*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define temp_size 100

void check_palindrome(char *ptr_head, int *len);

int main(void){
    char ch, temp_array[temp_size], *ptr_array = temp_array;
    int len = 0;
    printf("enter you sentence: ");
    while((ch = getchar())!= '\n'){
        *ptr_array = ch;
        ptr_array++;
        len++;
    }
    check_palindrome(temp_array, &len);

}
void check_palindrome(char *ptr_head, int *len){
    /* function: checks wether string is palindrome or not while ignoring all the chhar's excpet a,b,c...z,A,B,..Z.
    * 1st arguement is address of array in which sentence is stored,
    * 2nd arguement is len of array with characters on it ignoring extra size
    * only useful length of array. */ 

    char *ptr_last = ptr_head + (*len - 1);
    for( ;ptr_last >= ptr_head; ){
        if(!(*ptr_last >= 97 && *ptr_last <= 122) && !(*ptr_last >=65 && *ptr_last <= 90)){
            ptr_last--;
        }
        else if(!(*ptr_head >= 97 && *ptr_head <= 122) && !(*ptr_head >=65 && *ptr_head <= 90)){
            ptr_head++;
        }
        else if(tolower(*ptr_head) != tolower(*ptr_last)){
            printf("the sentence is not palindrome\n");
            exit(0);
        }
        else{
            ptr_head++;
            ptr_last--;
        }
    }
    printf("the string is palindrome.\n");
}