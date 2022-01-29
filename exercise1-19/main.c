#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100

// I spelled line as layn since getline() is an existing
// function in C.
//
// write a function reverse(s) that reverses the character string
// use it to write a program that reverses its input a line at 
// a time.
int getlayn(char s[], int lim);
char * revlayn(char s[], int len);

int main() {
    char line[MAXLINE];
    int len = 0;
    while ((len = getlayn(line, MAXLINE)) != 0) {
        char *revstring = revlayn(line, len);
        printf("%s\n", revstring);
        free(revstring);
    }

    return 0;
}

int getlayn(char s[], int lim) {
    int ch = 0;
    int i = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            break;
        }
        if (i > MAXLINE) {
            break;
        }
        s[i] = ch;
        ++i;
    }

    s[i] = '\0';
    return i;
}

char * revlayn(char s[], int len) {
    char * revstr = (char *)malloc(len);    
    for (int i = 0; i < len; i++) {
        revstr[i] = 0;
    }
    for (int i = 0; i < len; i++) {
        revstr[len - 1 - i] = s[i];
    }
    revstr[len] = '\0';
    return revstr;
}


