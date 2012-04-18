//month_name: podaj nazw� n-tego miesi�ca
char *month_name(int n) {
     
     static char *name[] = {"b��dny miesi�c", "stycze�", "luty", "marzec", "kwiecie�",
                            "maj", "czerwiec", "lipiec", "sierpie�", "wrzesie�",
                            "pa�nidziernik", "listopad", "grudzie�"};
                           
     return (n < 1 || n > 12) ? name[0]:name[n];
}
