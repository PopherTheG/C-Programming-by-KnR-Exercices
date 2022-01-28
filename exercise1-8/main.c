// Write a program to count blanks, tabs, and newlines.
#include <stdio.h>

int main() {
    int tab_count = 0;
    int space_count = 0;
    int newline_count = 0;

    int ch = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '\t') {
            ++tab_count;
        } else if (ch == ' ') {
            ++space_count;
        } else if (ch == '\n') {
            ++newline_count;
        }
    }   
    printf("tab: %d space: %d newline: %d\n", tab_count, space_count, newline_count);
    return 0;
}
