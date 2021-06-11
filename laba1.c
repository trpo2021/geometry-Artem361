#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAZSIZE 40
int main() {
  char file_name[10];
  FILE *fille;
  printf("File name:");
  fgets(file_name, 50, stdin);
  *strchr(file_name, '\n') = 0;
  fille = fopen(file_name, "r");
  if (fille == NULL)
    printf("нет файла\n");
  char data[MAZSIZE];
  fgets(data, MAZSIZE, fille);
  fputs(data, stdout);
  char figure	[8] = "circle";
  int i,end;
  double x, y, R;
  while (data[end] != ')') {
    end++;
  }
  end = end + 2;
  while (data[i] != '\0') {
    i++;
  }
  if (i > end) {
    printf("Лишние данные после объявления\n");
    return 0;
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
    x = strtod(tmp1, &tmp1);
    printf("Координата x = %f\n", x);
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
    y = strtod(tmp2, &tmp2);
    printf("Координата y = %f\n", y);
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
    R = strtod(tmp3, &tmp3);
    printf("R = %f\n", R);
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
  return 0;
}

