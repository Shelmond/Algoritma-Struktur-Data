#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define MAX_PASIEN 4

// FUNGSI UTAMA PROGRAM
int main(){
    system("color 75");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 115);

    menuLogin();
    menuProgram();
return 0;
}
// ====================

// FUNGSI REGISTER LOGIN (OWEN)

char id[200];
char password[20];

void menuLogin(){

    int c;
        system("cls");
        printf("======================================\n");
        printf("Selamat Datang di Rumah Sakit Columbia\n");
        printf("======================================\n\n");
        printf("Silahkan Register atau Login\n");
        printf("1.Register\n");
        printf("2.Login\n");
        printf("Pilihan anda : ");
        scanf("%d",&c);

        switch(c){
        case 1:
            reg();
            break;
        case 2:
            login();
            break;
        default:
            fflush(stdin);
            system("cls");
            printf("Input salah, silahkan kembali ke menu");
            getch();
            main();
        }
}
void reg(){
        char key;
        int i = 0;
        system("cls");
        printf("Register ID = ");
        scanf(" %[^\n]s", &id);

        printf("Register Password = ");
        while((key = getch())!= 13){
            if(i < 0)
                i = 0;
            if(key == 8){
                if(i == 0)
                    continue;
                else{
                    printf("\b\b");
                    i--;
                    continue;
                }
            }
            if(i == 8){
                continue;
            }
            printf("*");
            password[i] = key;
            i++;
        }
        printf("\nRegister Berhasil, Silahkan Login");
        getch();
        system("cls");
        main();
}
void login(){
    char nama[100];
    char pass[8];
    int ulang;
    char key;
    while(1){
        int i = 0;
        system("cls");
        printf("Input userName = ");
        scanf(" %[^\n]s", &nama);

        printf("Input password = ");
        while((key = getch())!= 13){
            if(i < 0)
                i = 0;
            if(key == 8){
                if(i == 0)
                    continue;
                else{
                    printf("\b\b");
                    i--;
                    continue;
                }
            }
            if(i == 8){
                continue;
            }
            printf("*");
            pass[i] = key;
            i++;
        }
        pass[i]='\0';
        if(strcmp(id, nama)== 0 && strcmp(password,pass)==0)
        {
            system("cls");
            printf("==============\n");
            printf("Selamat datang\n");
            printf("==============");
            getch();
            system("cls");
            menuProgram();
            break;
        }
        else{
            int c;

            ulangLogin :
            system("cls");
            printf("Incorrect Username / Password\n");
            getch();
            printf("1. Silahkan kembali ke menu\n");
            printf("2. Kembali ke login\n");
            printf("Pilihan anda : ");
            scanf("%d", &c);

            switch (c){
            case 1:
                system("cls");
                main();
                break;
            case 2:
                system("cls");
                login();
                break;
            default:
                fflush(stdin);
                system("cls");
                printf("Input salah");
                getch();
                goto ulangLogin;
            }
            sleep(2000);
        }

    }
}

// ====================

// FUNGSI HALAMAN AWAL MENU PROGRAM

void menuProgram(){

    int log;

    printf("======================\n");
    printf("COLUMBIA ASIA HOSPITAL\n");
    printf("======================\n");
    printf("• Cek Kamar\n");
    printf("• Tambah Pasien\n");
    printf("• Pemesanan Kamar\n");
    printf("• Pembelian Obat\n");
    printf("• Pembayaran\n");
    printf("• Exit\n");
    printf("Input : ");
    scanf("%d", &log);

    switch(log){
case 1 :
    system("cls");
    lihatKamar();
    break;

case 2 :
    system("cls");
    daftar();
    break;

case 3 :
    system("cls");
    pesanKamar();
    break;

case 4 :
    system("cls");
    menuObat();
    break;

case 5 :
    system("cls");
    totalHarga();
    break;

case 6 :
    system("cls");
    keluar();
    break;

    default:
        printf("Maaf Pilihan Tidak Tersedia");
        fflush(stdin);
        getch();
        system("cls");
        menuProgram();
    }
}

// =========================

// FUNGSI UNTUK PENAMPILAN DAN PEMESANAN KAMAR (MARCEL & ENRICO)

