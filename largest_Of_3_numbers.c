#include <stdio.h> 

int main() { 
	int first, second, third; 

	printf("Enter the 3 numbers : "); 
	scanf("%d %d %d", &first, &second, &third); 

	if (first >= second && first >= third) 
		printf("%d is the largest number.", first); 

	if (second >= first && second >= third) 
		printf("%d is the largest number.", second); 

	if (third >= first && third >= second) 
		printf("%d is the largest number.", third); 

	return 0; 
} 

