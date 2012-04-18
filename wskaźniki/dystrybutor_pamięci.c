//Program dystrybutora pami�ci
#define ALLOCSIZE 10000 //rozmiar dost�pnej pami�ci

static char allocbuf[ALLOCSIZE]; //pami�� dla alloc
static char *allocp = allocbuf;  //nast�pna wolna pozycja

char *alloc(int n) {  //podaj wska�nik do n znak�w
     if(allocbuf + ALLOCSIZE - allocp >= n) {
                 allocp += n;
                 return allocp - n;   //zwr�� star� warto�� allocp
     }
     else {      //za ma�o miejsca
          return 0;
     }
}
           
void afree(char *p) { //zwolnij pami�� wskazan� przez p     
          if(p>=allocbuf && p< allocbuf + ALLOCSIZE) {
                         allocp = p;
          }
}

int main() {
    return 0;
}
