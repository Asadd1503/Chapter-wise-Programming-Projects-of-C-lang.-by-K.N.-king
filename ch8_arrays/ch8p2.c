#include <stdio.h>
#include <ctype.h>
#define size 20

void main(void){
    short index = 0;
    char first_word[size] = {0}, second_word[size]={0},ch,ch2;

    printf("word limit is 20 char's long\n");

    printf("enter a word: ");
    while((ch = getchar())!='\n'){
        first_word[index] = tolower(ch);
        index++;
    }

    index = 0;

    printf("enter a word: ");
    while((ch = getchar())!='\n'){
        second_word[index] = tolower(ch);
        index++;
    }
    short len1 = sizeof(first_word)/sizeof(first_word[0]);
    short len2 = sizeof(second_word)/sizeof(second_word[0]);

    short rec[26] = {0};
    for(short stop1 = 0; stop1 < len1; stop1++){
        if(first_word[stop1]==0) break;
        else{
            switch (first_word[stop1]){
                case 'a': rec[0]++; break;
                case 'b': rec[1]++; break;
                case 'c': rec[2]++; break;
                case 'd': rec[3]++; break;
                case 'e': rec[4]++; break;
                case 'f': rec[5]++; break;
                case 'g': rec[6]++; break;
                case 'h': rec[7]++; break;
                case 'i': rec[8]++; break;
                case 'j': rec[9]++; break;
                case 'k': rec[10]++; break;
                case 'l': rec[11]++; break;
                case 'm': rec[12]++; break;
                case 'n': rec[13]++; break;
                case 'o': rec[14]++; break;
                case 'p': rec[15]++; break;
                case 'q': rec[16]++; break;
                case 'r': rec[17]++; break;
                case 's': rec[18]++; break;
                case 't': rec[19]++; break;
                case 'u': rec[20]++; break;
                case 'v': rec[21]++; break;
                case 'w': rec[22]++; break;
                case 'x': rec[23]++; break;
                case 'y': rec[24]++; break;
                case 'z': rec[25]++; break;
            }
        }

    }
    for(short stop2=0; stop2 < len2; stop2++){
        if(second_word[stop2]==0) break;
        else{
            switch (second_word[stop2]){
                case 'a': rec[0]--; break;
                case 'b': rec[1]--; break;
                case 'c': rec[2]--; break;
                case 'd': rec[3]--; break;
                case 'e': rec[4]--; break;
                case 'f': rec[5]--; break;
                case 'g': rec[6]--; break;
                case 'h': rec[7]--; break;
                case 'i': rec[8]--; break;
                case 'j': rec[9]--; break;
                case 'k': rec[10]--; break;
                case 'l': rec[11]--; break;
                case 'm': rec[12]--; break;
                case 'n': rec[13]--; break;
                case 'o': rec[14]--; break;
                case 'p': rec[15]--; break;
                case 'q': rec[16]--; break;
                case 'r': rec[17]--; break;
                case 's': rec[18]--; break;
                case 't': rec[19]--; break;
                case 'u': rec[20]--; break;
                case 'v': rec[21]--; break;
                case 'w': rec[22]--; break;
                case 'x': rec[23]--; break;
                case 'y': rec[24]--; break;
                case 'z': rec[25]--; break;
            }   
        }

    }
    for(short i=0; i<26;i++){
        if(rec[i] != 0){
            printf("the words are not anagrams :-\\.\n");
            goto end;
        }
        else continue;
    }
    printf("the words are anagrams :-)\n");
    end : ;

    

}