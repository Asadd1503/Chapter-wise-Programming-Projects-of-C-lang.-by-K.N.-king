/* About: counting number of vowels in a string using pointers to string
*/

#include <stdio.h>
#include <ctype.h>

int count_vowels(char *sen);
void get_string(char *user);
void print(char *str);

int main(void){
    char str[20];
    printf("enter word: ");
    get_string(str);
    int vowels = count_vowels(str);
    printf("totals vowels : %d\n", vowels);
    print(str);
    return 0;



}
int count_vowels(char *sen){
    int count = 0;
    while(*sen != '\0'){
        if(*sen == 'a' || *sen == 'e'|| *sen == 'i'|| *sen == 'o'|| *sen == 'u'){
            count += 1;
        }
        sen++;
    }
    return count;

}
void print(char *str){
    for(; *str != '\0';str++){
        printf("%c", *str);
    }
    printf("\n");
}

void get_string(char *user){
    int i = 0;
    char ch;
   
    while((ch = getchar()) != '\n'){
        *user = ch;
        user++;
        i++;
    }
    *user = '\0';
    printf("check\n");
    
}
