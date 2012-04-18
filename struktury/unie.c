//Unie
//unia jest zmienn¹, która w ró¿nych momentach mo¿e zawieraæ obiekty ró¿nych typów
//unia jest wzorowana na strukturach

union u_tag {
      int ival;
      float fval;
      char *sval;
} u;

//Odwo³anie do sk³adowych unii: nazwa-unii.sk³adowa lub wskaŸnik-do-unii->sk³adowa
if (utype == INT) { printf("%d\n", u.ival); }
else if (utype == FLOAT) { printf("%f\n", u.fval); }      
else if (utype == STRING) { printf("%s\n", u.sval); }
else { printf("zly typ %d w utype\n", utype); }

//Unie mog¹ wystêpowaæ w strukturach i tablicach, i vice versa.
struct {
       char *name;     //nazwa symbolu
       int flags;      //znacznik stanu
       int utype;      //typ wartoœci
       union {         //wartoœæ
             int ival;
             float fval;
             char *sval;
       } u;
} symtab[NSYM];   //tablica symboli

//odwo³anie do sk³adowaej ival ma postaæ:
symtab[i].u.ival

//a odwo³anie do pierwszego znaku tekstu wskazywanego przez sval:
*symtab[i].u.sval
symtab[i].u.sval[0]
