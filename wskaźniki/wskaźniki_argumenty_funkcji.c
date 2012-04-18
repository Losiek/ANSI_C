////////////////////////////////////////////////////////////////////////////////
//program pobiera na wej�cie cyfry i tworzy tablic� warto�ci o rozmiarze SIZE

#include <stdio.h>
#include <ctype.h>

#define SIZE 5
#define BUFSIZE 100

int getch(void);
void ungetch(int);

    char buf[BUFSIZE]; //bufor na zwroty ungetch
    int bufp = 0;      //nast�pne wolne miejsce w buforze
    
    int getch(void) {  //we� znak, by� mo�e oddany na wej�cie
        return (bufp > 0) ? buf[--bufp] : getchar();
        }
        
    void ungetch(int c) { //oddaj znak spowrotem na wej�cie
         if(bufp >= BUFSIZE) {
                 printf("ungetch: za wiele zwrot�w\n");
         } else {
                 buf[bufp++] = c;
                 }
         }

//getint: wczytaj nast�pn� liczb� ca�kowit�
    int getint(int *pn) {
        int c, sign;
        
        while (isspace(c = getch())); //pomin bia�e znaki
        
        if(!isdigit(c) && c !=EOF && c != '+' && c != '-') {
                       ungetch(c); //nie jest liczb�
                       return 0;
                       }
                       
        sign = (c == '-') ? -1 : 1;
        if (c == '+' || c == '-') {
              c = getch();
              }
        for(*pn = 0; isdigit(c); c = getch()) {
                *pn = 10 * *pn + (c-'0');
                }
                
        *pn *= sign;
        if(c != EOF) {
             ungetch(c);
             }
        return c;
    }
            
int main() {
        
    int n, array[SIZE], getint(int *);
    for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++);
    
    printf("\n");
    
    int i;
    for(i=0; i<SIZE; i++) {
            printf("d%d\n", array[i]);
    }
    
    while(getchar()!='\n');
    return 0;
}        
