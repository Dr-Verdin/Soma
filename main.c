#include <stdio.h>

int main(void){
    int M, N, num1 = 0, num2 = 0;

    scanf("%d %d", &M, &N);

    for(int i = M - 1; i >= 0; i--){
        int aux, pot = 1;
            
        scanf("%d", &aux);
            
        for(int j = 1; j <= i; j++){
                pot = pot * 2;
        }
            
        num1 = num1 + (aux * pot);
    }

    for(int i = N - 1; i >= 0; i--){
        int aux, pot=1;
    
        scanf("%d", &aux);
    
        for(int j = 1; j <= i; j++){
            pot = pot * 2;
        }
    
        num2 = num2 + (aux * pot);
    }

    printf("%d", num1 + num2);

    return 0;
}
