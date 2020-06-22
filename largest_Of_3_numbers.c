#include<stdio.h>
int main(){
    int first, second, third;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d", &first, &second, &third);
    int big = first>second ? (first>third ? first:third) : (second>third ? second:third);
    printf("biggest of three numbers is %d\n", big);
    return 0;
}
