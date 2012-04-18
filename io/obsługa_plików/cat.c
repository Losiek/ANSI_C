#include <stdio.h>

//cat: skelj zawatroœæ plików, wersja 1
int main(int argc, char *argv[]) {
    FILE *fp;
    void filecopy(FILE *, FILE *);
    
    if (argc == 1) {   //bez argumentów
       filecopy(stdin, stdout);
    } else {
       while(--argc > 0) {
        if ((fp = fopen(*++argv, "r")) == NULL) {
                printf("cat: nie mogê otworzyæ %s\n", *argv);
                while(getchar() != '\n');
                return 1;
        } else {
                filecopy(fp, stdout);
                fclose(fp);
        }
       }
    }
    while(getchar() != '\n');
    return 0;
}

//filecopy: kopiuj zwartoœæ pliku ifp do pliku ofp 
void filecopy(FILE *ifp, FILE *ofp) {
     int c;
     
     while((c = getc(ifp)) != EOF) {
              putc(c, ofp);
     }
}
