#include <stdio.h>

/*echo argument�w wywo�ania; wersja 1 
int main(int argc, char *argv[]) {
    int i;
    
    for(i = 1; i < argc; i++) {
          printf("%s%s", argv[i], (i < argc - 1) ? " ":"");
          }
    printf("\n");
    
    while(getchar() != '\n');
    return 0;
}*/

/*echo argument�w wywo�ania; wersja 2
int main(int argc, char *argv[]) {
    while(--argc > 0) {
                 printf("%s%s", *++argv, (argc > 1) ? " ":"");
                 }
                 
    printf("\n");
    
    while(getchar() != '\n');
    return 0;
}*/

//wyszukiwanie wierszy zawieraj�cych wzorzec
#include <string.h>
#define MAXLINE 1000

int getline(char *line, int max);

//find: wypisz wiersze pasuj�ce do wzorca z 1. argumentu
int main(int argc, char *argv[]) {
    
    char line[MAXLINE];
    int found = 0;
    
    if(argc != 2) {
            printf("Format wywo�ania: find wzoezec\n");
            }
    else {
         while(getline(line, MAXLINE) > 0) {
                             if (strstr(line, argv[1]) != NULL) {
                                             printf("%s", line);
                                             found++;
                             }
         }
         return found;
    }
    
    while(getchar() != '\n');
    return 0;
}
