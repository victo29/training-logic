#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[10];
    int soma = 0, men;
    float media = 0;

    for(int i = 0; i<10; i++){
        printf("Digite %d valor: ", i+1);
        scanf("%d", &arr[i]);
        soma+=arr[i];
    }

    media = soma / 10;

    men = arr[0];
    for(int i = 1; i < 10; i++){
        if(arr[i] < men){
            men = arr[i];
        }
    }

    printf("SOMA: %d\n",  soma);
    printf("MEDIA: %.2lf\n",  media);
    printf("MENOR: %d\n", men);

    return 0;
}
