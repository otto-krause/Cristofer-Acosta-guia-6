#include <stdio.h>
#include <stdlib.h>
int main()
{
char ch;
printf("Introduzca una calificacion (A-F): ");
ch = getchar ();
switch (ch)
{
case 'a':
puts("Su calificacion es exelente.");
break;
case 'b':
puts("Su calificacion es buena.");
break;
case 'c':
puts("Su calificacion es regular.");
break;
case 'd':
puts("Su calificacion es suficiente.");
break;
case 'f':
puts("Su calificacion es no suficiente.");
break;
default:
puts("error");
}
system("pause");
}
