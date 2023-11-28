#include <stdio.h>

int main() {
    int x = 0;
    int n;

    printf("Sayınızın tahmin etmem için üst aralığını giriniz: ");
    scanf("%d", &n);

    while (1) {
        int tahmin = (x + n) / 2;
        printf("Tahminim: %d\n", tahmin);

        char cevap;
        printf("Sayınızı doğru tahmin ettim mi? (e/h): ");
        scanf(" %c", &cevap);

        if (cevap == 'h') {
            char buyuk_kucuk;
            printf("Sayınız tahminimden daha mı küçük? (e/h): ");
            scanf(" %c", &buyuk_kucuk);

            if (buyuk_kucuk == 'e') {
                n = tahmin - 1;
            } else {
                x = tahmin + 1;
            }
        } else if (cevap == 'e') {
            printf("Harika! Sayınızı doğru tahmin ettim.\n");
            break;
        } else {
            printf("Geçerli bir cevap giriniz (e/h).\n");
        }
    }

    return 0;
}


