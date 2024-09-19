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

	int index = find_substr(sentence, word);

	if (index == -1){
		printf(" Not found !!\n");
	} else {
		printf("sub string  found at index %d \n", index);
	}

}

int find_substr(char* sentence, char* word)
{
	int index = -1;		// if substr no match found return index -1
	bool match = false;
	int temp_index;
	int j = 0;
	for (int i = 0; i < strlen(sentence); ++i){
		/* bool c_match = sentence[i] == word[j]; */
		if (sentence[i] == word[j])
			temp_index = i;

		while (sentence[++i] == word[++j])
			if (strlen(word)-1 == j) return i; 
			else i = temp_index;
			j = 0;
	}

	return index;

}
