#include <stdio.h>
#include <math.h>

unsigned long int next = 1;
unsigned long int const promien = 32767;

unsigned long int Np;
unsigned long int N;
//daj pseudo-losow¹ liczbê ca³kowit¹ z przedzia³u 0..32767
int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}

int main() {
    //losuj parê liczb x,y
    int x, y;
    
    int i;
    for(i=0; i<=1000; ++i) {
       x = rand();
       y = rand();
       if((sqrt(promien - (x^2))) < y) {
                        ++Np;
                        } else {
                     ++N;
                       }
                       }
    printf("%d %d\n", Np, N);
           
    for(;;) {}
    return 0;
}
