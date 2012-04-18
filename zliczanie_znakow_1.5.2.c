#include <stdio.h>
//zlicza znaki wejœciowe; wersja 1
int main() {
    long nc;
    
    nc = 0;
    while (getchar() != EOF) {
           ++nc;
           printf("%ld\n", nc);
           }
}