struct Kamar {
    int nomorKamar;
    int isDipesan;
};
struct Kamar listKamar[4] = {
    {1, 0},
    {2, 0},
    {3, 0},
    {4, 0}
};
void lihatKamar(){
    printf("Daftar Kamar\n");
    printf("1. Kamar A %s\n", listKamar[0].isDipesan ? "penuh" : "");
    printf("2. Kamar B %s\n", listKamar[1].isDipesan ? "penuh" : "");
    printf("3. Kamar C %s\n", listKamar[2].isDipesan ? "penuh" : "");
    printf("4. Kamar D %s\n", listKamar[3].isDipesan ? "penuh" : "");
    system("pause");
    system("cls");
    menuProgram();
}
void pesanKamar(){
    int pilih;

    printf("Daftar Kamar\n");
    printf("1. Kamar A \n");
    printf("2. Kamar B \n");
    printf("3. Kamar C \n");
    printf("4. Kamar D \n");
    printf("Pesan Kamar: ");
    scanf("%d",&pilih);
    fflush(stdin);

   switch(pilih){
        case 1:
            system("cls");
            kamar1();
            break;
        case 2:
            system("cls");
            kamar2();
            break;
        case 3:
            system("cls");
            kamar3();
            break;
        case 4:
            system("cls");
            kamar4();
            break;
        default:
            printf("Pilihan Kamar Tidak Ada");
            getch();
            system("cls");
            pesanKamar();
   }

    if(listKamar[pilih-1].isDipesan){
        printf("Mohon maaf, Kamar sudah dipesan.\n");
        getch();
    } else {
        listKamar[pilih-1].isDipesan = 1;
        printf("Kamar berhasil di pesan.\n");
        getch();
    }
    system("cls");
    menuProgram();
}

struct kamar{
   char jeniskamar[30];
   int hargakamar;
};
int totalBiayaKamar1 = 0;
int totalBiayaKamar2 = 0;
int totalBiayaKamar3 = 0;
int totalBiayaKamar4 = 0;
void kamar1(){
    system("cls");
    struct kamar kamarpilihan1;
    int lamamenginap1;
    int totalbiaya1;
    strcpy(kamarpilihan1.jeniskamar, "Kamar A");
    kamarpilihan1.hargakamar = 200000;
    printf("\n=================================================");
    printf("\n=====================Kamar A=====================");
    printf("\n=================================================");
    printf("\n=Fasilitas :                                    =");
    printf("\n=1.Memiliki 6 bed(tempat tidur) di setiap kamar =");
    printf("\n=2.Memiliki 1 Kamar Mandi untuk Pasien          =");
    printf("\n=================================================");
    printf("\n\nHarga Kamar Per Hari RP.200.000");
    printf("\n\nMasukan Lama Menginap (dalam hari) : ");
    scanf ("%d",&lamamenginap1);
    fflush(stdin);
    system("cls");
    totalbiaya1 = kamarpilihan1.hargakamar * lamamenginap1;
    totalBiayaKamar1 = totalbiaya1;
    printf("Total biaya Kamar A adalah Rp. %d\n", totalbiaya1);
    printf("\nAnda memesan %s dengan harga Rp. %d per malam.\n", kamarpilihan1.jeniskamar, kamarpilihan1.hargakamar);
    getch();
}
void kamar2(){
    system("cls");
    struct kamar kamarpilihan2;
    int lamamenginap2;
    int totalbiaya2;
    strcpy(kamarpilihan2.jeniskamar, "Kamar B");
    kamarpilihan2.hargakamar = 400000;
    printf("\n=================================================");
    printf("\n=====================Kamar B=====================");
    printf("\n=================================================");
    printf("\n=Fasilitas :                                    =");
    printf("\n=1.Memiliki 4 bed(tempat tidur) di setiap kamar =");
    printf("\n=2.Memiliki 1 Kamar Mandi untuk Pasien          =");
    printf("\n=================================================");
    printf("\n\nHarga Kamar Per Hari RP.400.000");
    printf("\n\nMasukan Lama Menginap (dalam hari) : ");
    scanf("%d",&lamamenginap2);
    fflush(stdin);
    system("cls");
    totalbiaya2 = kamarpilihan2.hargakamar * lamamenginap2;
    totalBiayaKamar2 = totalbiaya2;
    printf("\nTotal Biaya Kamar B anda adalah Rp.%d\n",totalbiaya2);
    printf("Anda memesan %s dengan harga Rp. %d per malam.\n", kamarpilihan2.jeniskamar, kamarpilihan2.hargakamar);
    getch();
}
void kamar3(){
    system("cls");
    struct kamar kamarpilihan3;
    int lamamenginap3;
    int totalbiaya3;
    strcpy(kamarpilihan3.jeniskamar, "Kamar C");
    kamarpilihan3.hargakamar = 1000000;
    printf("\n===========================================================");
    printf("\n==========================Kamar C==========================");
    printf("\n===========================================================");
    printf("\n=Fasilitas :                                              =");
    printf("\n=1.Memiliki 2 bed(tempat tidur) di setiap kamar           =");
    printf("\n=2.Memiliki 1 Kamar Mandi untuk Pasien                    =");
    printf("\n=3.Memiliki AC untuk kenyamanan Pasien dan keluarga Pasien=");
    printf("\n===========================================================");
    printf("\n\nHarga Kamar Per Hari RP.1.000.000");
    printf("\n\nMasukan Lama Menginap (dalam hari) : ");
    scanf("%d",&lamamenginap3);
    fflush(stdin);
    system("cls");
    totalbiaya3 = kamarpilihan3.hargakamar * lamamenginap3;
    totalBiayaKamar3 = totalbiaya3;
    printf("\nTotal Biaya Kamar C anda adalah Rp.%d\n",totalbiaya3);
    printf("Anda memesan %s dengan harga Rp. %d per malam.\n", kamarpilihan3.jeniskamar, kamarpilihan3.hargakamar);
    getch();
}
void kamar4(){
    struct kamar kamarpilihan4;
    int lamamenginap4;
    int totalbiaya4;
    strcpy(kamarpilihan4.jeniskamar, "Kamar D");
    kamarpilihan4.hargakamar = 2000000;
    printf("\n================================================================================================");
    printf("\n============================================Kamar D=============================================");
    printf("\n================================================================================================");
    printf("\n=Fasilitas :                                                                                   =");
    printf("\n=1.Memiliki 1 bed(tempat tidur) di setiap kamar                                                =");
    printf("\n=2.Memiliki 1 Kamar Mandi untuk Pasien                                                         =");
    printf("\n=3.Memiliki AC untuk kenyamanan Pasien dan keluarga Pasien                                     =");
    printf("\n=4.Ruang tamu untuk kenyamanan keluarga pasien maupun penjenguk pasien                         =");
    printf("\n=5.Kulkas untuk keperluan menyimpan makanan dan minuman bagi pasien maupun bagi keluarga pasien=");
    printf("\n================================================================================================");
    printf("\n\nHarga Kamar Per Hari RP.2.000.000");
    printf("\n\nMasukan Lama Menginap (dalam hari) : ");
    scanf("%d",&lamamenginap4);
    fflush(stdin);
    system("cls");
    totalbiaya4 = kamarpilihan4.hargakamar * lamamenginap4;
    totalBiayaKamar4 = totalbiaya4;
    printf("\nTotal Biaya Kamar D anda adalah Rp.%d\n",totalbiaya4);
    printf("Anda memesan %s dengan harga Rp. %d per malam.\n", kamarpilihan4.jeniskamar, kamarpilihan4.hargakamar);
    getch();
}

