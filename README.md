# Exploration of `string.h` Library Functions

This repository contains implementations and usage examples of various functions from the `string.h` library in C/C++. The purpose is to gain a better understanding of how these functions work to manipulate and work with character strings.

## Explored Functions

### `strcmp()`
The `strcmp()` function is part of the `string.h` library and is used to compare two strings in C/C++. It returns an integer value that indicates the lexicographic relationship between the compared strings.

### `strlen()`
The `strlen()` function is used to calculate the length of a string. This function iterates through the string character by character until it encounters the null character (`'\0'`), which signifies the end of the string. It returns the number of characters in the string, excluding the null character.

### `strcpy()`
The `strcpy()` function is used to copy one string into another. It goes through the source string character by character, copying each character into the destination until it encounters the null character. It adds the null character at the end of the destination to ensure that the resulting string is properly terminated.

### `strcat()`
The `strcat()` function is used to concatenate two strings. It locates the end of the destination string and appends the characters from the source string to the end of the destination string. It adds a new null character at the end to ensure the resulting concatenated string is properly terminated.

## Repository Usage

The code in this repository contains implementations of these functions and examples demonstrating how to use them in different contexts. You can explore the files and study how these functions work in detail.
