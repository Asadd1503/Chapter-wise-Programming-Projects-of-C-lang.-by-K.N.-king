/* About: prints arguements in reverse given in,
*  command line */


#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    for(int i = argc - 1; i > 0; i--){
        printf("%s\t", *(argv + i));

    }
    printf("\n");
    char arg1[strlen(*(argv + 1))];
    strcpy(arg1, *(argv + 1));
    char *p = arg1;
    *p = 'a';
    
    printf("%s\n", p);
}