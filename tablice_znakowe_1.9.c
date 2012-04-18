#include <stdio.h>

#define MAXLINE 1000 //maksymalny rozmiar wiersza

int getline(char line[], int maxline);
void copy(char to[], char from[]);

//wypisz najd³u¿szy wiersz
int main() {
    int len;        //d³ugoœæ bie¿¹cego wiersza
    int max;        //poprzednia maks. d³ugoœæ
    char line[MAXLINE];//bie¿¹cy wiersz z wejœcia
    char longest[MAXLINE];//przechowywany maks. wiersz
    
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
          if(len > max) {
                 max = len;
                 copy(longest, line);
                 }
          }
    if(max > 0) {        //znalezieno wiersz
           printf("%s", longest);
           }
    for(;;) {}
    return 0;
}

//getline: wczytaj wiersz do s, podaj jego d³ugoœæ
int getline(char s[], int lim) {
    int c, i;
    
    for(i = 0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
          s[i] = c;
          if (c == '\n') {
                s[i] = c;
                ++i;
                }
          }
          s[i] = '\0';
          return i;
    }
    
//copy: przepisz from do to; to musi byæ dostatecznie du¿e
void copy(char to[], char from[]) {
     int i;
     
     i = 0;
     while ((to[i] = from[i]) != '\0') {
           ++i;
           }
     }
