#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <windows.h>


int input;

int main(){

    int menu;
    system("color 75");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),115);


    printf("===============================\n");
    printf("\tTugas Kalkulator\n");
    printf("===============================\n");
    printf(" 1. PingPoroLanSudo\n");
    printf(" 2. SinCosTan\n");
    printf(" 3. Hitung Keliling dan Luas\n");
    printf(" 4. Hitung Akar Kuadrat\n");
    printf(" 5. Exit\n");
    printf("===============================\n");
    printf("Input Pilihan : ");
    scanf("%d", &menu);

if(menu > 5){
    printf("\nMenu Tidak Tersedia");
    getch();
    system("cls");
    main();
}
    switch(menu){
    case 1 :
        system("cls");
        PingPoroLanSudo();
        break;

    case 2 :
        system("cls");
        SinCosTan();
        break;

    case 3 :
        system("cls");
        kelilingLuas();
        break;

    case 4 :
        system("cls");
        hitungAkar();
        break;

    case 5 :
        system("cls");
        keluar();
        break;
    }

}

void PingPoroLanSudo(){

    printf("=================\n");
    printf("PingPoroLanSudo\n");
    printf("=================\n");
    printf(" 1. Perkalian\n");
    printf(" 2. Pembagian\n");
    printf(" 3. Penjumlahan\n");
    printf(" 4. Pengurangan\n");
    printf(" 5. Return Menu Utama\n");
    printf("=================\n");
    printf("Input Pilihan : ");
    scanf("%d", &input);

if(input > 5){
    printf("\nMenu Tidak Tersedia");
    getch();
    system("cls");
    PingPoroLanSudo();
}

    switch(input){
    case 1 :
        system("cls");
        perkalian();
        break;

    case 2 :
        system("cls");
        pembagian();
        break;

    case 3 :
        system("cls");
        penjumlahan();
        break;

    case 4 :
        system("cls");
        pengurangan();
        break;

    case 5 :
        system("cls");
        main();
        break;
    }
}

void perkalian(){

    float a, b, hasil;
    int y, n;
    char ulang;

    printf("Masukkan Angka Pertama = ");
    scanf("%f", &a);
    printf("Masukkan Angka Kedua = ");
    scanf("%f", &b);
    hasil = a * b;
    printf("Hasil Dari %.2f * %.2f adalah %.2f \n", a,b,hasil);
    system("pause");
    printf("Ingin Mengulang Perkalian ? (y/n)");
    scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        perkalian();
    }else if(ulang == 'n'){
        system("cls");
        PingPoroLanSudo();
    }else

    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Perkalian ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        perkalian();
    }else if(ulang == 'n'){
        system("cls");
        PingPoroLanSudo();
    }
    }
}

void pembagian(){

    float a, b, hasil;
    int y, n;
    char ulang;

    printf("Masukkan Angka Pertama = ");
    scanf("%f", &a);
    printf("Masukkan Angka Kedua = ");
    scanf("%f", &b);
    hasil = a / b;
    printf("Hasil Dari %.2f / %.2f adalah %.2f \n", a,b,hasil);
    system("pause");
    printf("Ingin Mengulang Pembagian ? (y/n)");
    scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        pembagian();
    }else if(ulang == 'n'){
        system("cls");
        PingPoroLanSudo();
    }else

    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Pembagian ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        pembagian();
    }else if(ulang == 'n'){
        system("cls");
        PingPoroLanSudo();
    }
    }

}

void penjumlahan(){

    float a, b, hasil;
    int y, n;
    char ulang;

    printf("Masukkan Angka Pertama = ");
    scanf("%f", &a);
    printf("Masukkan Angka Kedua = ");
    scanf("%f", &b);
    hasil = a + b;
    printf("Hasil Dari %.2f + %.2f adalah %.2f \n", a,b,hasil);
    system("pause");
    printf("Ingin Mengulang Penjumlahan ? (y/n)");
    scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        penjumlahan();
    }else if(ulang == 'n'){
        system("cls");
        PingPoroLanSudo();
    }else

    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Penjumlahan ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        penjumlahan();
    }else if(ulang == 'n'){
        system("cls");
        PingPoroLanSudo();
    }
    }

}

