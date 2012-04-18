#include <stdio.h>

//cat: skelj zawatroœæ plików, wersja 2
int main(int argc, char *argv[]) {
    FILE *fp;
    void filecopy(FILE *, FILE *);
    char *prog = argv[0];	//nazwa programu do komunikatów

    if (argc == 1) {   //bez argumentów
       filecopy(stdin, stdout);
    } else {
       while(--argc > 0) {
        if ((fp = fopen(*++argv, "r")) == NULL) {
                fprintf(stderr, "%s: nie mogê otworzyæ %s\n", prog, *argv);
                exit(1);
        } else {
                filecopy(fp, stdout);
                fclose(fp);
        }
       }
    if (ferror(stdout)) {
	fprintf(stderr, "%s: b³±d pisania do stdout\n", prog);
	exit(2);
    }
    exit(0);
    return 0;
}

//filecopy: kopiuj zwartoœæ pliku ifp do pliku ofp 
void filecopy(FILE *ifp, FILE *ofp) {
     int c;
     
     while((c = getc(ifp)) != EOF) {
              putc(c, ofp);
     }
}
