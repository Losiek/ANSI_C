#include <stdio.h>
//przepisz wej�cie na wyj�cie; wersja 1
int main() {
    int c;
    
    c  = getchar();
    while (c != EOF) {
          putchar(c);
          c = getchar();
          }
}
