#include <stdio.h>
#include <stdbool.h>

void odd_pyramid(int sz);
void main()
{	
	int num; 
start:
	printf("Enter a Number: \r\n");
	scanf("%d", &num);
	/*
	// input validation 
	if (num % 2 == 0){
	printf("!! Enter valid Odd number \r\n");
	goto start;
	}
	*/

	// print pyramid
	odd_pyramid(num);
}

void odd_pyramid(int sz)
{
	for (int i = -2; i <= sz; i+=2){
		int space = (sz - i) / 2 + 1;
		printf("\n");
		/* printf("%d", space); */
		while (--space){
			printf("\t");
		}
		for (int j = 0; j < i; ++j){
			printf("*\t");
		}
	}

	printf("\n");
}


