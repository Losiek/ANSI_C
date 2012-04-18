#include <stdio.h>
 
int suma (int lhs, int rhs)
{
 return lhs+rhs;
}

int roznica (int lhs, int rhs)
{
 return lhs-rhs;
}

int main ()
{
    int (*wsk_suma)(int a, int b) = suma;
    printf("4+5=%d\n\n", wsk_suma(4,5));
    
    int (*tab_wsk[10])(int a, int b);
    tab_wsk[0] = suma;
    tab_wsk[1] = roznica;
    printf("4+5=%d\n", tab_wsk[0](4,5));
    printf("4-5=%d\n", tab_wsk[1](4,5));
     
    while(getchar() != '\n');
    return 0;
}
