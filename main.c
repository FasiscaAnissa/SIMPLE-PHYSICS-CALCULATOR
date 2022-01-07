#include <stdio.h>
#include <stdlib.h>

int main()
{
    int   n,pilih,pilih2,pilih3,i;
    float w,s,m,g,h;
    float lamda, v,p,f,t;
    float besar_usaha,hasil_EPG,hasil_kinetik,nilai_gelombang,nilai_cepat_rambat,frekuensi_gelombang;
    char  menu_utama [2][99] ={"1.MATERI GELOMBANG\n","2.MATERI USAHA DAN ENERGI\n"};
    char  materi     [3][99] ={"1.Panjang Gelombang\n","2.Cepat Rambat Gelombang\n","3.Frekuensi Gelombang\n"};
    char  materi_2   [3][99] ={"1.Besar Usaha\n","2.Energi Potensial Gravitasi\n","3.Energi Kinetik\n"};

        printf("\n===============SELAMAT DATANG DI KALKULATOR FISIKA SEDERHANA==================\n");
        printf("\n Apakah Anda akan melakukan perhitungan? 1:YA/2:TIDAK : ");
        scanf ("%d", &n);

        if (n == 2){
            goto end;
        }

        ulang:

        printf("\n===============MENU PILIHAN HITUNG KALKULATOR FISIKA SEDERHANA=================\n");
        for (int i=0;i<2;i++){
        printf ("%s",menu_utama[i]);
    }
        printf("\nPilih Materi yang ingin anda cari: ");
        scanf ("%d", &pilih2);

        if (pilih2 == 1)
    {
        printf("\n==========================MENGHITUNG MATERI GELOMBANG==========================\n");
        for(int i=0;i<3;i++)
    {
        printf ("%s",materi [i]);
    }
        printf("\nPilih Materi yang ingin anda cari: ");
        scanf ("%d", &pilih);

        if (pilih == 1)
        {
            printf("\nAnda memilih perhitungan 1, yaitu menghitung nilai Panjang Gelombang \n\n");
            printf(" -Kecepatan Gelombang           = ");
            scanf("%f", &v);
            printf(" -Frekuensi Gelombang           = ");
            scanf("%f", &f);
            nilai_gelombang = v/f;
            printf(" -Hasil nilai Panjang Gelombang = %.1f meter \n" ,nilai_gelombang);
            printf("....................................\n\n");
        }
        else if (pilih == 2)
        {
            printf("\nAnda memilih perhitungan 2, yaitu menghitung nilai Cepat Rambat Gelombang \n\n");
            printf(" -Panjang Gelombang                  = ");
            scanf ("%f", &lamda);
            printf(" -Frekuensi Gelombang                = ");
            scanf ("%f", &f);
            nilai_cepat_rambat = lamda*f;
            printf(" -Hasil nilai Cepat Rambat Gelombang = %.1f meter/sekon \n",nilai_cepat_rambat);
            printf("...................................\n\n");
        }
        else if (pilih == 3)
        {
            printf("\nAnda memilih perhitungan 3, yaitu menghitung Frekuensi Gelombang \n\n");
            printf(" -Jumlah Gelombang                = ");
            scanf ("%f", &p);
            printf(" -Waktu                           = ");
            scanf ("%f",&t);
            frekuensi_gelombang = p/t;
            printf("\nHasil nilai Frekuensi Gelombang = %.1f Hz\n",frekuensi_gelombang);
            printf("...................................\n\n");

        }
    }
        else if(pilih2 == 2)
        {
        printf("\n===============MENGHITUNG MATERI USAHA DAN ENERGI=================\n");
        for(int i=0;i<3;i++)
    {
        printf ("%s",materi_2 [i]);
    }
        printf("\nPilih Materi yang ingin anda cari: ");
        scanf ("%d", &pilih);

         if (pilih == 1){
            printf("\nAnda memilih perhitungan 1, yaitu menghitung nilai Besar Usaha \n\n");
            printf(" -Gaya                    = ");
            scanf("%f", &f);
            printf(" -Perpindahan             = ");
            scanf("%f", &s);
            besar_usaha = f*s;
            printf("\nHasil nilai Besar Usaha = %.1f Joule\n",besar_usaha);
            printf(".....................................\n\n");
        }
        else if (pilih == 2){
            printf("\nAnda memilih perhitungan 2, yaitu menghitung nilai Energi Potensial Gravitasi \n\n");
            printf(" -Massa Benda                            = ");
            scanf("%f", &m);
            printf(" -Gravitasi Bumi                         = ");
            scanf("%f", &g);
            printf(" -Ketinggian Suatu Benda                 = ");
            scanf("%f", &h);
            hasil_EPG= m*g*h;
            printf("\nHasil nilai Energi Potensial Gravitasi =   %.1f Joule\n",hasil_EPG);
            printf(".....................................\n\n");
        }
        else if (pilih == 3){
            printf("Anda memilih perhitungan 3, yaitu menghitung nilai Energi Kinetik \n\n");
            printf(" -Massa Benda                = ");
            scanf ("%f", &m);
            printf(" -Kecepatan                  = ");
            scanf ("%f", &v);
            hasil_kinetik = m*v*v*0.5;
            printf("\nHasil nilai Energi Kinetik =   %.1f Joule\n",hasil_kinetik);
            printf("......................................\n\n");
        }
}
        else
        {
            printf ("Maaf Menu Tidak Tersedia\n");
        }

    int pilihan;
    printf("Apakah Anda Ingin Melakukan Perhitungan Lagi ? 1(Ya)/2(Tidak) : ");
    scanf("%d",&pilihan);

    if(pilihan == 1){
        goto ulang;
    }
end:
return 0;
}
