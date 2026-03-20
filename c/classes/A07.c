#include <stdio.h>

int main(){

    int horas;

    printf("DIGITE O HORARIO: ");
    scanf("%d", &horas);

    if( horas > 12 ){
        printf("BOA TARDE!");
    }else{
        printf("BOM DIA!");
    }
    return 0;
}
