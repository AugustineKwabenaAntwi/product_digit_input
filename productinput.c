#include <stdio.h>
int main(){
    int value;
    int product = 1;
    int last;
    scanf("%d",&value);
    while(value>0){
        last = value %10;
        value=value/10;
        product =product*last;

    }
    printf("%d\n",product);
    
};