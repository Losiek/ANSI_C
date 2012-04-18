#include <stdio.h>
//przepisz wejœcie na wyjœcie; wersja 1
int main() {
    int c;
    
    c  = getchar();
    while (c != EOF) {
          putchar(c);
          c = getchar();
          }
}
