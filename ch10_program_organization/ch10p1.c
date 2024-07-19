#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

#define stack_size 30

short top = 0;
char data[stack_size] = {0};

void stack_overflow(void);
void stack_underflow(void);
bool is_nested(void);
int pop_stack(void);
bool is_stackEmpty(void);
void stack_push(char input);
bool is_stackFull(void);

int main(void){
    char input;
    printf("Enter braces/parenthesis(({)}): ");
    while((input = getchar())!='\n'){
        stack_push(input);

    }
    if(is_nested()){
        printf("they are nnested properly\n");
    }
    else{
        printf("they are nnot nested properly\n");
    }
}
void stack_overflow(void){                                              // terminates progrem due to over flow
    printf("stack overflow has ocuured can't proceed further.\n");
    exit(0);
}
void stack_underflow(void){                                             //terminates program due to under flow
    printf("stack under flow has occured so can't proceed further.\n");
    exit(0);
}
bool is_nested(void){                            // checks nested or not and returns true   
    if(top % 2 == 0){
        char test = pop_stack();
        if(test == '}' || test == ')' ){
            return true;
        }
        else{
            return false;
        } 
    }
    else{
        return false;
    }
}
int pop_stack(void){                   // remove last element from stack and returns it
    if(is_stackEmpty()){
        stack_underflow();
    }
    else{
        return data[--top];
    }
}

bool is_stackEmpty(void){          // checks stack is empty or not and returns true or false
    if(top == 0){
        return true;
    }
    else{
        return false;
    }
}

void stack_push(char input){            // add new element into stack and returns nnothing
    if(is_stackFull()){
        stack_overflow();
    }
    else{
        data[top] = input;
        ++top;
    }
}
bool is_stackFull(void){           // checks stack is full or not and returns true or false
    if(top == stack_size){
        return true;
    }
    else{
        return false;
    }
}