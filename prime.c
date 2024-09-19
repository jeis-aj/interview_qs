#include <stdio.h>
#include <stdbool.h>


int find_prime(int num);
void main()
{	int num; 
	printf("Enter a Number: \r\n");
	scanf("%d", &num);

	// input validation 
	if (num < 1)
		printf("!! Enter valid number \r\n");
	

	int nth_prime = find_prime(num);
	printf("Nth prime Number: %d\r\n", nth_prime);
}

int find_prime(int num)
{
	int prime_count = 0;
	while (prime_count <= num){
		int j;
		bool flag = 0;
		/* for (int j=0; j <= sqrt(num); j++){ */
		for (j=0; j <= num/2; j++){
			if (num%j == 0){
				break;
			}
		}
		if (j == num/2){
			printf("%d\t", num);
			prime_count++;
		}

	}
	return num;
}

