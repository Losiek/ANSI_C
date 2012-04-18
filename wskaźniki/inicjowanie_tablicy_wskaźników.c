//month_name: podaj nazwê n-tego miesi¹ca
char *month_name(int n) {
     
     static char *name[] = {"b³êdny miesi¹c", "styczeñ", "luty", "marzec", "kwiecieñ",
                            "maj", "czerwiec", "lipiec", "sierpieñ", "wrzesieñ",
                            "paŸnidziernik", "listopad", "grudzieñ"};
                           
     return (n < 1 || n > 12) ? name[0]:name[n];
}
