#include <stdio.h>
#include <string.h>

#define MAXLINES 5000   //maks. liczba wierszy do sortowania

char *lineptr[MAXLINES];        //wska�niki do wierszy tekstu

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(char *lineptr[], int left, int right);

#define MAXLEN 1000         //maks. d�ugo�� wiersza wej�ciowego
int getline(char *, int);
char *alloc(int);

//Program dystrybutora pami�ci
#define ALLOCSIZE 10000 //rozmiar dost�pnej pami�ci

static char allocbuf[ALLOCSIZE]; //pami�� dla alloc
static char *allocp = allocbuf;  //nast�pna wolna pozycja

char *alloc(int n) {  //podaj wska�nik do n znak�w
     if(allocbuf + ALLOCSIZE - allocp >= n) {
                 allocp += n;
                 return allocp - n;   //zwr�� star� warto�� allocp
     }
     else {      //za ma�o miejsca
          return 0;
     }
}

//getline
int getline(char *s, int lim) {
    int c, i;
    
    for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
             s[i] = c;
    }
    if (c == '\n') {
          s[i] = c;
          ++i;
    }
    s[i] = '\0';
    return i;
}

//readlines: wczytaj wiersze z wej�cia
int readlines(char *lineptr[], int maxlines) {
    int len, nlines;
    char *p, line[MAXLEN];
    
    nlines = 0;
    while((len = getline(line, MAXLEN)) > 0) {
               if(nlines >= maxlines || (p = alloc(len))==NULL) {
                         return -1;
               } else {
                         line[len-1]='\0'; //usu� znak nowego wiersza
                         strcpy(p, line);
                         lineptr[nlines++] = p;
               }
    }
    return nlines;
}

//writelines: wypisz wiersze na wy�cie
void writelines(char *lineptr[], int nlines) {
     int i;
     
     for(i=0; i<nlines; i++) {
              printf("%s\n", lineptr[i]);
     }
}

//qsort: uporz�dkkuj teksty v[left]..v[right] rosn�co
void qsort(char *v[], int left, int right) {
     int i, last;
     void swap(char *v[], int i, int j);
     
     if(left>=right) {        //nic nie r�b, je�li tablica zawiera
                     return;  //mniej ni� dwa elementy
     }                          
     swap(v, left, (left + right)/2);
     last = left;
     for(i = left+1; i <= right; i++) {
           if(strcmp(v[i], v[left]) < 0) {
                           swap(v, ++last, i);
           }
     }
     swap(v, left, last);
     qsort(v, left, last-1);
     qsort(v, last+1, right);
}

//swap: zamie� miejscami v[i] i v[j]
void swap(char *v[], int i, int j) {
     char *temp;
     
     temp = v[i];
     v[i] = v[j];
     v[j] = temp;
}

//uporz�dkuj wiersze wej�ciowe
int main() {
    int nlines;      //liczba wcztywanych wierszy
    
    if((nlines = readlines(lineptr, MAXLINES)) >= 0) {
               qsort(lineptr, 0, nlines-1);
               writelines(lineptr, nlines);
               return 0;
    } else {
               printf("b��d: za du�o wierszy do sortowania\n");
               return 1;
    }
}

