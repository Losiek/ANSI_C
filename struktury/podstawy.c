//deklaracja struktury
struct point {
       int x;
       int y;
};

//deklaracja struktury z elemantami
struct point {
       int x;
       int y;
} x, y, z;

struct point pt;

//inicjacja struktury
struct point maxpt = { 320, 200 };

//wy�wietlanie sk�adowych struktury
printf("%d, %d", pt.x, pt.y);

//wyliczenie odleg�o�ci mi�dzy punktami
double dist, sqrt(double);
dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);

//zagnie�d�one struktury, prostok�t sk�adaj�cy sie z dw�ch punkt�w
struct rect {
       struct point pt1;
       struct point pt2;
};

struct rect screen;
screen.pt.x; 
