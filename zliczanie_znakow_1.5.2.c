#include <stdio.h>
//zlicza znaki wej�ciowe; wersja 1
int main() {
    long nc;
    
    nc = 0;
    while (getchar() != EOF) {
           ++nc;
           printf("%ld\n", nc);
           }
}
