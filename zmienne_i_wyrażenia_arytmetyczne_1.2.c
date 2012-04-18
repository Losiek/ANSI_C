#include <stdio.h>
//wypisz zestawienie temperatur Fahrenheita-Celsjusza dla f = 0, 20, ..., 300

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while (fahr <= upper) {
          celsius = (5.0/9.0) * (fahr-32);
          printf("%3.0f %6.1f\n", fahr, celsius);
          fahr = fahr + step;
          }
    for(;;) {}
}

    
