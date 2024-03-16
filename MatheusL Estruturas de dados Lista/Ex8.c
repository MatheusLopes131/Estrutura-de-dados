#include <stdio.h>

int main(){
    int num;
    long int aux, termo_ant,termo;

    printf("Entre com a posicao: \n");
    scanf("%d", &num);

    termo = 1;
    aux=0;
    printf("%d => %ld\n", 1,termo);

    for(int i=1;i<num;i++){
        termo_ant=termo;
        termo = termo + aux;
        aux = termo_ant;
        printf("%d => %ld\n", (i+1),termo);
    }

    return 0;
}