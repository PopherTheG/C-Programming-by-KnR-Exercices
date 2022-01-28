// Write a program that prints its input one word per line.
#include <stdio.h>


int main() {
    int ch  = 0;
    int added_newline = 0;

    while ((ch = getchar()) != EOF) {
        if ((ch == ' ') || (ch == '\t') || (ch == '\n')) {
            if (added_newline == 0) {
                putchar('\n');
                added_newline = 1;
            }    
        } else {
            putchar(ch);
            added_newline = 0;
        }
    }
    return 0;
}

