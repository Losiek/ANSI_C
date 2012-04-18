#include <stdio.h>

static char daytab[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31},
                             {0, 31, 29, 31, 30, 31, 30, 31, 30, 31, 30, 31}};
                             
//day_of_year: podaje dzieñ roku na podstawie miesi¹ca i dnia
int day_of_year(int year, int month, int day) {
    int i, leap;
    
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for(i = 1; i < month; i++) {
          day += daytab[leap][i];
          }
    return day;
}

//month_day: podaje miesi¹c i dzieñ na podstawie dnia roku
void month_day(int year, int yearday, int *pmonth, int *pday) {
     int i, leap;
     
     leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
     for(i = 1; yearday > daytab[leap][i]; i++) {
           yearday -= daytab[leap][i];
           }
     *pmonth = i;
     *pday = yearday;
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

int main() {
    int year, month, day; //miesi¹c i dzieñ miesi¹ca
    char line[11];
    
    printf("Podaj rok, miesi¹c i dzieñ [rrrr-mm-dd]\n");
    getline(line, 11);
    char year_t[5] = {line[0], line[1], line[2], line[3], '\0'};
    char month_t[3] = {line[5], line[6], '\0'};
    char day_t[3] = {line[8], line[9], '\0'};
    
    year = atoi(&year_t);
    month = atoi(&month_t);
    day = atoi(&day_t);
    
    printf("%d\n", day_of_year(year, month, day));
    
    while(1);
    return 0;
}
