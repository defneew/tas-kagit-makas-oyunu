#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("TAS KAGIT MAKAS OYUNU\n\n");
   /* tas->makas
    makas->kagýt
    kagýt->tas */
    srand(time(NULL));
    int i=0,tahmin; int kullaniciSkor=0,bilgisayarSkor=0;
    while(i<10)  // 10 turda oyunu bitiricez...
    {
        printf("Lutfen tahmininizi giriniz(1.tas  2.kagit  3.makas): \n"); scanf("%d",&tahmin);
        int bilgisayarTahmini= (rand()%3)+1;

        if(tahmin==1)
        {
            if(bilgisayarTahmini==1)
            {
                printf("Berabere\n");
            }
            else if(bilgisayarTahmini==2)
            {
                printf("Bilgisayar kazandi\n");
                bilgisayarSkor++;
            }
            else
            {
                printf("Kazandiniz\n");
                kullaniciSkor++;
            }
        }
        else if(tahmin==2)
        {
            if(bilgisayarTahmini==1)
            {
                printf("Kazandiniz\n");
                kullaniciSkor++;
            }
            else if(bilgisayarTahmini==2)
            {
                printf("Berabere\n");
            }
            else
            {
                printf("Bilgisayar kaazandi\n");
                bilgisayarSkor++;
            }
        }
        else if(tahmin==3)
        {
            if(bilgisayarTahmini==1)
            {
                printf("Bilgisayar kazandi\n");
                bilgisayarSkor++;
            }
            else if(bilgisayarTahmini==2)
            {
                printf("Kazandiniz\n");
                kullaniciSkor++;
            }
            else
            {
                printf("Berabere\n");
            }
        }
        else // 1,2 ve 3 ten baska sayi girilmesi ihtimaline karsý
        {
            printf("Gecersiz giris yaptiniz\n");
        }
        i++;
    }
    printf("Kullanici: %d - Bilgisayar: %d",kullaniciSkor,bilgisayarSkor);
}
