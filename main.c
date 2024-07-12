#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);

    if (M <= 30 && N <= 30){
            //definindo o espaço dos vetores
        int bin1[N];
        int bin2[M];

        // o ponteiro1 aponta para a primeira posição do vetor bin1
        int *p1 = bin1;
        for (int i = 0; i < N; i++) {
            scanf("%d", &(*p1));
            //o ponteiro aponta para a proxima posição
            p1++; 
            //armazena no vetor bin1 usando o ponteiro p1 o binario
        }

        // o ponteiro2 aponta para a primeira posição do vetor bin2
        int *p2 = bin2;
        for (int i = 0; i < M; i++) {
            scanf("%d", &(*p2));
            //o ponteiro aponta para a proxima posição
            p2++;
            //armazena no vetor bin1 usando o ponteiro p1
        }

        int dec1 = 0, dec2 = 0;
        int pot = 1;

        //p1 aponta para o último elemento do vetor bin1
        p1 = bin1 + N - 1;
        //converte os bits armazenados em bin1 para decimal e armazena o resultado em dec1
        while (p1 >= bin1) {
            dec1 += (*p1)*pot;
            pot *= 2;
            p1--;
        }

        //reseta o valor da potencia 
        pot = 1;
        //p2 aponta para o último elemento do vetor bin2
        p2 = bin2 + M - 1;
        //converte os bits armazenados em bin2 para decimal e armazena o resultado em dec2
        while (p2 >= bin2) {
            dec2 += (*p2)*pot;
            pot *= 2;
            p2--;
        }

        printf("%d\n", dec1+dec2);
    }

    return 0;
}