void pengurangan(){

    float a, b, hasil;
    int y, n;
    char ulang;

    printf("Masukkan Angka Pertama = ");
    scanf("%f", &a);
    printf("Masukkan Angka Kedua = ");
    scanf("%f", &b);
    hasil = a - b;
    printf("Hasil Dari %.2f - %.2f adalah %.2f \n", a,b,hasil);
    system("pause");
    printf("Ingin Mengulang Pengurangan ? (y/n)");
    scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        pengurangan();
    }else if(ulang == 'n'){
        system("cls");
        PingPoroLanSudo();
    }else

    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Pengurangan ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        pengurangan();
    }else if(ulang == 'n'){
        system("cls");
        PingPoroLanSudo();
    }
    }


}

void SinCosTan(){

    printf("=================\n");
    printf("Sin Cos Tan\n");
    printf("=================\n");
    printf(" 1. Sinus\n");
    printf(" 2. Cosinus\n");
    printf(" 3. Tangen\n");
    printf(" 4. Return Menu Utama\n");
    printf("=================\n");
    printf("Input Pilihan : ");
    scanf("%d", &input);

if(input > 4){
    printf("\nMenu Tidak Tersedia");
    getch();
    system("cls");
    SinCosTan();
}

switch(input){
    case 1 :
        system("cls");
        sinus();
        break;

    case 2 :
        system("cls");
        cosinus();
        break;

    case 3 :
        system("cls");
        tangen();
        break;

    case 4 :
        system("cls");
        main();
        break;


}
}

void sinus(){

char ulang;
int y, n;
double sudut, radian, sinx;

printf("Masukkan Derajat Sinus = ");
scanf("%lf", &sudut);

radian = sudut * M_PI / 180.0;
sinx = sin(radian);

printf("Hasil Sinus Adalah = %.2lf \n", sinx);
system("pause");
printf("Ingin Mengulang Sinus ? (y/n)");
scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        sinus();
    }else if(ulang == 'n'){
        system("cls");
        SinCosTan();
    }else

    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Sinus ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        sinus();
    }else if(ulang == 'n'){
        system("cls");
        SinCosTan();
    }
    }
}

void cosinus(){

char ulang;
int y, n;
double sudut, radian, cosx;

printf("Masukkan Derajat Cosinus = ");
scanf("%lf", &sudut);

radian = sudut * M_PI / 180.0;
cosx = cos(radian);

printf("Hasil Cosinus Adalah = %.2lf \n", cosx);
system("pause");
printf("Ingin Mengulang Cosinus ? (y/n)");
scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        cosinus();
    }else if(ulang == 'n'){
        system("cls");
        SinCosTan();
    }else

    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Cosinus ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        cosinus();
    }else if(ulang == 'n'){
        system("cls");
        SinCosTan();
    }
    }
}

void tangen(){

char ulang;
int y, n;
double sudut, radian, tanx;

printf("Masukkan Derajat Tangen = ");
scanf("%lf", &sudut);

radian = sudut * M_PI / 180.0;
tanx = tan(radian);

printf("Hasil Cosinus Adalah = %.2lf \n", tanx);
system("pause");
printf("Ingin Mengulang Tangen ? (y/n)");
scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        tangen();
    }else if(ulang == 'n'){
        system("cls");
        SinCosTan();
    }else

    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Tangen ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        tangen();
    }else if(ulang == 'n'){
        system("cls");
        SinCosTan();
    }
    }
}

