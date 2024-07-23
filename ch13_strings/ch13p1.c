/* ABOUT : keeps record of the smallest and largest string entered by user,
 * until he/she enters 4 letters word and displays it */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define len 20
#define stop 4

int take_input(char *user);
void find_smallest_largest(char *user_input, char *small, char *large);
int my_strcmp(const char *str1, const char *str2);


int main(void){
    int i= 0;
    int size = 0;
    char smallest[len + 1] = {0} , largest[len + 1] = {0};
    while(1){
        
        char user_input[len + 1] = {0};

        printf("enter a word: ");
        int size = take_input(user_input);
        
        if(size == stop) break;
        if(i <= 0){
            strcpy(smallest, user_input);
            strcpy(largest, user_input);
            i++;
        }
        else{
            find_smallest_largest(user_input, smallest, largest);
    
        }
}
    printf("smallest: %s\tlargest: %s", smallest, largest);
}

int take_input(char *user){
    int i = 0, ch;
    while((ch = getchar()) != '\n'){
        *user = ch;
        user++;
        i++;
    }
    *user = '\0';
    return i;
}

void find_smallest_largest(char *user_input, char *smallest, char *largest){
        if(my_strcmp(user_input, smallest) < 0 ){
            strcpy(smallest, user_input);
        }
        if(my_strcmp(user_input, largest) > 0){
            strcpy(largest, user_input);
        }


    }

int my_strcmp(const char *str1, const char *str2){
    int len1 = 0, len2 = 0;
    while(*str1 != '\0'){
        len1++;
        str1++;
    }
    while(*str2 != '\0'){
        len2++;
        str2++;
    }
    if(len1 > len2){
        return 1;
    }
    else if(len1 == len2){
        return 0;
    }
    else{
        return -1;
    }
}


