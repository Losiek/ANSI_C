//Unie
//unia jest zmienn�, kt�ra w r�nych momentach mo�e zawiera� obiekty r�nych typ�w
//unia jest wzorowana na strukturach

union u_tag {
      int ival;
      float fval;
      char *sval;
} u;

//Odwo�anie do sk�adowych unii: nazwa-unii.sk�adowa lub wska�nik-do-unii->sk�adowa
if (utype == INT) { printf("%d\n", u.ival); }
else if (utype == FLOAT) { printf("%f\n", u.fval); }      
else if (utype == STRING) { printf("%s\n", u.sval); }
else { printf("zly typ %d w utype\n", utype); }

//Unie mog� wyst�powa� w strukturach i tablicach, i vice versa.
struct {
       char *name;     //nazwa symbolu
       int flags;      //znacznik stanu
       int utype;      //typ warto�ci
       union {         //warto��
             int ival;
             float fval;
             char *sval;
       } u;
} symtab[NSYM];   //tablica symboli

//odwo�anie do sk�adowaej ival ma posta�:
symtab[i].u.ival

//a odwo�anie do pierwszego znaku tekstu wskazywanego przez sval:
*symtab[i].u.sval
symtab[i].u.sval[0]
