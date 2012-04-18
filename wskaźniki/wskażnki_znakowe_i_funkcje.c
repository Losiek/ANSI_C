#include <stdio.h>

//strcpy: skopiuj t do s; wersja tablicowa
void strcpy_t(char *s, char *t) {
     int i;
     
     i=0;
     while((s[i]=t[i]) != '\0') {i++;}
}

//strcpy: wersja wska�nikowa
void strcpy_w(char *s, char *t) {
     while((*s=*t) != '\0') {
                   s++;
                   t++;
     }
}

//strcpy: wersja skr�cona
void strcpy_2(char *s, char *t) {
     while((*s++ = *t++) != '\0');
}

//strcpy: wersja jeszcze bardziej skr�cona
void strcpy_3(char *s, char *t) {
     while(*s++ = *t++); //poniewa� warunek p�tli by by�o 1
}

////////////////////////////////////////////////////////////////////////////////
//strcmp: zw�r�: <0 je�li s < t, 0 je�li s==t, >0 je�li s > t
//strcmp: indeksowanie tablicy
int strcmp_t(char *s, char *t) {
    int i;
    
    for(i=0; s[i]==t[i]; i++) {
             if(s[i] == '\0') {
                     return 0;
             }
    } 
    return s[i] - t[i];
}

//strcmp: wersja wska�nikowa
int strcmp_w(char *s, char *t) {
    for(; *s==*t; s++, t++) {
          if(*s=='\0') {return 0;}
    }
    return *s-*t;
}

int main() {
    return 0;
}