void kelilingLuas(){

    printf("==================================\n");
    printf("\tKeliling Luas Volume\n");
    printf("==================================\n");
    printf(" 1. Hitung Keliling Bangun Datar \n");
    printf(" 2. Hitung Luas Bangun Datar\n");
    printf(" 3. Hitung Volume Bangun Datar\n");
    printf(" 4. Return Menu Utama\n");
    printf("==================================\n");
    printf("Input Pilihan : ");
    scanf("%d", &input);

if(input > 4){
    printf("\nMenu Tidak Tersedia");
    getch();
    system("cls");
    kelilingLuas();
}

switch(input){
case 1:
    system("cls");
    kelBangunDatar();
    break;

    case 2:
    system("cls");
    luasBangunDatar();
    break;

    case 3:
    system("cls");
    volumeBangunRuang();
    break;

    case 4:
    system("cls");
    main();
    break;

}

}

void kelBangunDatar(){
    printf("==================================\n");
    printf("\tKeliling Bangun Datar\n");
    printf("==================================\n");
    printf(" 1. Keliling Persegi\n");
    printf(" 2. Keliling Trapesium\n");
    printf(" 3. Keliling Layang - Layang\n");
    printf(" 4. Keliling Lingkaran\n");
    printf(" 5. Kembali ke Menu Sebelumnya\n");
    printf("==================================\n");
    printf("Input Pilihan : ");
    scanf("%d", &input);

if(input > 5){
    printf("\nMenu Tidak Tersedia");
    getch();
    system("cls");
    kelBangunDatar();
}
switch(input){
case 1:
    system("cls");
    kelPersegi();
    break;

case 2 :
    system("cls");
    kelTrapesium();
    break;

case 3 :
    system("cls");
    kelLayang();
    break;

case 4 :
    system("cls");
    kelLingkaran();
    break;

case 5 :
    system("cls");
    kelilingLuas();
    break;
}
}

void kelPersegi(){

    char ulang;
    float sisi, keliling;

    printf("Masukkan Sisi Persegi = ");
    scanf("%f", &sisi);
    keliling = 4 * sisi;
    printf("Keliling Persegi Adalah = %.2f \n", keliling);
    system("pause");
    printf("Ingin Mengulang Keliling Persegi ? (y/n)");
    scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        kelPersegi();
    }else if(ulang == 'n'){
        system("cls");
        kelBangunDatar();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Keliling Persegi ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        kelPersegi();
    }else if(ulang == 'n'){
        system("cls");
        kelBangunDatar();
    }
    }
}

void kelTrapesium(){
    char ulang;
    float a, b, c, d, keliling;

    printf("Masukkan Sisi A Trapesium Sama Kaki = ");
    scanf("%f", &a);
    printf("Masukkan Sisi B Trapesium Sama Kaki = ");
    scanf("%f", &b);
    printf("Masukkan Sisi C Trapesium Sama Kaki = ");
    scanf("%f", &c);
    printf("Masukkan Sisi D Trapesium Sama Kaki = ");
    scanf("%f", &d);
    keliling = a + b + c + d;
    printf("Keliling Trapesium Sama Kaki Adalah = %.2lf\n", keliling);
    system("pause");
    printf("Ingin Mengulang Keliling Trapesium ? (y/n)");
    scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        kelTrapesium();
    }else if(ulang == 'n'){
        system("cls");
        kelBangunDatar();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Keliling Trapesium ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        kelTrapesium();
    }else if(ulang == 'n'){
        system("cls");
        kelBangunDatar();
    }
    }
}

void kelLayang(){
    char ulang;
    float a, b, c, d, keliling;

    printf("Masukkan Sisi A Layang - Layang = ");
    scanf("%f", &a);
    printf("Masukkan Sisi B Layang - Layang = ");
    scanf("%f", &b);
    printf("Masukkan Sisi C Layang - Layang = ");
    scanf("%f", &c);
    printf("Masukkan Sisi D Layang - Layang = ");
    scanf("%f", &d);
    keliling = a + b + c + d;
    printf("Keliling Layang - Layang Adalah = %.2lf\n", keliling);
    system("pause");
    printf("Ingin Mengulang Keliling Layang - Layang ? (y/n)");
    scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        kelLayang();
    }else if(ulang == 'n'){
        system("cls");
        kelBangunDatar();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Keliling Layang - Layang ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        kelLayang();
    }else if(ulang == 'n'){
        system("cls");
        kelBangunDatar();
    }
    }
}

