#include <stdio.h>
void sel_sort(int n, int b[n]);

int main(void){
    short n,i = 0;
    printf("enter the size of array: ");
    scanf("%hd", &n);
    int a[n];
    printf("enter elements to add in array: \n");
    while(i < n){
        scanf("%d", &a[i]);
        i++;
    }
    sel_sort(n, a);
    for(int j= 0;j < n;j++){
        printf("%d ", a[j]);
    }
    printf("\n");
    
    
    
}
void sel_sort(int n, int b[n]){                 // this is a selection sort.
    int i = 0,largest,temp;                     // approach: pick first element and compare it with others,
    if(n==1) return;                            // if other is greater then store that in largest otherwise first,
    else{                                       // and shift number with which i am comparing to new largest one.
                                                // used recursion 1st for n-1 then n-2 upto 1 element and returned nothing.
        for(int j = 1;j < n; j++){
            if(b[i] > b[j]){
                largest = b[i];
            }
            else {
              i = j;
              largest = b[i];
            }
            
        }
        temp = b[n-1];
        b[n-1] = largest;
        b[i] = temp;
        return sel_sort(n-1, b);

    }
    
    
}