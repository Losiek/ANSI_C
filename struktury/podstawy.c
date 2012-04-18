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

//wyœwietlanie sk³adowych struktury
printf("%d, %d", pt.x, pt.y);

//wyliczenie odleg³oœci miêdzy punktami
double dist, sqrt(double);
dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);

//zagnie¿d¿one struktury, prostok¹t sk³adaj¹cy sie z dwóch punktów
struct rect {
       struct point pt1;
       struct point pt2;
};

struct rect screen;
screen.pt.x; 
