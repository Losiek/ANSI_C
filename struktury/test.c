#include <stdio.h>

int main() {
    struct a {
           char b;
           char c;
    } *p; //wskaŸnik do struktury
    
    struct a_int {
           unsigned char b;
           unsigned char c;
           unsigned char d;
           unsigned char e;
    } *p_int; //wskaŸnik do struktury
    
    char tab[2] = {9,10};
    unsigned int liczba = 36824;
    unsigned int *p_liczba = &liczba;
    
    p = (struct a *)tab;
    p_int = (struct a *)p_liczba;
    
    printf("wskaznik p %p\n", p);
    printf("tab[0] = %d, tab[1] = %d\n", tab[0], tab[1]);
    printf("b = %d, c = %d", p->b, p->c);
 
    printf("\n\nunsigned int = %d\n", liczba);
    printf("%d %d %d %d", p_int->b, p_int->c, p_int->d, p_int->e);
    //char i;
    /*for(i = 0; i<4; i++) {
             printf("%d ", p_int->b);
    }*/
    while(getchar() != '\n');
    return 0;
}
    
    
    
    
    
