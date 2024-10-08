
#include <stdio.h>
#include <stdbool.h>

void pyramid(int sz);
void main()
{	int num; 
	printf("Enter a Number: \r\n");
	scanf("%d", &num);

	// input validation 
	if (num < 1){
		printf("!! Enter valid number \r\n");
		return;
	}

	// print pyramid
	pyramid(num);
}

void pyramid(int sz)
{
	for (int i = 0; i <= sz; ++i){
		int space = (sz - i) / 2 + 2;

		printf("\n");

		/* printf("%d", space); */		// debug purpose

		while (--space) printf("        ");		// print space  for pymamid look
		if (i % 2 != 0)
			printf("    ");		// print space  for pymamid look

		for (int j = 0; j < i; ++j){
			printf("*       ");
		}
	}

	printf("\n");
}


