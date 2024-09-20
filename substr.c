#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define RED "\033[31m"
#define GREEN "\033[33m"
#define CLEAR "\033[37m"

int find_substr(char* sentence, char* word);

void main()
{
	int len;
	char sentence[] = " hello world how are you hope all are fine ";
	printf(GREEN "sentence: " RED "\n\t\"%s\"\n" CLEAR, sentence);
	char word[10];
	printf("Enter a word (max len 10): ");
	scanf("%s",word);
	/* printf("word: %s",word); */

	char *c = strstr(sentence, word);
	int index = c - sentence;

	if (c == NULL){
		printf(" Not found !!\n");
	} else {
		printf("sub string  found at index %d \n", index);
	}

}
