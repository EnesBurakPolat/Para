#include <stdio.h>
#include <math.h>

int main() {
    while (1) {
          
        printf("\n------Para Kar Hesaplayici-------\n");
        printf("1-Yatirilan Para   /   2-Istenen Kar   /   3-Doviz   /   4-Piyasa Fiyatindan      Cikmak icin 0'a basin\n");
        int girilen_deger;
        double yatirilan_para; //y
        double btc_dolar; //z
        double istenen_btc; //a
        char dolar_isareti='$';
        char yuzde_isareti='%';

        double doviz; 
        double birim_doviz; 

        double su_anki_deger;
        double olacak_deger;

        int deger;


        scanf("%d",&girilen_deger);

        if (girilen_deger == 1) {
            printf("------------------------------------");
            printf("\n1-Yatirilan Para Secildi\n");

            printf("Yatirilan Para:");
            scanf("%lf", &yatirilan_para);

            printf("1 birim kactan alindi: ");
            scanf("%lf", &btc_dolar);

            printf("1 birimin Istenen degeri: ");
            scanf("%lf", &istenen_btc);
            printf("------------------------------------\n");
            double kar=((yatirilan_para / btc_dolar) * istenen_btc) - yatirilan_para;
            printf("Kar: %lf %c",kar,dolar_isareti);
            double toplam=kar+yatirilan_para;
            printf(" / Toplam Para : %lf %c",toplam,dolar_isareti);
            double yuzde=(kar/yatirilan_para)*100;
            printf(" / Artis Yuzdesi: %lf %c", yuzde,yuzde_isareti);
            printf("\n------------------------------------");
        }

        if (girilen_deger == 2) {
            printf("------------------------------------");
            printf("\n2-Istenen Kar Secildi\n");
        
            printf("Yatirilan Para: "); //a
            scanf("%lf", &yatirilan_para);

            printf("Istenen kar: "); //y
            scanf("%lf", &btc_dolar);

            printf("1 birimin degeri: "); //z
            scanf("%lf", &istenen_btc);
            printf("------------------------------------\n");
            double istenen_kar=(istenen_btc*(btc_dolar+yatirilan_para))/yatirilan_para;
            printf("1 birimin olmasi gereken degeri: %lf",istenen_kar);
            double istenen_toplam=btc_dolar+yatirilan_para;
            printf(" / Toplam Para : %lf",istenen_toplam);
            double yuzde=(btc_dolar/yatirilan_para)*100;
            printf(" / Artis Yuzdesi: %lf %c", yuzde,yuzde_isareti);
            printf("\n------------------------------------");
        }

        if (girilen_deger == 3) {
            printf("------------------------------------");
            printf("\n3-Doviz Secildi\n");

            printf("1-Doviz => TL / 2-TL => Doviz\n"); //a
            scanf("%d", &deger);
            if (deger == 1) {
                printf("Doviz gir: "); //a
                scanf("%lf", &doviz);

                printf("1 Doviz kac TL: "); //y
                scanf("%lf", &birim_doviz);

                printf("------------------------------------\n");
                double sonuc_doviz = doviz*birim_doviz;
                printf("%lf doviz : %lf TL",doviz, sonuc_doviz);

                printf("\n------------------------------------");
            }
            if (deger == 2) {
                printf("TL gir: "); //a
                scanf("%lf", &doviz);

                printf("1 Doviz kac TL: "); //y
                scanf("%lf", &birim_doviz);

                printf("------------------------------------\n");
                double sonuc_doviz = doviz/birim_doviz;
                printf("%lf TL : %lf doviz",doviz, sonuc_doviz);

                printf("\n------------------------------------");
            }
        }

        if (girilen_deger == 4) {
            printf("------------------------------------");
            printf("\n4-Piyasa Fiyatindan\n");
        
            printf("Ne kadar: "); //a
            scanf("%lf", &su_anki_deger);

            printf("Olacak degeri: "); //y
            scanf("%lf", &olacak_deger);

            printf("------------------------------------\n");
            double sonuc = ( 100*(olacak_deger-su_anki_deger) ) / su_anki_deger;
            printf("%lf => : %lf (%c%lf)", su_anki_deger, olacak_deger, yuzde_isareti, sonuc);

            printf("\n------------------------------------");
        }

        if (girilen_deger==0) {
            break;
        }
    }
}
