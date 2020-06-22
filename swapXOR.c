#include<stdio.h>
int main(){
    int a = 10, b = 50;
    printf("Before Swapping a = %d b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After Swapping a = %d b = %d\n", a, b);

    return 0;
}
