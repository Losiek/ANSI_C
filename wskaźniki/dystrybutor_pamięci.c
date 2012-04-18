//Program dystrybutora pamiêci
#define ALLOCSIZE 10000 //rozmiar dostêpnej pamiêci

static char allocbuf[ALLOCSIZE]; //pamiêæ dla alloc
static char *allocp = allocbuf;  //nastêpna wolna pozycja

char *alloc(int n) {  //podaj wskaŸnik do n znaków
     if(allocbuf + ALLOCSIZE - allocp >= n) {
                 allocp += n;
                 return allocp - n;   //zwróæ star¹ wartoœæ allocp
     }
     else {      //za ma³o miejsca
          return 0;
     }
}
           
void afree(char *p) { //zwolnij pamiêæ wskazan¹ przez p     
          if(p>=allocbuf && p< allocbuf + ALLOCSIZE) {
                         allocp = p;
          }
}

int main() {
    return 0;
}
