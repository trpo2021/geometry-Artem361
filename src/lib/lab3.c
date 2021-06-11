#include <lib/geom.h>


void check(char* data, struct circle* c){
  char figure	[8] = "circle";
  int i,end;
  
  
  while (data[end] != ')') {
    end++;
  }
  end = end + 2;
  while (data[i] != '\0') {
    i++;
  }
  if (i > end) {
    printf("Лишние данные после объявления\n");
  }
  
  while (data[i] == ' ') {
    i++;
  }
  for (i = 0; figure[i] != '\0'; i++) {
    if (data[i] != figure[i]) {
      printf("Ошибка:вы имели в виду: circle'?\n");
      exit(0);
    }
  }

  while (data[i] == ' ') {
    i++;
  }
  if (data[i] != '(') {
    printf("Ошибка:не хватает '(' \n");
    exit(0);
  }
  i++;
  while (data[i] == ' ') {
    i++;
  }
  if (isdigit(data[i])) {
    char *tmp1 = &data[i];
    c->x = strtod(tmp1, &tmp1);
    printf("Координата x = %f\n", c->x);
    if (*tmp1 != ' ') {
      printf("Ошибка:нет пробела после первой координаты\n");
      exit(0);
    }
  }
  while (data[i] != ' ') {
    i++;
  }

  while (data[i] == ' ') {
    i++;
  }
  if (isdigit(data[i])) {
    char *tmp2 = &data[i];
    c->y = strtod(tmp2, &tmp2);
    printf("Координата y = %f\n", c->y);
    if ((*tmp2 != ' ') && (*tmp2 != ',')) {
      printf("Ошибка:нет пробела после второй координаты\n");
      exit(0);
    }
  }
  while ((data[i] != ' ') && (data[i] != ',')) {
    i++;
  }
  while (data[i] == ' ') {
    i++;
  }
  if (data[i] != ',') {
    printf("Ошибка: нету ','\n");
  } else {
    i++;
  }
  while (data[i] == ' ') {
    i++;
  }
  if (isdigit(data[i])) {
    char *tmp3 = &data[i];
    c->R= strtod(tmp3, &tmp3);
    printf("R = %f\n",c->R);
    if ((*tmp3 != ' ') && (*tmp3 != ')')) {
      printf("Ошибка:нет пробела после радиуса координаты\n");
      exit(0);
    }
  }
  while ((data[i] != ' ') && (data[i] != ')')) {
    i++;
  }
  if (data[i] != ')') {
    printf("Ошибка: у вас не хватает ')'после значения радиуса\n");
  }
  i++;
  while (data[i] != '\0') {
    i++;
  }
}
float Squa(struct circle* c){
    const float pi = 3.1415;
    float squa;
    squa = pi * c->R * c->R;
    return squa;
}

float Perim(struct circle* c){
    const float pi = 3.1415;
    float perim;
    perim = 2 * pi * c->R;
    return perim;
}
