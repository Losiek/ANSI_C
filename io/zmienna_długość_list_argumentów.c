//Funkcja miniprintf, pos³uguj¹ca siê list¹ argumentów o zmiennej liczbie elementów.
#include <stdarg.h>
#include <stdio.h>

//minprintf: minimalna printf ze zmienn¹ list¹ argumentów
void minprintf(char *fmt, ...) {
     va_list ap;    //wskazuje po kolei ka¿dy nienazwany argument
     char *p, *sval;
     int ival;
     double dval;
     
     va_start(ap, fmt);        //ap wskazuje 1. nienazwany argument
     for (p = fmt; *p; p++) {
         if (*p != '%') {
                putchar(*p);
                continue;
         }
         switch (*++p) {
                case 'd':
                     ival = va_arg(ap, int);
                     printf("%d", ival);
                     break;
                case 'f':
                     dval = va_arg(ap, double);
                     printf("%f", dval);
                     break;
                case 's':
                     for (sval = va_arg(ap, char *); *sval; sval++)
                         putchar(*sval);
                     break;
                default:
                        putchar(*p);
                        break;
         }
     }
     va_end(ap);        //po pracy wyczyœæ co trzeba
}
                  
