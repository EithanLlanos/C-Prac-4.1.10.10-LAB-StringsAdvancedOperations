//Scenario
//A palindrome is a word(or other sequence of characters) that reads the same backward or forward.
//Write a program that takes one word and prints its palindrome.You can use the for loop, the strlen function, and the% s format in scanf and print.
//You can use a new variable or one declared earlier for holding the reversed value of a word.
//Declare a string big enough to hold long words.For the record, you should use fgets instead of scanf in the future, especially when you want to have long strings with spaces.
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample input
//book
//
//Expected output
//koob
//
//Sample input
//dictionary
//
//Expected output
//yranoitcid
//
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <string.h>

int main(void) {
	char word[101];
	char rword[101]="";
	printf("Please enter a word:\n");
	fgets(word, 101, stdin);
	for (int i = strlen(word)-1, y = 0; i >= 0; i--, y++) {
		rword[y] = word[i];
		rword[y + 1] = '\0';
	}
	printf("%s", rword);
	return 0;
}