// ====================

// FUNGSI UNTUK TAMBAH DATA PASIEN (SHELMOND)

typedef struct data_pasien {
    char nama[100];
    int umur;
    char alamat[100];
    char penyakit[100];
}pasien;
void input_data(struct data_pasien *pasien, int jumlah_pasien) {
    for (int i = 0; i < jumlah_pasien; i++) {
        if (i >= MAX_PASIEN) {
            printf("Jumlah maksimum pasien yang dapat diinput adalah %d\n", MAX_PASIEN);
            break;
        }
        printf("Input Data pasien : %d\n", i + 1);
        printf("Nama pasien: ");
        scanf(" %[^\n]s", &pasien[i].nama);
        printf("Umur: ");
        scanf("%d", &pasien[i].umur);
        printf("Alamat: ");
        scanf(" %[^\n]s", &pasien[i].alamat);
        printf("Keluhan: ");
        scanf(" %[^\n]s", &pasien[i].penyakit);
        printf("\n");
    }
}
void tampilkan_data(struct data_pasien *pasien, int jumlah_pasien) {
    for (int i = 0; i < jumlah_pasien && i < MAX_PASIEN; i++) {
        printf("Data pasien ke-%d\n", i + 1);
        printf("Nama pasien: %s\n", pasien[i].nama);
        printf("Umur Pasien: %d\n", pasien[i].umur);
        printf("Alamat Pasien: %s\n", pasien[i].alamat);
        printf("Penyakit Yang Di Derita: %s\n", pasien[i].penyakit);
        printf("\n");
    }
}
void daftar() {
    static struct data_pasien pasien[MAX_PASIEN];
    static int jumlah_pasien = 0;
    int pilihan, menuPas;

    do {
        printf("===============================================\n");
        printf("======Pendaftaran Data Pasien Rumah Sakit======\n");
        printf("===============================================\n");

        printf("1. Input Data pasien\n");
        printf("2. Lihat Data pasien\n");
        printf("3. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &menuPas);

        switch(menuPas) {
            case 1 :
                system("cls");
                printf("==========================================\n");
                printf("===========Input Data pasien==============\n");
                printf("==========================================\n");
                printf("Berapa Data pasien Yang Ingin Di input: ");
                scanf("%d", &jumlah_pasien);
                input_data(pasien, jumlah_pasien);
                printf("Tekan Apa Saja Untuk Kembali\n");
                getch();
                system("cls");
                break;

            case 2 :
                system("cls");
                if (jumlah_pasien == 0) {
                    printf("Data pasien masih kosong, silahkan input data terlebih dahulu\n");
                } else {
                    tampilkan_data(pasien, jumlah_pasien);
                }
                printf("Tekan Apa Saja Untuk Kembali\n");
                getch();
                system("cls");
                daftar();
                break;

            case 3 :
                system("cls");
                printf("Terima Kasih, Data Anda Sudah Kami Terima\n");
                getch();
                system("cls");
                menuProgram();
                break;

            default:
                printf("\nMenu Tidak Tersedia");
                fflush(stdin);
                getch();
                system("cls");
                break;
        }

    } while (menuPas != 3);

    return 0;
}


//==================================

// FUNGSI OBAT (YESAYA)

int totalObat1 = 0;
int totalObat2 = 0;
int totalObat3 = 0;
int totalObat4 = 0;
void menuObat(){
    int pilih;

    printf("===============================\n");
    printf("Daftar Paket Obat Columbia Asia\n");
    printf("===============================\n");
    printf("> Paket Kanker\n");
    printf("> Paket Diabetes\n");
    printf("> Paket Hipertensi\n");
    printf("> Paket Kolestrol\n");
    printf("> Kembali ke Menu\n");
    printf("Pesan Obat Anda : ");
    scanf("%d", &pilih);

    switch(pilih){
    case 1:
        system("cls");
        obat1();
        break;
    case 2:
        system("cls");
        obat2();
        break;
    case 3:
        system("cls");
        obat3();
        break;
    case 4:
        system("cls");
        obat4();
        break;
    case 5:
        system("cls");
        menuProgram();
        break;

    default:
        printf("Maaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        menuObat();
    }

    return 0;
}
void obat1(){

    char pilih;
    float hargaObat1 = 2700000;
    totalObat1 = hargaObat1;
    printf("Paket Obat - Obatan Untuk Penderita Kanker\n");
    printf("• Agen Alkylating\n");
    printf("• Inhibitor Mitosis\n");
    printf("• Inhibitor Topoisomerase\n");
    printf("Apakah anda yakin ingin memesan paket obat ini? \n");
    printf("Jawaban ( y/n ) : ");
    scanf(" %c", &pilih);

    if(pilih == 'y'){
        printf("Terima kasih sudah membeli obat ini, semoga lekas pulih");
        getch();
        system("cls");
        menuObat();
    } else if (pilih == 'n') {
        printf("Baik, semoga anda lekas pulih meski tanpa obat kami");
        getch();
        system("cls");
        menuObat();
    } else {
        printf("Maaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        obat1();
    }

}
void obat2(){

    char pilih;
    float hargaObat2 = 2500000;
    totalObat2 = hargaObat2;
    printf("Paket Obat - Obatan Untuk Penderita Diabetes\n");
    printf("• Metformin\n");
    printf("• Sulfonilurea\n");
    printf("• Meglitinide\n");
    printf("Apakah anda yakin ingin memesan paket obat ini? \n");
    printf("Jawaban ( y/n ) : ");
    scanf(" %c", &pilih);

    if(pilih == 'y'){
        printf("Terima kasih sudah membeli obat ini, semoga lekas pulih");
        getch();
        system("cls");
        menuObat();
    } else if (pilih == 'n') {
        printf("Baik, semoga anda lekas pulih meski tanpa obat kami");
        getch();
        system("cls");
        menuObat();
    } else {
        printf("Maaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        obat2();
    }
}
void obat3(){

    char pilih;
    float hargaObat3 = 1750000;
    totalObat3 = hargaObat3;
    printf("Paket Obat - Obatan Untuk Penderita Hipertensi\n");
    printf("• Atorvastatin\n");
    printf("• Amblodipin\n");
    printf("• Diuretik\n");
    printf("Apakah anda yakin ingin memesan paket obat ini? \n");
    printf("Jawaban ( y/n ) : ");
    scanf(" %c", &pilih);

    if(pilih == 'y'){
        printf("Terima kasih sudah membeli obat ini, semoga lekas pulih");
        getch();
        system("cls");
        menuObat();
    } else if (pilih == 'n') {
        printf("Baik, semoga anda lekas pulih meski tanpa obat kami");
        getch();
        system("cls");
        menuObat();
    } else {
        printf("Maaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        obat3();
    }
}
void obat4(){

    char pilih;
    float hargaObat4 = 1500000;
    totalObat4 = hargaObat4;
    printf("Paket Obat - Obatan Untuk Penderita Kolestrol\n");
    printf("• Bile Acid Sequestrants\n");
    printf("• Statin\n");
    printf("• Niacin\n");
    printf("Apakah anda yakin ingin memesan paket obat ini? \n");
    printf("Jawaban ( y/n ) : ");
    scanf(" %c", &pilih);

    if(pilih == 'y'){
        printf("Terima kasih sudah membeli obat ini, semoga lekas pulih");
        getch();
        system("cls");
        menuObat();
    } else if (pilih == 'n') {
        printf("Baik, semoga anda lekas pulih meski tanpa obat kami");
        getch();
        system("cls");
        menuObat();
    } else {
        printf("Maaf Input Yang Anda Berikan Salah");
        fflush(stdin);
        getch();
        system("cls");
        obat4();
    }
}


void totalHarga(){
    int pilihtotal;
    float biaya2, biaya3, biaya4, totalSemua;
    printf("TOTAL HARGA\n");
    printf("1. Kamar A \n");
    printf("2. Kamar B \n");
    printf("3. Kamar C \n");
    printf("4. Kamar D \n");
    printf("Total harga yang ingin di pilih: ");
    scanf("%d",&pilihtotal);
    switch(pilihtotal){
        case 1:
            system("cls");
            totalSemua = totalBiayaKamar1 + totalObat1;
            printf("Total Harga Yang Anda Harus Bayar beserta obat Adalah = %.0f", totalSemua);
            getch();
            system("cls");
            menuProgram();
            break;
        case 2:
            system("cls");
            totalSemua = totalBiayaKamar2 + totalObat2;
            printf("Total Harga Yang Anda Harus Bayar beserta obat Adalah = %.0f", totalSemua);
            getch();
            system("cls");
            menuProgram();
            break;
        case 3:
            system("cls");
            totalSemua = totalBiayaKamar3 + totalObat3;
            printf("Total Harga Yang Anda Harus Bayar  beserta obat Adalah = %.0f", totalSemua);
            getch();
            system("cls");
            menuProgram();
            break;
        case 4:
            system("cls");
            totalSemua = totalBiayaKamar4 + totalObat4;
            printf("Total Harga Yang Anda Harus Bayar beserta obat  Adalah = %.0f", totalSemua);
            getch();
            system("cls");
            menuProgram();
            break;
        default:
            printf("Pilihan Total Biaya Tidak Ada");
            getch();
            system("cls");
            totalHarga();
   }

}


// =====================================


// FUNGSI EXIT PROGRAM (OWEN)

void keluar(){

printf("\n\n\n\n\n\n\n                                            Dibuat Oleh :\n\n\n\n");
printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("S");Sleep(100);printf("H");Sleep(100);printf("E");Sleep(100);printf("L");Sleep(100);printf("M");Sleep(100);printf("O");printf("N"); printf("D");printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);
printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("3");
Sleep(100);printf("0");Sleep(100);printf("0");Sleep(100);printf("\n\n");

printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("O");Sleep(100);printf("W");Sleep(100);printf("E");Sleep(100);printf("N");Sleep(100);printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("1");
Sleep(100);printf("7");Sleep(100);printf("1");Sleep(100);printf("\n\n");

printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("Y");Sleep(100);printf("E");Sleep(100);printf("S");Sleep(100);printf("A");Sleep(100);printf("Y");Sleep(100);printf("A");printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);
printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("1");
Sleep(100);printf("1");Sleep(100);printf("1");Sleep(100);printf("\n\n");

printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("E");Sleep(100);printf("N");Sleep(100);printf("R");Sleep(100);printf("I");Sleep(100);printf("C");printf("O");printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);
printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("0");
Sleep(100);printf("3");Sleep(100);printf("8");Sleep(100);printf("\n\n");

printf("                                 ");printf("N");Sleep(100);printf("a");Sleep(100);printf("m");Sleep(100);printf("a");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("M");Sleep(100);printf("A");Sleep(100);printf("R");Sleep(100);printf("C");Sleep(100);printf("E");Sleep(100);printf("L");printf("\n");
printf("                                 ");printf("N");Sleep(100);printf("i");Sleep(100);printf("m");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);
printf("6");Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("0");
Sleep(100);printf("1");Sleep(100);printf("8");Sleep(100);printf("\n\n");
printf("\n\n");
exit(0);
}

// =========================