void kelLingkaran(){
    char ulang;
    float diameter, jari_jari, kelilingA, kelilingB;
    const float phi = 3.14;

    printf("Masukkan Panjang Diameter = ");
    scanf("%f", &diameter);
    printf("Masukkan Panjang Jari - Jari = ");
    scanf("%f", &jari_jari);
    kelilingA = phi * 2 * jari_jari;
    kelilingB = phi * diameter;
    printf("Keliling Berdasarkan Jari - Jari = %.2lf\n", kelilingA);
    printf("Keliling Berdasarkan Diameter = %.2lf\n", kelilingB);
    system("pause");
    printf("Ingin Mengulang Keliling Lingkaran ? (y/n)");
    scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        kelLingkaran();
    }else if(ulang == 'n'){
        system("cls");
        kelBangunDatar();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Keliling Lingkaran ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        kelLingkaran();
    }else if(ulang == 'n'){
        system("cls");
        kelBangunDatar();
    }
    }
}

void luasBangunDatar(){
    printf("==================================\n");
    printf("\tLuas Bangun Datar\n");
    printf("==================================\n");
    printf(" 1. Luas Persegi\n");
    printf(" 2. Luas Trapesium\n");
    printf(" 3. Luas Layang - Layang\n");
    printf(" 4. Luas Lingkaran\n");
    printf(" 5. Kembali ke Menu Sebelumnya\n");
    printf("==================================\n");
    printf("Input Pilihan : ");
    scanf("%d", &input);

if(input > 5){
    printf("\nMenu Tidak Tersedia");
    getch();
    system("cls");
    luasBangunDatar();
}
switch(input){
    case 1 :
        system("cls");
        luasPersegi();
        break;

    case 2 :
        system("cls");
        luasTrapesium();
        break;

    case 3 :
        system("cls");
        luasLayang();
        break;

    case 4 :
        system("cls");
        luasLingkaran();
        break;

    case 5 :
        system("cls");
        kelilingLuas();
        break;
}
}

void luasPersegi(){
    char ulang;
    float sisi, luas;

    printf("Masukkan Sisi Persegi = ");
    scanf("%f", &sisi);
    luas = sisi * sisi;
    printf("Luas Persegi Adalah = %.2f \n", luas);
    system("pause");
    printf("Ingin Mengulang Luas Persegi ? (y/n)");
    scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        luasPersegi();
    }else if(ulang == 'n'){
        system("cls");
        luasBangunDatar();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Luas Persegi ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        luasPersegi();
    }else if(ulang == 'n'){
        system("cls");
        luasBangunDatar();
    }
    }
}

void luasTrapesium(){
    char ulang;
    float a, b, t, luas;

    printf("Masukkan Alas A Trapesium = ");
    scanf("%f", &a);
    printf("Masukkan Alas B Trapesium = ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Trapesium = ");
    scanf("%f", &t);
    luas = 0.5 * (a + b) * t;
    printf("Luas Trapesium Adalah = %.2lf\n", luas);
    system("pause");
    printf("Ingin Mengulang Luas Trapesium ? (y/n)");
    scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        luasTrapesium();
    }else if(ulang == 'n'){
        system("cls");
        luasBangunDatar();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Luas Trapesium ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        luasTrapesium();
    }else if(ulang == 'n'){
        system("cls");
        luasBangunDatar();
    }
    }
}

