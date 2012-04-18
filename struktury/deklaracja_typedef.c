//typedef do tworzenia nowych nazw typów danych
typedef int Lenght; //D³ugoœæ

//Korzystanie
Lenght len, maxlen;
Lenght *lenghts[];

//Podobnie
typedef char *String; //Tekst, wprowadza synonim String dla char *

//Korzystanie
String p, lineptr[MAXLINES], alloc(int); 
int strcmp(String, String);
p = (String) malloc(100);

//typedef - definiowania wêz³uw drzewa 
typedef struct tnode *Treeptr;  //WskaŸnik do wêz³a

typedef struct tnode {          //wêze³ drzewa:
        char *word;
        int count;
        Treeptr left;
        Treeptr right;
} Treenode;

//Zatem procedurê talloc mo¿na napisaæ tak:
Treeptr talloc(void) {
        return(Treeptr) malloc(sizeof(Treenode));
}

//Bardziej skomplikowana deklaracja
typedef int(*PFI)(char *, char *); //tworzy typ o nazwie PFI jako "wskaŸñik do 
                                   //funkcji zwracj¹cej wartoœæ typu int (o dwóch
                                   //argumentach typu char *)"

//Mo¿na stosowaæ w kontekstach np.
PFI strcmp, numcmp;
