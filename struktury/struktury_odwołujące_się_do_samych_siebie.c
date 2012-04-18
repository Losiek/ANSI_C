//Drzewo binarne
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

struct tnode {                   //wêze³ drzewa
       char *word;               //wskaŸñik do tekstu s³owa
       int count;                //licznik wyst¹pieñ
       struct tnode *left;       //lewy potomek
       struct tnode *right;      //prawy potomek
};

struct tnode *addtree(struct tnode *, char *);
void treeprint(struct tnode *);
int getword(char *, int);

//Zlicz wyst¹pienia s³ów
int main() {
    struct tnode *root; //wskaŸnik do korzenia drzewa
    char word[MAXWORD];
    
    root = NULL;
    while (getword(word, MAXWORD) != EOF) {
          if(isalpha(word[0])) {
             root = addtree(root, word);
          }
    }
    treeprint(root);
    return 0;
}

struct tnode *talloc(void);
char *strdup(const char *);

//addtree: dodaj wêze³ dla w; szukaj w p lub poni¿ej p
struct tnode *addtree(struct tnode *p, char *w) {
       int cond;
       
       if(p == NULL) {       //w jest nowym s³owem
            p = talloc();    //ustwórz nowy wêze³
            p->word = strdup(w);
            p->count = 1;
            p->left = p->right = NULL;
       } else if((cond = strcmp(w, p->word)) == 0) {
            p->count++;      //powtórzone s³owo
       } else if(cond < 0) { //mniejsze: do lewego poddrzewa
            p->left = addtree(p->left, w);
       } else {              //wiêksze: do prawego poddrzewa
            p->right = addtree(p->right, w);
       }
       return p;
}

//treeprint: wypisz uporz¹dkowane drzewo p
void treeprint(struct tnode *p) {
     if( p != NULL ) {
         treeprint(p->left);
         printf("%4d %s\n", p->count, p->word);
         treeprint(p->right);
     }
}

#include <stdlib.h>

//talloc: utwórz wêze³
struct tnode *talloc(void) {
       
       return (struct tnode *) malloc(sizeof(struct tnode));
}

//strdup: sporz¹dŸ kopiê s
char *strdup(const char *s) {
     char *p;
     
     p = (char *) malloc(strlen(s)+1); //+1 dla '\0'
     if(p != NULL) {
          strcpy(p, s);
     }
     return p;
}



//getword: weŸ nastêpne s³owo lub znak z wejœcia
int getword(char *word, int lim) {
    int c, getch(void);
    void ungetch(int);
    char *w = word;
    
    while(isspace(c = getch()));
    
    if(c != EOF) {
         *w++ = c;
    }
    if(!isalpha(c)) {
                    *w = '\0';
                    return c;
    }
    
    for(; --lim > 0; w++) {
          if(!isalnum(*w = getch())) {
                         ungetch(*w);
                         break;
          }
    }
    *w = '\0';
    return word[0];
}
 
            
             