void luasLayang(){
    char ulang;
    float a, b, luas;

    printf("Masukkan Diagonal Panjang = ");
    scanf("%f", &a);
    printf("Masukkan Diagonal Lebar = ");
    scanf("%f", &b);
    luas = 0.5 * a * b;
    printf("Luas Layang - Layang Adalah = %.2lf\n", luas);
    system("pause");
    printf("Ingin Mengulang Luas Layang - Layang ? (y/n)");
    scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        luasLayang();
    }else if(ulang == 'n'){
        system("cls");
        luasBangunDatar();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Luas Layang - Layang ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        luasLayang();
    }else if(ulang == 'n'){
        system("cls");
        luasBangunDatar();
    }
    }
}

void luasLingkaran(){
    char ulang;
    float diameter, jari_jari, luasA, luasB;
    const float phi = 3.14;

    printf("Masukkan Panjang Diameter = ");
    scanf("%f", &diameter);
    printf("Masukkan Panjang Jari - Jari = ");
    scanf("%f", &jari_jari);
    luasA = phi * jari_jari * jari_jari;
    luasB = 0.25 * phi * diameter * diameter;
    printf("Luas Berdasarkan Jari - Jari = %.2lf\n", luasA);
    printf("Luas Berdasarkan Diameter = %.2lf\n", luasB);
    system("pause");
    printf("Ingin Mengulang Luas Lingkaran ? (y/n)");
    scanf("%s", &ulang);

 if(ulang == 'y'){
        system("cls");
        luasLingkaran();
    }else if(ulang == 'n'){
        system("cls");
        luasBangunDatar();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Luas Lingkaran ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        luasLingkaran();
    }else if(ulang == 'n'){
        system("cls");
        luasBangunDatar();
    }
    }
}

void volumeBangunRuang(){
    printf("==============================\n");
    printf("\tVolume Bangun Ruang\n");
    printf("==============================\n");
    printf("1. Volume Kubus\n");
    printf("2. Volume Prisma\n");
    printf("3. Volume Limas\n");
    printf("4. Volume Bola\n");
    printf("5. Kembali ke Menu Sebelumnya\n");
    printf("==============================\n");
    printf("Input Pilihan : ");
    scanf("%d", &input);

if(input > 5){
    printf("\nMenu Tidak Tersedia");
    getch();
    system("cls");
    volumeBangunRuang();
}
switch(input){
    case 1 :
        system("cls");
        volumeKubus();
        break;
case 2 :
        system("cls");
        volumePrisma();
        break;
case 3 :
        system("cls");
        volumelimas();
        break;
case 4 :
        system("cls");
        volumeBola();
        break;
case 5 :
        system("cls");
        kelilingLuas();
        break;
}
}

void volumeKubus(){
    char ulang;
    float sisi, volume;

    printf("Masukkan Panjang Sisi Kubus = ");
    scanf("%f", &sisi);
    volume = sisi * sisi * sisi;
    printf("Volume Kubus Adalah = %.2lf\n", volume);
    system("pause");
    printf("Apakah Ingin Mengulang Volume Kubus ? (y/n)");
    scanf("%s", &ulang);
if(ulang == 'y'){
        system("cls");
        volumeKubus();
    }else if(ulang == 'n'){
        system("cls");
        volumeBangunRuang();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Volume Kubus ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        volumeKubus();
    }else if(ulang == 'n'){
        system("cls");
        volumeBangunRuang();
    }
    }
}

