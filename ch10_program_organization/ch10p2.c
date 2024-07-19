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
char perform_addition(void);
bool one_left(void);

int main(void){
    char input;
    printf("Enter expression: ");
    while((input = getchar())!='\n'){
        if(input == '+'){
            char result = perform_addition();
            data[top - 2] = result;
            top -= 1;
            

        }
        else if(input == ' '){
            continue;
        }
        else if(input == '='){
            printf("result = %c", data[top - 1]);
        }
        else{
        stack_push(input);
        }


    }
    
}
char perform_addition(void){            //function: perform addition on two subsequent elements in stack and return sum
    if(one_left()){
        stack_underflow();
    }
    else{
        return data[top - 1] + data[top - 2] - 48;
    }
}   
bool one_left(void){                  // function: make sure there are two operands for addition otherwise gives error
    if(top == 1){
        return true;
    }
    else{
        return false;
    }
}

void stack_overflow(void){                                              // terminates progrem due to over flow
    printf("stack overflow has ocuured can't proceed further.\n");
    exit(0);
}
void stack_underflow(void){                                             //terminates program due to under flow
    printf("not enough operans left.\n");
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