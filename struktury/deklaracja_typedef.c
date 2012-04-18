//typedef do tworzenia nowych nazw typ�w danych
typedef int Lenght; //D�ugo��

//Korzystanie
Lenght len, maxlen;
Lenght *lenghts[];

//Podobnie
typedef char *String; //Tekst, wprowadza synonim String dla char *

//Korzystanie
String p, lineptr[MAXLINES], alloc(int); 
int strcmp(String, String);
p = (String) malloc(100);

//typedef - definiowania w�z�uw drzewa 
typedef struct tnode *Treeptr;  //Wska�nik do w�z�a

typedef struct tnode {          //w�ze� drzewa:
        char *word;
        int count;
        Treeptr left;
        Treeptr right;
} Treenode;

//Zatem procedur� talloc mo�na napisa� tak:
Treeptr talloc(void) {
        return(Treeptr) malloc(sizeof(Treenode));
}

//Bardziej skomplikowana deklaracja
typedef int(*PFI)(char *, char *); //tworzy typ o nazwie PFI jako "wska��ik do 
                                   //funkcji zwracj�cej warto�� typu int (o dw�ch
                                   //argumentach typu char *)"

//Mo�na stosowa� w kontekstach np.
PFI strcmp, numcmp;
