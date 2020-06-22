#include<stdio.h>
int large(int, int, int);
int main(){
    int first, second, third;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &first, &second, &third);
    int number = large(first, second, third);
    printf("biggest of three numbers is %d\n", number);
    return 0;
}
int large(int a, int b, int c){
	int number = a>b ? (a>c ? a:c) : (b>c ? b:c);
	return number;
}
