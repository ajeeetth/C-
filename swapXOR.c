#include<stdio.h>
void swaping(int, int);
int main(){
    int a = 10, b = 50;
    printf("Before Swapping a = %d b = %d\n", a, b);
	swaping(a, b);
	return 0;
}
void swaping(int a,  int b){
	a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After Swapping a = %d b = %d\n", a, b);
}
	
