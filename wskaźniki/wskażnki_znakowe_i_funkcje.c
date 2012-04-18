#include <stdio.h>

//strcpy: skopiuj t do s; wersja tablicowa
void strcpy_t(char *s, char *t) {
     int i;
     
     i=0;
     while((s[i]=t[i]) != '\0') {i++;}
}

//strcpy: wersja wskaŸnikowa
void strcpy_w(char *s, char *t) {
     while((*s=*t) != '\0') {
                   s++;
                   t++;
     }
}

//strcpy: wersja skrócona
void strcpy_2(char *s, char *t) {
     while((*s++ = *t++) != '\0');
}

//strcpy: wersja jeszcze bardziej skrócona
void strcpy_3(char *s, char *t) {
     while(*s++ = *t++); //poniewa¿ warunek pêtli by by³o 1
}

////////////////////////////////////////////////////////////////////////////////
//strcmp: zwóræ: <0 jeœli s < t, 0 jeœli s==t, >0 jeœli s > t
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

//strcmp: wersja wskaŸnikowa
int strcmp_w(char *s, char *t) {
    for(; *s==*t; s++, t++) {
          if(*s=='\0') {return 0;}
    }
    return *s-*t;
}

int main() {
    return 0;
}