void volumePrisma(){
    char ulang;
    float sisi, lebarAlas, tinggiSegitiga, jari_jari, diameter, tinggiPrisma;
    float volume1, volume2, volume3, volume4;
    const float phi = 3.14;

    printf("Masukkan Sisi Persegi = ");
    scanf("%f", &sisi);
    printf("Masukkan Lebar Alas Segitiga = ");
    scanf("%f", &lebarAlas);
    printf("Masukkan Tinggi Segitiga = ");
    scanf("%f", &tinggiSegitiga);
    printf("Masukkan Jari - Jari Lingkaran = ");
    scanf("%f", &jari_jari);
    printf("Masukkan Diameter Lingkaran = ");
    scanf("%f", &diameter);
    printf("Masukkan Tinggi Prisma = ");
    scanf("%f", &tinggiPrisma);

    volume1 = sisi * sisi * sisi;
    volume2 = 0.5 * lebarAlas * tinggiSegitiga * tinggiPrisma;
    volume3 = phi * jari_jari * jari_jari * tinggiPrisma;
    volume4 = phi * (diameter *0.5) * (diameter *0.5) * tinggiPrisma;

    printf("Volume Prisma Persegi adalah = %.2lf\n", volume1);
    printf("Volume Prisma Segitiga adalah = %.2lf\n", volume2);
    printf("Volume Silinder Berdasarkan Jari-Jari adalah = %.2lf\n", volume3);
    printf("Volume Silinder Berdasarkan Diameter adalah = %.2lf\n", volume4);
    system("pause");
    printf("Apakah Ingin Mengulang Volume Prisma ? (y/n)");
    scanf("%s", &ulang);
if(ulang == 'y'){
        system("cls");
        volumePrisma();
    }else if(ulang == 'n'){
        system("cls");
        volumeBangunRuang();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Volume Prisma ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        volumePrisma();
    }else if(ulang == 'n'){
        system("cls");
        volumeBangunRuang();
    }
    }
}

void volumelimas(){
    char ulang;
    float sisi, tinggiLimas, volume;
    const float phi = 3.14;

    printf("Masukkan Sisi Persegi = ");
    scanf("%f", &sisi);
    printf("Masukkan Tinggi Limas = ");
    scanf("%f", &tinggiLimas);

    volume = 0.33 * (sisi * sisi) * tinggiLimas;

    printf("Volume Limas adalah = %.2lf\n", volume);
    system("pause");
    printf("Apakah Ingin Mengulang Volume Limas ? (y/n)");
    scanf("%s", &ulang);
if(ulang == 'y'){
        system("cls");
        volumelimas();
    }else if(ulang == 'n'){
        system("cls");
        volumeBangunRuang();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Volume Limas ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        volumelimas();
    }else if(ulang == 'n'){
        system("cls");
        volumeBangunRuang();
    }
    }
}

void volumeBola(){
    char ulang;
    float jari_jari, volume;
    const float phi = 3.14;

    printf("Masukkan Jari - Jari Lingkaran = ");
    scanf("%f", &jari_jari);
    volume  = 1.33 * phi * jari_jari * jari_jari * jari_jari;;

    printf("Volume Bola adalah = %.2lf\n", volume);
    system("pause");
    printf("Apakah Ingin Mengulang Volume Bola ? (y/n)");
    scanf("%s", &ulang);
if(ulang == 'y'){
        system("cls");
        volumeBola();
    }else if(ulang == 'n'){
        system("cls");
        volumeBangunRuang();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Volume Bola ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        volumeBola();
    }else if(ulang == 'n'){
        system("cls");
        volumeBangunRuang();
    }
    }
}

void hitungAkar(){
    char ulang;
    double angka, akar;

    printf("Masukkan Bilangan yang Di Akar = ");
    scanf("%lf", &angka);
    akar = sqrt(angka);

    printf("Hasil Akar dari %.2lf adalah %.2lf\n", angka, akar);
    system("pause");
    printf("Apakah Ingin Mengulang Hitung Akar ? (y/n)");
    scanf("%s", &ulang);
if(ulang == 'y'){
        system("cls");
        hitungAkar();
    }else if(ulang == 'n'){
        system("cls");
        main();
    }else
    {
        system("cls");
        printf("Pilihan Tidak Tersedia\n");
        printf("Ingin Mengulang Hitung Akar ? (y/n)");
        scanf("%s", &ulang);

    if(ulang == 'y'){
        system("cls");
        hitungAkar();
    }else if(ulang == 'n'){
        system("cls");
        main();
    }
    }
}

void keluar(){
    printf("TERIMA KASIH ~ GOODLUCK\n");
    printf("");
    system("pause");
}
