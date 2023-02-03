#include <stdio.h>
#include <stdlib.h>

int main(){

    int menu, input, i, j, k;
        printf("MENU \n\n");
        printf("• Level 1\n");
        printf("• Level 2\n");
        printf("• Level 3\n");
        printf("• Exit\n\n");
        printf(" Pilih Menu : ");
        scanf("%d", &menu);

    switch(menu){
case 1 :
    system("cls");
    printf("Masukkan Input Angka : ");
    scanf("%d", &input);
    for(i = 0; i <= input; i++){
            for(j = 0; j <= i; j++){
                            printf("%d", i+j);
            }
    printf("\n");
    }
    break;


case 2 :
    system("cls");
    printf("Masukkan Input Angka : ");
    scanf("%d", &input);
        for(i = 1; i <= input; i++){
            for(j = 1; j <= i; j++){
                            printf("%d", i*j);
            }
    printf("\n");
    }
    break;

case 3 :
    system("cls");
    printf("Masukkan Input Angka : ");
    scanf("%d", &input);
        for(i = 0; i < input; i++){
            for(j = i; j < input; j ++){
                printf(" ");
            }
            for(j = 0; j <= i; j++){
                printf("%d", j+1);
            }
            for(j = i; j > 0; j--){
                 printf("%d", j);
            }
            printf("\n");
        }

        for(i = input - 1; i > 0; i--){
            for(j = i; j <= input; j++){
                printf(" ");
            }
            for(j = 1; j <= i; j++){
                printf("%d", j);
            }
            for (j = i -1; j >= 1; j--){
                 printf("%d", j);
            }
            printf("\n");
        }
break;

case 4 :
    system("cls");
    printf("Selesai, terima kasih atas bimbingannya kak >_< \n\n");

break;

    return 0;
}
}
