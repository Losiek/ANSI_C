#include <stdio.h>

#define MAXLINE 1000 //maksymalny rozmiar wiersza

int getline(char line[], int maxline);
void copy(char to[], char from[]);

//wypisz najd�u�szy wiersz
int main() {
    int len;        //d�ugo�� bie��cego wiersza
    int max;        //poprzednia maks. d�ugo��
    char line[MAXLINE];//bie��cy wiersz z wej�cia
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

//getline: wczytaj wiersz do s, podaj jego d�ugo��
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
    
//copy: przepisz from do to; to musi by� dostatecznie du�e
void copy(char to[], char from[]) {
     int i;
     
     i = 0;
     while ((to[i] = from[i]) != '\0') {
           ++i;
           }
     }
