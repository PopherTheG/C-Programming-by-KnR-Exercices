// Write a program to copy its input to its output,
// replacing each string of one ore more blanks by
// a single blank.

#include <stdio.h>

int main() {
    int ch = 0;
    char previous_char = 0;
    char current_char = 0;
    int first_pass = 1;

    while ((ch = getchar()) != EOF) {
        if (first_pass) {
            current_char = (char)ch;
            putchar(current_char);
            first_pass = 0;
            continue;
        }
        previous_char = current_char;
        current_char = ch;
        if (!((previous_char == ' ') && (current_char == ' '))) {
            putchar(current_char);
        }
    }
    return 0;
}

