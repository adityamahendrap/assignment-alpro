#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PHI 3.14

// Putu Aditya Mahendra Putra
// 2205551058
// Algoritma dan Pemrograman C

void print_opsi()
{
    getch();
    printf("\n");
    printf("\t[1] Ulangi\n");
    printf("\t[2] Kembali\n");
    printf("\t==============================\n");
    printf("\t>> ");
}

double hitung_kecepatan(double s, double t)
{
    return s / t;
}

void rumus_kecepatan()
{
    int opsi;
    double s, t, v;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t           KECEPATAN          ");
    printf("\n\t==============================\n");
    printf("\tMasukan jarak (km)   : ");
    while (scanf("%lf", &s) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("\tMasukan waktu (jam)  : ");
    while (scanf("%lf", &t) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    v = hitung_kecepatan(s, t);

    printf("\n\tKecepatan : %.2lf km/jam", v);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
        main();
    }
}

double hitung_debit(double v, double w)
{
    return v / w;
}

void rumus_debit()
{
    int opsi;
    double v, w, d;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t            DEBIT             ");
    printf("\n\t==============================\n");
    printf("\tMasukan volume (liter) : ");
    while (scanf("%lf", &v) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("\tMasukan waktu (jam)    : ");
    while (scanf("%lf", &w) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    d = hitung_debit(v, w);

    printf("\n\tDebit : %.2lf liter/jam", d);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
        main();
    }
}

double hitung_skala(double jp, double js)
{
    return (js * 100000) / jp;
}

void rumus_skala()
{
    int opsi;
    double jp, js, s;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t            SKALA             ");
    printf("\n\t==============================\n");
    printf("\tMasukan jarak pada peta (cm)  : ");
    while (scanf("%lf", &jp) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("\tMasukan jarak sebenarnya (km) : ");
    while (scanf("%lf", &js) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    s = hitung_skala(jp, js);

    printf("\n\tSkala : %.0lf berbanding %.2lf", jp / jp, s);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
        main();
    }
}

double kll_segitiga_sembarang(double sisi1, double sisi2, double sisi3)
{
    return sisi1 + sisi2 + sisi3;
}

double luas_segitiga_sembarang(double sisi1, double sisi2, double sisi3)
{
    return sqrt(((sisi1 + sisi2 + sisi3) * 0.5) * (((sisi1 + sisi2 + sisi3) * 0.5) - sisi1) * (((sisi1 + sisi2 + sisi3) * 0.5) - sisi2) * (((sisi1 + sisi2 + sisi3) * 0.5) - sisi3));
}


void segitiga_sembarang()
{
    double sisi1, sisi2, sisi3, kll, luas;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t      SEGITIGA SEMBARANG      ");
    printf("\n\t==============================\n");

    printf("\tMasukan sisi 1 : ");
    while (scanf("%lf", &sisi1) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan sisi 2 : ");
    while (scanf("%lf", &sisi2) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan sisi 3 : ");
    while (scanf("%lf", &sisi3) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    kll = kll_segitiga_sembarang(sisi1, sisi2, sisi3);
    luas = luas_segitiga_sembarang(sisi1, sisi2,sisi3);

    printf("\n\tKELILING : %.2lf\n", kll);
    printf("\tLUAS     : %.2lf", luas);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bamgun_datar();
    }
}

double kll_belah_ketupat(double sisi)
{
    return 4 * sisi;
}

double luas_belah_ketupat(double diagonal1, double diagonal2)
{
    return (diagonal1 * diagonal2) * 0.5;
}

void belah_ketupat()
{
    double sisi, diagonal1, diagonal2, kll, luas;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t         BELAH KETUPAT        ");
    printf("\n\t==============================\n");

    printf("\tMasukan sisi       : ");
    while (scanf("%lf", &sisi) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan diagonal 1 : ");
    while (scanf("%lf", &diagonal1) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan diagonal 2 : ");
    while (scanf("%lf", &diagonal2) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    kll = kll_belah_ketupat(sisi);
    luas = luas_belah_ketupat(diagonal1, diagonal2);

    printf("\n\tKELILING : %.2lf", kll);
    printf("\n\tLUAS     : %.2lf", luas);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bamgun_datar();
    }
}

double kll_jajar_genjang(double sisi1, double sisi2)
{
    return 2 * (sisi1 + sisi2);
}

double luas_jajar_genjang(double alas, double tinggi)
{
    return alas * tinggi;
}

void jajar_genjang()
{
    double sisi1, sisi2, alas, tinggi, kll, luas;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t         JAJAR GENJANG        ");
    printf("\n\t==============================\n");
    
    printf("\tMasukan sisi 1 : ");
    while (scanf("%lf", &sisi1) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan sisi 2 : ");
    while (scanf("%lf", &sisi2) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan alas   : ");
    while (scanf("%lf", &alas) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan tinggi : ");
    while (scanf("%lf", &tinggi) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    kll = kll_jajar_genjang(sisi1, sisi2);
    luas = luas_jajar_genjang(alas, tinggi);

    printf("\n\tKELILING : %.2lf", kll);
    printf("\n\tLUAS     : %.2lf", luas);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bamgun_datar();
    }
}

double kll_trapesium(double sisi1, double sisi2, double sisi3, double sisi4)
{
    return sisi1 + sisi2 + sisi3 + sisi4;
}

double luas_trapesium(double sisi1, double sisi2, double tinggi)
{
    return (sisi1 + sisi2) * tinggi * 0.5;
}

void trapesium()
{
    double sisi1, sisi2, sisi3, sisi4, tinggi, kll, luas;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t           TRAPESIUM          ");
    printf("\n\t==============================\n");
    
    printf("\tMasukan sisi atas  : ");
    while (scanf("%lf", &sisi1) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan sisi bawah : ");
    while (scanf("%lf", &sisi2) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan sisi kiri  : ");
    while (scanf("%lf", &sisi3) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan sisi kanan : ");
    while (scanf("%lf", &sisi4) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan tinggi     : ");
    while (scanf("%lf", &tinggi) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    kll = kll_trapesium(sisi1, sisi2, sisi3, sisi4);
    luas = luas_trapesium(sisi1, sisi2, tinggi);

    printf("\n\tKELILING : %.2lf", kll);
    printf("\n\tLUAS     : %.2lf", luas);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bamgun_datar();
    }
}

double kll_lingkaran(double r)
{
    return 2 * PHI * r;
}

double luas_lingkaran(double r)
{
    return PHI * r * r;
}

void lingkaran()
{
    double r, kll, luas;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t           LINGKARAN          ");
    printf("\n\t==============================\n");
    
    printf("\tMasukan jari-jari : ");
    while (scanf("%lf", &r) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    kll = kll_lingkaran(r);
    luas = luas_lingkaran(r);

    printf("\n\tKELILING : %.2lf", kll);
    printf("\n\tLUAS     : %.2lf", luas);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bamgun_datar();
    }
}

void rumus_bamgun_datar()
{
    int menu_bangun_datar;
    system("cls");
    printf("\n\t==============================");
    printf("\n\t KELILING & LUAS BANGUN DATAR ");
    printf("\n\t==============================\n");
    printf("\t[1] Segitiga Sembarang\n");
    printf("\t[2] Belah Ketupat\n");
    printf("\t[3] Jajar Genjang\n");
    printf("\t[4] Trapesium\n");
    printf("\t[5] Lingkaran\n\n");
    printf("\t[6] Kembbali\n");
    printf("\t==============================");
    printf("\n\t>> ");
    while (scanf("%d", &menu_bangun_datar) == 0 || menu_bangun_datar < 1 || menu_bangun_datar > 6)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    
    switch(menu_bangun_datar)
    {
        case 1:
            segitiga_sembarang();
            break;
        case 2:
            belah_ketupat();
            break;
        case 3:
            jajar_genjang();
            break;
        case 4:
            trapesium();
            break;
        case 5:
            lingkaran();
            break;
        case 6:
            main();
            break;
    }
}

double volume_tabung(double r, double tinggi)
{
    return PHI * r * r * tinggi;
}

double lp_tabung(double r, double tinggi)
{
    return PHI * r * (r + tinggi);
}

void tabung()
{
    double r, tinggi, volume, lp;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t            TABUNG            ");
    printf("\n\t==============================\n");

    printf("\tMasukan jari-jari : ");
    while (scanf("%lf", &r) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan tinggi    : ");
    while (scanf("%lf", &tinggi) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    volume = volume_tabung(r, tinggi);
    lp = lp_tabung(r, tinggi);

    printf("\n\tVOLUME         : %.2lf\n", volume);
    printf("\tLUAS PERMUKAAN : %.2lf", lp);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bangun_ruang();
    }
}

double volume_bola(double r)
{
    return 1.33333 * PHI * r * r * r;
}

double lp_bola(double r)
{
    return 4 * PHI * r * r;
}

void bola()
{
    double r, volume, lp;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t              BOLA            ");
    printf("\n\t==============================\n");

    printf("\tMasukan jari-jari : ");
    while (scanf("%lf", &r) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    volume = volume_bola(r);
    lp = lp_bola(r);

    printf("\n\tVOLUME         : %.2lf", volume);
    printf("\n\tLUAS PERMUKAAN : %.2lf", lp);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bangun_ruang();
    }
}

double volume_limas_segiempat(double panjang_alas, double tinggi)
{
    return 0.33333 * (panjang_alas * panjang_alas) * tinggi;
}

double lp_limas_segiempat(double panjang_alas, double tinggi)
{
    return (4 * (0.5 * panjang_alas * (sqrt(((0.5 * panjang_alas) * (0.5 * panjang_alas)) + (tinggi * tinggi))))) + (panjang_alas * panjang_alas);
}

void limas_segiempat()
{
    double panjang_alas, tinggi, volume, lp;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t        LIMAS SEGIEMPAT       ");
    printf("\n\t==============================\n");

    printf("\tMasukan panjang alas : ");
    while (scanf("%lf", &panjang_alas) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan tinggi       : ");
    while (scanf("%lf", &tinggi) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    volume = volume_limas_segiempat(panjang_alas, tinggi);
    lp = lp_limas_segiempat(panjang_alas, tinggi);

    printf("\n\tVOLUME         : %.2lf", volume);
    printf("\n\tLUAS PERMUKAAN : %.2lf", lp);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bangun_ruang();
    }
}

double volume_prisma_segiempat(double alas_segitiga, double tinggi_segitiga, double tinggi_prisma)
{
    return (0.5 * alas_segitiga * tinggi_segitiga) * tinggi_prisma;
}

double lp_prisma_segiempat(double alas_segitiga, double tinggi_segitiga, double tinggi_prisma)
{
    return (2 * alas_segitiga * tinggi_segitiga) + (3 * alas_segitiga * tinggi_prisma);
}

void prisma_segitiga()
{
    double alas_segitiga, tinggi_segitiga, tinggi_prisma, volume, lp;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t        PRISMA SEGITIGA       ");
    printf("\n\t==============================\n");

    printf("\tMasukan panjang alas segitiga : ");
    while (scanf("%lf", &alas_segitiga) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan tinggi segitiga : ");
    while (scanf("%lf", &tinggi_segitiga) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan tinggi prisma   : ");
    while (scanf("%lf", &tinggi_prisma) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    volume = volume_prisma_segiempat(alas_segitiga, tinggi_segitiga, tinggi_prisma);
    lp = lp_prisma_segiempat(alas_segitiga, tinggi_segitiga, tinggi_prisma);

    printf("\n\tVOLUME         : %.2lf", volume);
    printf("\n\tLUAS PERMUKAAN : %.2lf", lp);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bangun_ruang();
    }
}

double volume_kerucut(double r, double tinggi)
{
    return 0.33333 * (PHI * r * r) * tinggi;
}

double lp_kerucut(double r, double garis_peluncur)
{
    return PHI * r * (garis_peluncur + r);
}

void kerucut()
{
    double r, tinggi, garis_peluncur, volume, lp;
    int opsi;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t            KERUCUT           ");
    printf("\n\t==============================\n");

    printf("\tMasukan jari-jari : ");
    while (scanf("%lf", &r) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan tinggi    : ");
    while (scanf("%lf", &tinggi) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\tMasukan panjang garis peluncur : ");
    while (scanf("%lf", &garis_peluncur) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    volume = volume_kerucut(r, tinggi);
    lp = lp_kerucut(r, garis_peluncur);

    printf("\n\tVOLUME         : %.2lf", volume);
    printf("\n\tLUAS PERMUKAAN : %.2lf", lp);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
    rumus_bangun_ruang();
    }
}

void rumus_bangun_ruang()
{
    int menu_bangun_ruang;
    system("cls");
    printf("\n\t==============================");
    printf("\n\t VOLUME & LUAS.P BANGUN RUANG ");
    printf("\n\t==============================\n");
    printf("\t[1] Tabung\n");
    printf("\t[2] Bola\n");
    printf("\t[3] Limas Segiempat\n");
    printf("\t[4] Prisma Segitiga\n");
    printf("\t[5] Kerucut\n\n");
    printf("\t[6] Kembali\n");
    printf("\t==============================");
    printf("\n\t>> ");
    while (scanf("%d", &menu_bangun_ruang) == 0 || menu_bangun_ruang < 1 || menu_bangun_ruang > 6)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    
    switch(menu_bangun_ruang)
    {
        case 1:
            tabung();
            break;
        case 2:
            bola();
            break;
        case 3:
            limas_segiempat();
            break;
        case 4:
            prisma_segitiga();
            break;
        case 5:
            kerucut();
            break;
        case 6:
            main();
            break;
    }
}

double hitung_barisan_aritmatika(int n, double a, double b)
{
    return a + (n - 1) * b;
}

double hitung_deret_aritmatika(int n, double a, double b)
{
    return n / 2 * (2 * a + (n - 1) * b);
}

void rumus_aritmatika()
{
    int opsi, n;
    double a, b, barisan, deret;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t  BARISAN & DERET ARITMATIKA  ");
    printf("\n\t==============================\n");
    printf("\tMasukan a : ");
    while (scanf("%lf", &a) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("\tMasukan b : ");
    while (scanf("%lf", &b) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("\tMasukan n : ");
    while (scanf("%d", &n) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    barisan = hitung_barisan_aritmatika(n, a, b); 
    deret = hitung_deret_aritmatika(n, a, b);

    printf("\n\tU%d = %.2lf", n, barisan);
    printf("\n\tS%d = %.2lf", n, deret);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
        main();
    }
}

double hitung_barisan_geometri(int n, double a, double r)
{
    return a * (pow(r, n - 1));
}

double hitung_deret_geometri_lebih_dari_1(int n, double a, double r)
{
    return (a * ((pow(r, n)) - 1))/(r - 1);
}

double hitung_deret_geometri_kurang_dari_1(int n, double a, double r)
{
    return (a * (1 - (pow(r, n))))/(r - 1);
}

void rumus_geometri()
{
    int opsi, n;
    double a, r, barisan, deret_kurang_dari_1, deret_lebih_dari_1;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t   BARISAN & DERET GEOMETRI   ");
    printf("\n\t==============================\n");
    printf("\tMasukan a : ");
    while (scanf("%lf", &a) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("\tMasukan r : ");
    while (scanf("%lf", &r) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("\tMasukan n : ");
    while (scanf("%d", &n) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    barisan = hitung_barisan_geometri(a, r, n);
    deret_kurang_dari_1 = hitung_deret_geometri_kurang_dari_1(a, r, n);
    deret_lebih_dari_1 = hitung_deret_geometri_lebih_dari_1(a, r, n);

    printf("\n\tU%d = %.2lf", n, barisan);

    if(r > 1)
    {
        printf("\n\tS%d = %.2lf", n, deret_lebih_dari_1);
    } 
    else if (r < 1)
    {
        printf("\n\tS%d = %.2lf", n, deret_kurang_dari_1);
    }
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
        main();
    }
}

double hitung_peluang(double nA, double nS)
{
    return nA / nS;
}

void rumus_peluang()
{
    int opsi;
    double nA, nS, peluang;
    do{
    system("cls");
    printf("\n\t==============================");
    printf("\n\t            PELUANG           ");
    printf("\n\t==============================\n");
    printf("\tMasukan peluang anggota     : ");
    while (scanf("%lf", &nA) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    printf("\tMasukan banyak titik sampel : ");
    while (scanf("%lf", &nS) == 0)
    {
        printf("\tMasukan input dengan benar : ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    peluang = hitung_peluang(nA, nS);

    printf("\n\tPeluang : %.0lf berbanding %.0lf, atau", nA, nS);
    printf("\n\t          %.2lf berbanding 1", peluang);
    printf("\n\t==============================");

    print_opsi();

    while (scanf("%d", &opsi) == 0 || opsi < 1 || opsi > 2)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    } while (opsi == 1);

    if (opsi == 2)
    {
        main();
    }
}

void keluar()
{
    system("cls");
    system("cls");
    printf("\n\t==============================");
    printf("\n\t      Terimakasih telah       ");
    printf("\n\t    menggunakan program ini   ");
    printf("\n\t==============================");
    printf("\n\tProgram telah dihentikan . . .\n\n\n");
    exit(0);
}

int main() 
{
    int menu;

    system("cls");
    printf("\n\t==============================");
    printf("\n\t       OPERASI BILANGAN       ");
    printf("\n\t==============================\n");
    printf("\t[1] Kecepatan\n");
    printf("\t[2] Debit\n");
    printf("\t[3] Skala\n");
    printf("\t[4] Bangun Datar\n");
    printf("\t[5] Bangun Ruang\n");
    printf("\t[6] Barisan & Deret Aritmatika\n");
    printf("\t[7] Barisan & Deret Geometri\n");
    printf("\t[8] Peluang\n\n");
    printf("\t[9] Keluar");
    printf("\n\t==============================");
    printf("\n\t>> ");
    
    while (scanf("%d", &menu) == 0 || menu < 1 || menu > 9)
    {
        printf("\n\tInvalid input . . .");
        printf("\n\t>> ");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    switch(menu)
    {
        case 1:
            rumus_kecepatan();
            break;
        case 2:
            rumus_debit();
            break;
        case 3:
            rumus_skala();
            break;
        case 4:
            rumus_bamgun_datar();
            break;
        case 5:
            rumus_bangun_ruang();
            break;
        case 6:
            rumus_aritmatika();
            break;
        case 7:
            rumus_geometri();
            break;
        case 8:
            rumus_peluang();
            break;
        case 9:
            keluar();
            break;
    }

    return 0;
}
