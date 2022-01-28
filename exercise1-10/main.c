// Write a program to copy its input to its output, replacing
// each tab by \t, each backsapce by \b, and each backslash by 
// \\. This makes tabs and backspaces visible in an unambiguous
// way.
#include <stdio.h>

int main() {
    int ch = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == 0x1b) {   // 0x1b is ESC in ASCII.
            putchar(0x5c);  // 0x5c is '\' character in ASCII.
            putchar(0x5c);
        } else if (ch == '\t') {
            putchar(0x5c);
            putchar('t');
        } else if (ch == '\b') {
            putchar(0x5c);
            putchar('b');
        } else {
            putchar(ch);
        }
    }
    return 0;
}

