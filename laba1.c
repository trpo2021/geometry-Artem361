#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAZSIZE 40
int main()
{
char file_name[10];
FILE* fille;
printf("File name:");
fgets(file_name, 50, stdin);
*strchr(file_name, '\n') = 0;
fille=fopen(file_name,"r");
if (fille == NULL)
printf("нет файла\n");
char str[MAZSIZE];
fgets(str, MAZSIZE, fille);
fputs(str, stdout);
char figura[8]="circle";
int i;
int konec;
double x,y,R;
while (str[konec] != ')'){
konec++;
}
konec=konec+2;
while (str[i] != '\0'){
i++;
}
if(i>konec){
printf("Лишние данные после объявления\n");
return 0;
}

