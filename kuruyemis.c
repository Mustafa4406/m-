#include <stdio.h>

int CekirdekTuru(char tur, int miktar) {
    int fiyat = 8;
    if (tur == 'K' || tur == 'k') {
        fiyat = 100 * miktar;
    } else if (tur == 'A' || tur == 'a') {
        fiyat = 150 * miktar;
    }
    return fiyat;
}

int TuzluTuzsuz(char tur, int miktar) {
    int fiyat = 0;
    if (tur == 'T' || tur == 't') {
        fiyat = 90 * miktar;
    } else if (tur == 'S' || tur == 's') {
        fiyat = 80 * miktar;
    }
    return fiyat;
}

int main() {
    int toplamHarcama = 0;
    char devam = 'e';
    int secim, miktar, araToplam;
    char tur;

    printf("Urun secenekleri:\n1. cekirdek\n2. Fistik\n");

    while (devam == 'e' || devam == 'E') {
        printf("Seciminizi yapin (1 veya 2): ");
        scanf("%d", &secim);

        if (secim == 1) {
            printf("Kac kg cekirdek alacaksiniz: ");
            scanf("%d", &miktar);

            printf("cekirdek turunu secin (Kabak icin 'K', Ay icin 'A'): ");
            scanf(" %c", &tur);

            araToplam = CekirdekTuru(tur, miktar);
            toplamHarcama += araToplam;

            printf("Toplam tutar: %d TL\n", araToplam);

        } else if (secim == 2) { 
            printf("Kac kg fistik alacaksiniz: ");
            scanf("%d", &miktar);

            printf("Fistik turunu secin (Tuzlu için 'T', Tuzsuz için 'S'): ");
            scanf(" %c", &tur);

            araToplam = TuzluTuzsuz(tur, miktar);
            toplamHarcama += araToplam;

            printf("Toplam tutar: %d TL\n", araToplam);
        } else {
            printf("Gecersiz secim yaptiniz!\n");
        }

        printf("Baska bir urun almak ister misiniz? (Evet icin 'e' veya 'E'): ");
        scanf(" %c", &devam);
    }

    printf("Toplam harcama: %d TL\n", toplamHarcama);

    return 0;
}
