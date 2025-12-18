#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sual_sayi=10;
    int a,b;
    int cavab;
    int dogru_sayi=0;
    int sehv_sayi=0;
    
    srand(time(NULL));
    printf("Oyun basladi!\n\n");
    
    for(int i=1; i<= sual_sayi; i++) {
        a=rand()%100;
        b=rand()%100;
        int dogru_cavab = a + b;
        
        printf("%d-ci sual: %d + %d = ", i, a, b);
        scanf("%d",&cavab);
        
        if(cavab==dogru_cavab) {
            printf("Dogru cavab!\n\n");
            dogru_sayi++;
        } else {
            printf("sehv cavab. Dogru cavab: %d\n\n",dogru_cavab);
            sehv_sayi++;
        }
    }
    printf("===OYUN BITDI===\n");
    printf("Dogru cavablar: %d\n", dogru_sayi);
     printf("Sehv cavablar: %d\n", sehv_sayi);
    return 0;
}
