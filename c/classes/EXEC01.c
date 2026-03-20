#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool validate_hours(char N1, char N2) {
    char number[3];
    number[0] = N1;
    number[1] = N2;
    number[2] = '\0';

    int real_number = atoi(number);

    return(real_number >= 0 && real_number <= 23);
}

bool validate_minute(char N1, char N2) {
    char number[3];
    number[0] = N1;
    number[1] = N2;
    number[2] = '\0';

    int real_number = atoi(number);

    return(real_number >= 0 && real_number <= 59);
}


int main(){

    char time[6];
    bool is_hours, is_minute;

    fgets(time, 6, stdin);

    is_hours = validate_hours(time[0], time[1]);
    is_minute = validate_minute(time[3], time[4]);
    if (is_hours && is_minute && time[2] == ':') {
        printf("HORARIO VALIDO\n");
    } else {
        printf("HORARIO INVALIDO\n");
    }

    return 0;
}
