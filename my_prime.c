#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int find_prime(int num);

int main(void) {
	int num;

	printf("Enter a Number: \n");
	scanf("%d", &num);

	// input validation
	if (num < 1) {
		printf("!! Enter valid number \n");
		return 1; // Indicate an error
	}

	int nth_prime = find_prime(num);
	printf("Nth prime Number: %d\n", nth_prime);

	return 0; // Indicate successful execution
}

int find_prime(int num) {
	int prime_count = 0;			// for counting prime nubmers
	int current_number = 2;			// for iterate throught natural nubmers

	while (prime_count < num) {
		bool is_prime = true;

		for (int j = 2; j <= sqrt(current_number); j++) {
			if (current_number % j == 0) {
				is_prime = false;
				break;
			}
		}

		if (is_prime) {
			/* printf("%d\n", current_number); // debug purpsoe */
			prime_count++;
			if (prime_count == num) {
				return current_number;		// if nth prime reached return
			}
		}

		current_number++;			// incrementing match prime number count
	}

	return 0;
}

/* compile & run in vim cm
	 :!gcc -o out % -lm && ./out
*/
