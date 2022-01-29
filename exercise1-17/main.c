// Write a program to print all input lines that are 
// longer than 80 characters.

#include <stdio.h>

#define THRESEHOLD 80
#define MAXLINE 1000

int retrieve_line(char s[], int lim);

int main() {
    char line[MAXLINE]; 
    int ch_count = 0;

    while ((ch_count = retrieve_line(line, MAXLINE)) > 0) {
        if (ch_count > THRESEHOLD) {
            printf("%s\n", line);
        }
    }
    return 0;
}

int retrieve_line(char s[], int lim) {
    int ch = 0;
    int i = 0;
    while (((ch = getchar()) != EOF)) {
        if (ch == '\n' || i >= lim) {
            break;
        }
        s[i] = ch;
        i++;
    }
    s[i] = '\0';
    return i;
}


