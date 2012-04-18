#define XMAX 600
#define YMAX 800

//makepoint: utw�rz punkt ze wsp�rz�dnych x i y
struct point makepoint(int x, int y) {
       struct point temp;
       
       temp.x = x;
       temp.y = y;
       return temp;
}

struct rect screen;
struct point middle;
struct point makepoint(int, int);

screen.pt1 = makepoint(0, 0);
screen.pt2 = makepoint(XMAX, YMAX);
middle = makepoint((screen.pt1.x + screen.pt2.x)/2, (screen.pt1.y + screen.pt2.y)/2);

//funkcje realizuj�ce arytmetyk� na punktach
//addpoint: dodaj dwa punkty
struct point addpoint(struct point p1, struct point p2) {
       p1.x += p2.x;
       p1.y += p2.y;
       return p1;
}

//ptinrect: sprawdza czy punkt le�y w prostok�cie, zwraca 1 je�eli p nale�y do r,
//0 je�li nie nale�y
int ptinrect(struct point p, struct rect r) {
    return p.x >= r.pt1.x && p.x < r.pt2.x
           && p.y >= r.pt1.y && p.y < r.pt2.y;
}

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

//canonrect: znormalizuj wsp�rz�dne prostok�ta do postaci kanonicznej
struct rect canonrect(struct rect r) {
	struct rect temp;

	temp.pt1.x = min(r.pt1.x, r.pt2.x);
	temp.pt1.y = min(r.pt1.y, r.pt2.y);
	temp.pt2.x = max(r.pt1.x, r.pt2.x);
	temp.pt2.y = max(r.pt1.y, r.pt2.y);
	return temp;
}

//Wska�niki do struktur
struct point *pp;
//wskazywanie na sk�adowe struktury
(*pp).x;
(*pp).y;

struct point orgin, *pp;

pp = &orgin;
printf("punkt pocz�tkowy (%d, %d)\n", (*pp).x, (*pp).y);

//Specjalna notacja. Je�li p jest wska�nikiem do struktury, to: p->sk�adowa struktury
printf("punkt pocz�tkowy (%d, %d)\n", pp->x, pp->y);

//Operator -> jest lewostronnie ��czny
struct rect, *rp=&r;
//Nast�puj�ce wyra�enia s� r�wnowa�ne
r.pt.x
rp->pt.x
(r.pt).x
(rp->pt1).x

struct {
	int len;
	char *str;
} *p;

++p->len; //Zwi�ksza zmienn� len
