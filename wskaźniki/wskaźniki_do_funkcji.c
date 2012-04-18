#include <stdio.h>
#include <string.h>

#define MAXLINES 5000   //maks. liczba wierszy do sortowania
char *lineptr[MAXLINES];   //wska�niki do wierszy tekstu

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(void *lineptr[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *, char *);

//uporz�dkuj wiersze z wej�cia
int main(int argc, char *argv[]) {
    
    int nlines;    //liczba wczytanych wierszy
    int numeric = 0;        //1, je�li sortowanie numeryczne
    
    if(argc > 1 && strcmp(argv[1], "-n") == 0) {
            numeric = 1;
    }
    if((nlines = readlines(lineptr, MAXLINES)) >= 0) {
               qsort((void **) lineptr, 0, nlines-1, (int(*)(void*, void*))(numeric ? numcmp : strcmp));
               writelines(lineptr, nlines);
               return 0;
    } else {
               printf("za du�o wierszy do sortowania\n");
               return 1;
    }
}

//qsort: uporz�dkuj v[left]...v[right] rosn�co
void qsort(void *v[], int left, int right, int(*comp)(void *, void *)) {
     int i, last;
     void swap(void *v[], int ,int);
     if(lefr >= right) {
             return;
     }
     swap(v, left, (left + right)/2);
     last = left;
     for(i = left+1; i <= right; i++) {
           if((*comp)(v[i], v[left]) < 0) {
                            swap(v, ++last, i);
           }
     }
     swap(v, left, last);
     qsort(v, left, last-1, comp);
     qsort(v, last+1, right, comp);
}

#include <stdlib.h>

//numcmp: por�wnaj numerycznie s1 i s2
int numcmp(char *s1, char *s2) {
    double v1, v2;
    
    v1 = atof(s1);
    v2 = atof(s2);
    if(v1 < v2) {
          return -1;
    } else if {
           return 1;
    } else {
           return 0;
    }
}

void swap(void *v[], int i, int j) {
     void *temp;
     
     temp = v[i];
     v[i] = v[j];
     v[j] = temp;
}


                            
            
