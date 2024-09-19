#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define RED "\033[31m"
#define GREEN "\033[33m"
#define CLEAR "\033[37m"

/* #define MANUAL */

// Function prototype to find the substring index
int find_substr(char* sentence, char* word);
int main()
{
    // Sentence declaration
#ifndef  MANUAL
    char sentence[] = "hhello world how are you hope all are fine";
#else
    size_t buffsize = 32;
    char sentence[100];
    printf("Enter sentence: \n");
    getline(sentence",sentence);
#endif

    printf(GREEN "sentence: " RED "\n\t\"%s\"\n" CLEAR, sentence);
    
    // Input word
    char word[10];
    printf("Enter a word (max len 10): ");
    scanf("%9s", word); // Limiting input to avoid buffer overflow
    
    // Find substring index
    int index = find_substr(sentence, word);

    // Result handling
    if (index == -1) {
        printf("Sub-string not found !!\n");
    } else {
        printf("Sub-string found at index %d \n", index);
    }

    return 0;
}

// Function to find the index of a substring
int find_substr(char* sentence, char* word)
{
    int len_sentence = strlen(sentence);
    int len_word = strlen(word);
    
    // Iterate through the sentence
    for (int i = 0; i <= len_sentence - len_word; ++i) {
        int j = 0;
        
        // Check if current part of sentence matches word
        while (j < len_word && sentence[i + j] == word[j]) {
            j++;
        }
        
        // If the entire word is found
        if (j == len_word) {
            return i; // Return the starting index
        }
    }

    return -1; // Return -1 if no match is found
}

