#include <stdio.h>

void strcopy(char *d, char *s);

unsigned char napis1[10]={"Olek"};
unsigned char napis2[10];

int main() {
    printf("%s\n\r", napis2);
   // strcopy(napis2[], napis1[]);
    printf("%s\n\r", napis2);
    
    //while(getchar() != '\n'){}
    return 0;
}

void strcopy(char* d, char* s) {
	while(*d++ = *s++) {}
}
