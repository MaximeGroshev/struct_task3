#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};

struct line
{
    struct point a;
    struct point b;
    double len;
};

double distance(struct point, struct point);
void scan_line(struct line *my);
void print_line(struct line my);

int main()
{
    struct line my = {5, 5, 6, 6};
    distance(a, b);
}

double distance(struct point a, struct point b)
{
    struct line my.len= sgrt(((my.a.x)-(my.b.x))*((my.a.x)-(my.b.x))+((my.a.y)-(my.b.y))*((my.a.y)-(my.b.y)));
    printf("%d", my.len);
}
