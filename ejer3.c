#include <stdio.h>
#include <string.h>
int main()
{
int mes, anio;
printf("Introduzca el a%co: ", 164);
scanf("%d", &anio);
    printf( "\n   Introduzca mes: " );
    scanf( "%d", &mes );
    if ( mes >= 1 && mes <= 12 )
switch (mes)
{
case 1:
puts("Enero tiene 31 dias");
break;
case 2:
    if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
    printf("Febrero tiene 29 dias");
        else
puts("Febrero tiene 28 dias");
break;
case 3:
puts("Marzo tiene 31 dias");
break;
case 4:
puts("Abril tiene 30 dias");
break;
case 5:
puts("Mayo tiene 31 dias");
break;
case 6:
puts("Junio tiene 30 dias");
break;
case 7:
puts("Julio tiene 31 dias");
break;
case 8:
puts("Agosto tiene 31 dias");
break;
case 9:
puts("Septiembre tiene 31 dias");
break;
case 10:
puts("Octubre");
break;
case 11:
puts("Noviembre tiene 30 dias");
break;
case 12:
puts("diciembre tiene 31 dias");
break;
default:
puts("error");
}
}
