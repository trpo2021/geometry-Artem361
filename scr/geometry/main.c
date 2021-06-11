#include <libgeometry/geom.h>

int main()
{
struct circle* c = malloc(sizeof(struct circle));
int data = 36;
FILE* input;
input = fopen("coordinat.txt", "r");
if (input == NULL) {
printf("Error open file\n");
exit(0);
}

char data[MAZSIZE];
fgets(data,MAZSIZE, input);
fputs(data,stdout);
parcer(data,c);  
printf("coordinat x=%f",c->x);
printf("coordinay y=%f",c->y);
printf("coordinat R=%f\n",c->R);
printf("Square of circle = %f\n", Squa(c));
printf("Perimetr of the circle = %f\n", Perim(c));
}
