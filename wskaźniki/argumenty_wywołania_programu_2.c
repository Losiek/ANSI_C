#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getline(char *line, int max);

//find: wypisz wiersze pasuj¹ce do wzorca z 1. obowi¹zkowego arg.
int main() {
    char line[MAXLINE];
    
    long lineono = 0;
    int c, except = 0, number = 0, found = 0;
    
    while(--argc > 0 && (*++argv)[0] == '-') {
                 while(c == *++argv[0]) {
                         switch (c) {
                                case 'x':
                                     except = 1;
                                     break;
                                case 'n':
                                     number = 1;
                                     break;
                                default:
                                        printf("find: nieznana opcja %c\n", c);
                                        argc = 0;
                                        found = -1;
                                        break;
                                }
                         }
                 if(argc != 1) {
                         printf("Format wywo³ania: find -x -n wzorzec\n");
                 } else {
                        while(getline(line, MAXLINE) > 0) {
                                            lineon++;
                                            if(strstr(line, *argv) != NULL) != except) {
                                                            if (number) {
                                                                        printf("%Id:", lineno);
                                                                        }
                                                            printf("%s", line);
                                                            found++;
                                                            }
                                            }
                        return found;
}
                         
                         
